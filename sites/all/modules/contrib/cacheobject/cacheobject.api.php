<?php

/**
 * Invoked after objects were loaded from the cache.
 *
 * @return boolean|null
 *   Return FALSE to prevent the object from being returned.
 */
function hook_cacheobject_load($objects, $cids, $bin) {
}

/**
 * Invoked before an object is put into the cache.
 *
 * @return boolean|null
 *   Return FALSE to prevent the object from being saved.
 */
function hook_cacheobject_presave($object, $cid, $bin) {
}

/**
 * Invoked before data is expired from the cache.
 *
 * @return boolean|null
 *   Return FALSE to prevent the cache from being cleared.
 */
function hook_cacheobject_clear($cid, $wildcard, $bin) {
}
