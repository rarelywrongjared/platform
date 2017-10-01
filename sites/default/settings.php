<?php

$site_name = basename(__DIR__);

$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['memcache_key_prefix'] = $site_name . '_';


$conf['cache_backends'][] = 'sites/all/modules/contrib/cacheobject/cacheobject.inc';
$conf['cache_backends'][] = 'sites/all/modules/contrib/authcache/authcache.cache.inc';
$conf['cache_backends'][] = 'sites/all/modules/contrib/authcache/modules/authcache_builtin/authcache_builtin.cache.inc';

$conf['cache_class_cache_form'] = 'CacheObjectAPIWrapper';
$conf['cacheobject_class_cache_form'] = 'MemCacheDrupal';
$conf['authcache_builtin_cache_without_database'] = TRUE;
$conf['cache_class_cache_page'] = 'MemCacheDrupal';
$conf['cache_class_cache_authcache_key'] = 'MemCacheDrupal';
$conf['cache_class_cache_bootstrap'] = 'MemCacheDrupal';
$conf['authcache_builtin_cache_without_database'] = TRUE;
$conf['authcache_p13n_frontcontroller_path'] = 'authcache.php';


  //advagg bundler settings
  $conf['advagg_bundler_active'] = 1;
  $conf['advagg_bundler_max_css'] = 1;
 $conf['advagg_bundler_max_js'] = 1;
  $conf['advagg_bundler_grouping_logic'] = 0;

  //advagg css compression
//  $conf['advagg_css_compressor'] = 2;
 // $conf['advagg_css_compress_inline'] = 2;


  //advagg js compression
  $conf['advagg_js_compressor'] = 3;
  $conf['advagg_js_compress_inline'] = 3;
  $conf['advagg_js_compress_add_license'] = 0;

  //advagg modifications
  $conf['advagg_mod_js_preprocess'] = 1;
  $conf['advagg_mod_js_head_extract'] = 1;
  $conf['advagg_mod_js_adjust_sort_external'] = 1;
  $conf['advagg_mod_js_adjust_sort_inline'] = 1;
  $conf['advagg_mod_js_adjust_sort_browsers'] = 1;
  $conf['advagg_mod_js_defer'] = 0;
  $conf['advagg_mod_js_footer_inline_alter'] = 1;
  $conf['advagg_mod_js_footer'] = 1;
  $conf['advagg_mod_css_preprocess'] = 1;
  $conf['advagg_mod_css_head_extract'] = 1;
  $conf['advagg_mod_css_adjust_sort_external'] = 1;
  $conf['advagg_mod_css_adjust_sort_inline'] = 1;
  $conf['advagg_mod_css_adjust_sort_browsers'] = 1;
 $conf['advagg_mod_inline_css_pages'] = '*';

include_once('./sites/all/modules/contrib/fast_404/fast_404.inc');
$conf['fast_404_exts'] = '/^(?!robots).*\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i';
$conf['fast_404_exts'] = '/^(?!help\/)(?!robots).*\.(txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/';
$conf['fast_404_allow_anon_imagecache'] = TRUE;
$conf['fast_404_html'] = '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>';
# Check paths during bootstrap and see if they are legitimate.
$conf['fast_404_path_check'] = FALSE;
$conf['fast_404_url_whitelisting'] = FALSE;
# Array of whitelisted files/urls. Used if whitelisting is set to TRUE.
$conf['fast_404_whitelist'] = array('index.php', 'rss.xml', 'install.php', 'cron.php', 'update.php', 'xmlrpc.php');
# Array of whitelisted URL fragment strings that conflict with fast_404.
$conf['fast_404_string_whitelisting'] = array('cdn/farfuture', '/advagg_');
$conf['fast_404_HTML_error_all_paths'] = FALSE;


# fuck nginx
$conf['advagg_skip_far_future_check'] = TRUE;



if (file_exists(__DIR__ . '/settings.local.php')) {
 require_once(__DIR__ . '/settings.local.php');
}

