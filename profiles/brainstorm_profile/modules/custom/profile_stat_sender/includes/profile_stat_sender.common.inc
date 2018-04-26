<?php

/**
 * @file
 * Contains functions that prepare and send data.
 */

/**
 * Makes http POST request to server.
 *
 * @return numeric
 *   Returns response code from server.
 */
function profile_stat_sender_send_data() {
  $data = profile_stat_sender_fetch_data();
  $data = http_build_query($data);

  $options = array(
    'method' => 'POST',
    'headers' => array('Content-Type' => 'application/x-www-form-urlencoded'),
    'data' => $data,
  );

  $server_url = profile_stat_sender_get_server_url();
  $response = drupal_http_request($server_url, $options);

  return $response->code;
}

/**
 * Fetches data about site into associative array.
 *
 * @return array
 *   Associative array containing data about this site.
 */
function profile_stat_sender_fetch_data() {
  // If key doesn't exist, create new.
  $key = variable_get('profile_stat_site_key', FALSE);
  if (!$key) {
    // Generate site key from hash because all keys must have same length.
    $key = md5(microtime() . mt_rand() . $_SERVER['HTTP_HOST']);
    variable_set('profile_stat_site_key', $key);
  }

  $data = array(
    'site_key' => $key,
    'name' => variable_get('site_name'),
    'profile' => drupal_get_profile(),
    'url' => profile_stat_sender_get_url(),
  );

  return $data;
}

/**
 * Returns server url from datafile.
 *
 * @return string
 *   Returns decrypted server url.
 */
function profile_stat_sender_get_server_url() {
  $path = drupal_get_path('module', 'profile_stat_sender');
  $server_url = file_get_contents($path . '/includes/profile_stat_sender_data.inc');
  $server_url = trim($server_url);

  return $server_url;
}

/**
 * Builds site URL.
 *
 * @return string
 *   Current site URL.
 */
function profile_stat_sender_get_url() {
  $is_https = isset($_SERVER['HTTPS']) && strtolower($_SERVER['HTTPS']) == 'on';
  $http_protocol = $is_https ? 'https' : 'http';
  $url = $http_protocol . '://' . $_SERVER['HTTP_HOST'];
  if ($dir = rtrim(dirname($_SERVER['SCRIPT_NAME']), '\/')) {
    $url .= $dir;
  }

  return $url;
}
