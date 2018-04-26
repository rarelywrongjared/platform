<?php
/**
 * @file
 * feature_variables.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_variables_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_variables_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_breadcrumbs_paths_features_default_settings().
 */
function feature_variables_custom_breadcrumbs_paths_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: about_us.
  $custom_breadcrumbs['about_us'] = array(
    'name' => 'About us',
    'titles' => 'Home
About us',
    'paths' => 'home
about-us',
    'visibility_php' => '',
    'specific_path' => 'about-us',
    'language' => '',
    'machine_name' => 'about_us',
  );

  // Exported custom breadcrumb: contacts.
  $custom_breadcrumbs['contacts'] = array(
    'name' => 'Contacts',
    'titles' => 'Home
Contacts',
    'paths' => 'home
contact-us',
    'visibility_php' => '',
    'specific_path' => 'contact-us',
    'language' => '',
    'machine_name' => 'contacts',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_custom_breadcrumbs_views_features_default_settings().
 */
function feature_variables_custom_breadcrumbs_views_features_default_settings() {
  $custom_breadcrumbs = array();

  // Exported custom breadcrumb: blog.
  $custom_breadcrumbs['blog'] = array(
    'name' => 'Blog',
    'titles' => '[variable:custom_breadcrumb_home] 
Blog',
    'paths' => 'home
blog',
    'visibility_php' => '',
    'views_path' => 'blog',
    'language' => '',
    'machine_name' => 'blog',
  );

  // Exported custom breadcrumb: portfolio.
  $custom_breadcrumbs['portfolio'] = array(
    'name' => 'Portfolio',
    'titles' => '[variable:custom_breadcrumb_home] 
Portfolio',
    'paths' => 'home
portfolio',
    'visibility_php' => '',
    'views_path' => 'portfolio',
    'language' => '',
    'machine_name' => 'portfolio',
  );

  return $custom_breadcrumbs;
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function feature_variables_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F d, Y'] = 'F d, Y';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function feature_variables_date_format_types() {
  $format_types = array();
  // Exported date format type: blog_
  $format_types['blog_'] = 'Blog';
  // Exported date format type: portfolio
  $format_types['portfolio'] = 'Portfolio';
  return $format_types;
}
