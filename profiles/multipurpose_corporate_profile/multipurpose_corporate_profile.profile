<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */

if (!function_exists("system_form_install_configure_form_alter")) {
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'multipurpose_corporate_profile';
  }
}

/**
 * Implements hook_form_alter().
 *
 * Select the current install profile by default.
 */
if (!function_exists("system_form_alter")) {
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $profile_name => $profile_data) {
      $form['profile'][$profile_name]['#value'] = 'multipurpose_corporate_profile';
    }
  }
}

/**
 * Implements hook_install_tasks().
 *
 * @param array $install_state
 * An array of information about the current installation state.
 *
 * 'display_name': step name, visible for user. NOTE: function t() is not
 * yet avaliable on install process, so you should use st() * instead.
 *
 * 'display': TRUE or FALSE. In case of no display_name or FALSE value,
 *  step will be hidden from steps list.
 *
 * 'type': There are 3 values possible:
 * - "Normal" could return HTML content or NULL if step completed. Set to
 *   default.
 * - "Batch" means that the step should be executed via Batch API.
 * - "Form" is used when the step requires to be presented as a form. We
 *   used Form in our example, because we need to receive some * info from user.
 *
 * 'run': Can be INSTALL_TASK_RUN_IF_REACHED, INSTALL_TASK_RUN_IF_NOT_COMPLETED
 * or INSTALL_TASK_SKIP.
 * - INSTALL_TASK_RUN_IF_REACHED - means that the task should be executed on
 *   each step oo the install process. Mostly used by core functions.
 * - INSTALL_TASK_RUN_IF_NOT_COMPLETED - run task once during install.
 *   Set to default.
 * - INSTALL_TASK_SKIP - skip task. Can be useful, if previous steps info tells
 *   us that the task not needed and should be skipped. *   function - a
 *   function to execute when step is reached. If not set, machine_name function
 *   will be called.
 */
function multipurpose_corporate_profile_install_tasks($install_state) {
  $tasks = array();
  $tasks['multipurpose_corporate_profile_custom_settings'] = array(
    'display' => FALSE,
  );
  $tasks['multipurpose_corporate_profile_blocks_turning'] = array(
    'display' => FALSE,
  );
  $tasks['multipurpose_corporate_profile_public_files_copy'] = array(
    'display' => FALSE,
  );
  return $tasks;
}

/**
 * Our custom task.
 * Custom settings help to display content correctly.
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 */
function multipurpose_corporate_profile_custom_settings($install_state) {
  $node = node_load(3);
  if (!empty($node)) {
    $node->path = array(
      'alias' => 'about-us',
      'pathauto' => FALSE,
      'language' => 'und',
    );
    node_save($node);
  }
  $node = node_load(6);
  if (!empty($node)) {
    $node->path = array(
      'alias' => 'contact-us',
      'pathauto' => FALSE,
      'language' => 'und',
    );
    node_save($node);
  }
  variable_set('menu_block_2_parent','main-menu:468');
}

/**
 * Our custom task.
 * Enable and turning blocks
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 */
function multipurpose_corporate_profile_blocks_turning($install_state) {
  $modules = array();
  if (!module_exists('features_blocks')) {
    $modules[] = 'features_blocks';
  }
  if (!module_exists('features_menu')) {
    $modules[] = 'features_menu';
  }
  if (!empty($modules)) {
    module_enable($modules);
  }
}

/**
 * Our custom task.
 * Copy public files for default theme
 *
 * @param array $install_state: An array of information about the current
 * installation state.
 */
function multipurpose_corporate_profile_public_files_copy($install_state) {
  $source = 'profiles/multipurpose_corporate_profile/node_export_assets/adaptivetheme/';
  $res = 'sites/default/files/adaptivetheme/';
  multipurpose_corporate_profile_recurse_copy($source, $res);
  $image_source = 'profiles/multipurpose_corporate_profile/node_export_assets/logo.png';
  $image_res = 'sites/default/files/logo.png';
  copy($image_source, $image_res);
  $image_source = 'profiles/multipurpose_corporate_profile/node_export_assets/img.jpg';
  $image_res = 'sites/default/files/img.jpg';
  copy($image_source, $image_res);
  $source = drupal_realpath('profiles/multipurpose_corporate_profile/node_export_assets/default_blog_pic.jpg');
  $file = (object) array(
    'uid' => 1,
    'uri' => $source ,
    'filemime' => file_get_mimetype($source),
    'status' => 1,
  );
  // We save the file to the root of the files directory.
  drupal_mkdir('public://default_images/');
  $file = file_copy($file, 'public://default_images/default_blog_pic.jpg');
}

/**
 * Recursive copy.
 *
 * @param string $src
 * - Source folder with files.
 * @param string $dst
 * - Destination folder.
 */
function multipurpose_corporate_profile_recurse_copy($src, $dst) {
  $dir = opendir($src);
  @mkdir($dst);
  while (FALSE !== ($file = readdir($dir))) {
    if (($file != '.') && ($file != '..')) {
      if (is_dir($src . '/' . $file)) {
        multipurpose_corporate_profile_recurse_copy($src . '/' . $file, $dst . '/' . $file);
      }
      else {
        copy($src . '/' . $file, $dst . '/' . $file);
      }
    }
  }
  closedir($dir);
}

