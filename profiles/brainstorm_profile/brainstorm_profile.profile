<?php
/**
 * @file
 * Enables modules and site configuration for a standard site installation.
 */

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function system_form_install_configure_form_alter(&$form, $form_state) {
  // Add new option at configure site form. If checkbox will be selected, we
  // enable custom module, which sends usage statistics.
  if (!function_exists("system_form_install_configure_form_alter")) {
    $form['site_information']['site_name']['#default_value'] = 'brainstorm_profile';
  }
  $form['additional_settings'] = array(
    '#type' => 'fieldset',
    '#title' => st('Additional settings'),
    '#collapsible' => FALSE,
  );
  $form['additional_settings']['send_message'] = array(
    '#type' => 'checkbox',
    '#title' => 'Send info to developers team',
    '#description' => st('Send reports to developers. We use anonymous data about your site (URL and site-name) to fix issues and ensure great user experience.'),
    '#default_value' => TRUE,
  );

  $form['#submit'][] = 'system_form_install_configure_form_custom_submit';
}

/**
 * Function system_form_install_configure_form_custom_submit().
 */
function system_form_install_configure_form_custom_submit($form, &$form_state) {
  if ($form_state['values']['send_message']) {
    if (!module_exists('profile_stat_sender')) {
      module_enable(array('profile_stat_sender'), FALSE);
    }
  }
}

/**
 * Implements hook_form_alter() for install_select_profile_form().
 *
 * Select the current install profile by default.
 */
function system_form_install_select_profile_form_alter(&$form, $form_state) {
  if (!function_exists("system_form_alter")) {
    foreach ($form['profile'] as $profile_name => $profile_data) {
      $form['profile'][$profile_name]['#value'] = 'brainstorm_profile';
    }
  }
}

/**
 * Implements hook_install_tasks().
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 *
 *   'display_name': step name, visible for user. NOTE: function t() is not
 *   yet avaliable on install process, so you should use st() * instead.
 *
 *   'display': TRUE or FALSE. In case of no display_name or FALSE value,
 *   step will be hidden from steps list.
 *
 *   'type': There are 3 values possible:
 *   - "Normal" could return HTML content or NULL if step completed. Set to
 *   default.
 *   - "Batch" means that the step should be executed via Batch API.
 *   - "Form" is used when the step requires to be presented as a form. We
 *   used Form in our example, because we need to receive some * info from user.
 *
 *   'run': Can be INSTALL_TASK_RUN_IF_REACHED, INSTALL_TASK_RUN_IF_NOT_COMPLETED
 *   or INSTALL_TASK_SKIP.
 *   - INSTALL_TASK_RUN_IF_REACHED - means that the task should be executed on
 *    each step oo the install process. Mostly used by core functions.
 *   - INSTALL_TASK_RUN_IF_NOT_COMPLETED - run task once during install.
 *   Set to default.
 *   - INSTALL_TASK_SKIP - skip task. Can be useful, if previous steps info
 *   tells us that the task not needed and should be skipped. *   function - a
 *   function to execute when step is reached. If not set, machine_name function
 *   will be called.
 */
function brainstorm_profile_install_tasks($install_state) {
  $tasks = array();
  $tasks['brainstorm_profile_custom_settings'] = array(
    'display' => FALSE,
  );
  $tasks['brainstorm_profile_blocks_turning'] = array(
    'display' => FALSE,
  );
  return $tasks;
}

/**
 * Implements hook_install_tasks_alter().
 */
function brainstorm_profile_install_tasks_alter(&$tasks, $install_state) {
  foreach ($install_state as $state) {
    if ($state === 'install_bootstrap_full') {
      $source = 'profiles/brainstorm_profile/node_export_assets/';
      $res = variable_get('file_public_path', conf_path() . '/files');
      brainstorm_profile_recurse_copy($source, $res);
      drupal_get_messages();
    };
  }
}

/**
 * Our custom task. Custom settings help to display content correctly.
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 */
function brainstorm_profile_custom_settings($install_state) {
  $node = node_load(56);
  if (!empty($node)) {
    $node->path = array(
      'alias' => 'about-us',
      'pathauto' => FALSE,
      'language' => 'und',
    );
    node_save($node);
  }
  $node = node_load(51);
  if (!empty($node)) {
    $node->path = array(
      'alias' => 'contact-us',
      'pathauto' => FALSE,
      'language' => 'und',
    );
    node_save($node);
  }
  $node = node_load(6);
  if (!empty($node)) {
    $node->path = array(
      'alias' => 'typography',
      'pathauto' => FALSE,
      'language' => 'und',
    );
    node_save($node);
  }
  $view = views_get_view('testimonials');
  $view->style_options['instance'] = 'owlcarousel_settings_testimonials';
  $view->save();
  $brainstorm_settings = variable_get('theme_brainstorm_theme_settings', array());
  $brainstorm_settings['toggle_logo'] = 1;
  $brainstorm_settings['toggle_name'] = 0;
  variable_set('theme_brainstorm_theme_settings', $brainstorm_settings);
}

/**
 * Our custom task. Enable and turning blocks.
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 */
function brainstorm_profile_blocks_turning($install_state) {
  $modules = array();
  if (!module_exists('feature_carousel')) {
    $modules[] = 'feature_carousel';
  }
  if (!module_exists('feature_block')) {
    $modules[] = 'feature_block';
  }
  if (!module_exists('feature_menu')) {
    $modules[] = 'feature_menu';
  }
  if (!empty($modules)) {
    module_enable($modules);
  }
}

/**
 * Recursive copy.
 *
 * @param string $src
 *   - Source folder with files.
 * @param string $dst
 *   - Destination folder.
 */
function brainstorm_profile_recurse_copy($src, $dst) {
  $dir = opendir($src);
  @mkdir($dst);
  while (FALSE !== ($file = readdir($dir))) {
    if (($file != '.') && ($file != '..')) {
      if (is_dir($src . '/' . $file)) {
        brainstorm_profile_recurse_copy($src . '/' . $file, $dst . '/' . $file);
      }
      else {
        copy($src . '/' . $file, $dst . '/' . $file);
      }
    }
  }
  closedir($dir);
}
