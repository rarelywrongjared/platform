<?php
/**
 * @file
 * features_test_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_test_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
