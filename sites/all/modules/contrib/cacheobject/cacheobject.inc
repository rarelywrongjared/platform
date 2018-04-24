<?php

/**
 * @file
 * Provides Cache Object API wrapper class.
 */

/**
 * Provides a cache class exposing hooks operating on objects before they are
 * stored to and after they were received from the cache.
 */
class CacheObjectAPIWrapper implements DrupalCacheInterface {
  /**
   * Underlying cache implementation.
   */
  protected $delegate;

  /**
   * Cache bin.
   */
  protected $bin;

  /**
   * Constructs a new cache interface.
   *
   * @param $bin
   *   The cache bin for which the object is created.
   */
  public function __construct($bin) {
    $this->bin = $bin;

    $class = $this->getDelegateClass();
    $this->delegate = new $class($bin);
  }

  /**
   * Returns data from the persistent cache.
   *
   * Data may be stored as either plain text or as serialized data. cache_get()
   * will automatically return unserialized objects and arrays.
   *
   * @param $cid
   *   The cache ID of the data to retrieve.
   *
   * @return
   *   The cache or FALSE on failure.
   */
  public function get($cid) {
    $result = $this->delegate->get($cid);
    $deliver = module_invoke_all('cacheobject_load', array($result), array($cid), $this->bin);

    if (!$this->checkResult($deliver)) {
      return NULL;
    }

    return $result;
  }

  /**
   * Returns data from the persistent cache when given an array of cache IDs.
   *
   * @param $cids
   *   An array of cache IDs for the data to retrieve. This is passed by
   *   reference, and will have the IDs successfully returned from cache
   *   removed.
   *
   * @return
   *   An array of the items successfully returned from cache indexed by cid.
   */
  public function getMultiple(&$cids) {
    $result = $this->delegate->getMultiple($cids);
    $deliver = module_invoke_all('cacheobject_load', $result, $this->cids, $this->bin);

    if (!$this->checkResult($deliver)) {
      return array();
    }

    return $result;
  }

  /**
   * Stores data in the persistent cache.
   *
   * @param $cid
   *   The cache ID of the data to store.
   * @param $data
   *   The data to store in the cache. Complex data types will be automatically
   *   serialized before insertion.
   *   Strings will be stored as plain text and not serialized.
   * @param $expire
   *   One of the following values:
   *   - CACHE_PERMANENT: Indicates that the item should never be removed unless
   *     explicitly told to using cache_clear_all() with a cache ID.
   *   - CACHE_TEMPORARY: Indicates that the item should be removed at the next
   *     general cache wipe.
   *   - A Unix timestamp: Indicates that the item should be kept at least until
   *     the given time, after which it behaves like CACHE_TEMPORARY.
   */
  public function set($cid, $data, $expire = CACHE_PERMANENT) {
    $object = (object) array(
      'cid' => $cid,
      'data' => $data,
      'expire' => $expire,
    );

    $save = module_invoke_all('cacheobject_presave', $object, $cid, $this->bin);

    if (!$this->checkResult($save)) {
      return;
    }

    $this->delegate->set($object->cid, $object->data, $object->expire);
  }


  /**
   * Expires data from the cache.
   *
   * If called without arguments, expirable entries will be cleared from the
   * cache_page and cache_block bins.
   *
   * @param $cid
   *   If set, the cache ID to delete. Otherwise, all cache entries that can
   *   expire are deleted.
   * @param $wildcard
   *   If set to TRUE, the $cid is treated as a substring
   *   to match rather than a complete ID. The match is a right hand
   *   match. If '*' is given as $cid, the bin $bin will be emptied.
   */
  public function clear($cid = NULL, $wildcard = FALSE) {
    $clear = module_invoke_all('cacheobject_clear', $cid, $wildcard, $this->bin);

    if (!$this->checkResult($clear)) {
      return;
    }

    $this->delegate->clear($cid, $wildcard);
  }

  /**
   * Checks if a cache bin is empty.
   *
   * A cache bin is considered empty if it does not contain any valid data for
   * any cache ID.
   *
   * @return
   *   TRUE if the cache bin specified is empty.
   */
  public function isEmpty() {
    return $this->delegate->isEmpty();
  }

  /**
   * Check whether a hook returned FALSE in order to cancel the caching
   * operation in question.
   */
  protected function checkResult($results) {
    foreach ($results as $result) {
      if ($result === FALSE) {
        return FALSE;
      }
    }

    return TRUE;
  }

  /**
   * Return the name of the delegate class for the current bin.
   *
   * First try to determine the delegate class by reading the following settings
   * in this exact order:
   * 1. $conf['cacheobject_class_BIN'] // where BIN is the cache bin for
   *    this object. E.g. cacheobject_class_cache_form.
   * 2. $conf['cacheobject_default_class']
   * 3. $conf['cache_default_class']
   *
   * If none of these settings contain a class name, DrupalDatabaseCache is
   * returned.
   *
   * @return string
   *   The name of the class to be used as the delegate cache class.
   */
  protected function getDelegateClass() {
    $class = variable_get('cacheobject_class_' . $this->bin);
    if (isset($class) && $class != 'CacheObjectAPIWrapper') {
      return $class;
    }

    $class = variable_get('cacheobject_default_class');
    if (isset($class) && $class != 'CacheObjectAPIWrapper') {
      return $class;
    }

    $class = variable_get('cache_default_class');
    if (isset($class) && $class != 'CacheObjectAPIWrapper') {
      return $class;
    }

    return 'DrupalDatabaseCache';
  }
}
