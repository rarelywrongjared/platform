Cache Object API
================

This module provides a cache class exposing hooks allowing other code to
intercept calls to the caching layer. by implementing those hooks it is
possible to alter expiry before an object is saved to the database or to
prevent a cache flush under some condition.

Installation
------------

In order to expose the cache object hooks only for the cache_form bin, put the
following lines into your settings.php:

    # Include the Cache Object API Wrapper as a cache backend
    $conf['cache_backends'][] = 'sites/all/modules/cacheobject/cacheobject.inc';
    
    # Set the cache class for the form cache to 
    $conf['cache_class_cache_form'] = 'CacheObjectAPIWrapper';
    
    # Optionally set the underlying cache class
    $conf['cacheobject_class_cache_form'] = 'DrupalDatabaseCache';

When the underlying cache class is not specified, the cache object wrapper falls
back to $conf['cacheobject_class'] and if that does not exist to
$conf['cache_class'] and finally to DrupalDatabaseCache.
