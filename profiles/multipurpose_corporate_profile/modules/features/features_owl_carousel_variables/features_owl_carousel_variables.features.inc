<?php
/**
 * @file
 * features_owl_carousel_variables.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_owl_carousel_variables_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
