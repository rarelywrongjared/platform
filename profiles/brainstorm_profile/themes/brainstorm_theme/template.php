<?php

/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal,
 * often used as an alternative to directly editing or adding code to templates.
 * Its worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "adaptivetheme_subtheme" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the
 *    function name will be "footheme_preprocess_hook". Tip - you can
 *    search/replace on "adaptivetheme_subtheme".
 * 2. Uncomment the required function to use.
 */

/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
  function adaptivetheme_subtheme_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit,
  // chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

  }
  // */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
  function adaptivetheme_subtheme_process_html(&$vars) {
  }
  // */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_page(&$vars) {
  }
  function adaptivetheme_subtheme_process_page(&$vars) {
  }
  // */


/**
 * Override or insert variables into the node templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_node(&$vars) {
  }
  function adaptivetheme_subtheme_process_node(&$vars) {
  }
  // */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_comment(&$vars) {
  }
  function adaptivetheme_subtheme_process_comment(&$vars) {
  }
  // */

/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
  function adaptivetheme_subtheme_preprocess_block(&$vars) {
  }
  function adaptivetheme_subtheme_process_block(&$vars) {
  }
  // */

/**
 * Implements hook_form_FORM_ID_alter() for views_exposed_form().
 */
function brainstorm_theme_form_views_exposed_form_alter(&$form, &$form_state, $form_id) {
  $form['tid']['#options']['All'] = t('All');
}

/**
 * Implements hook_block_view_alter().
 */
function brainstorm_theme_block_view_alter(&$data, $block) {
  if ($block->module == 'superfish' && $block->delta == 2) {
    $data['subject'] = 'Links';
  }

  if ($block->css_class == 'maps') {
    drupal_add_js('https://maps.googleapis.com/maps/api/js?sensor=false');
    drupal_add_js(path_to_theme() . '/scripts/maps.js');
  }
}

/**
 * Implements hook_status_messages().
 */
function brainstorm_theme_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Info message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages $type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2>' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 0) {
      foreach ($messages as $message) {
        $output .= '<p>' . $message . '</p>';
      }
    }
    $output .= " <div class='close'> </div>\n";
    $output .= "</div>\n";
  }
  return $output;
}

/**
 * Implements hook_pager().
 */
function brainstorm_theme_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = 2;
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // Current is the page we are currently paged to.
  $pager_current = $pager_page_array[$element] + 1;
  // First is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // Last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // Max is the maximum page number.
  $pager_max = $pager_total[$element];
  // End of marker calculations.
  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array(
    'text' => t('<'),
    'element' => $element,
    'parameters' => $parameters,
  ));

  $li_last = theme('pager_last', array(
    'text' => t('>'),
    'element' => $element,
    'parameters' => $parameters,
  ));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current && $i != 1) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($pager_current - $i),
              'parameters' => $parameters,
            )),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => $i,
          );
        }
        if ($i > $pager_current && ($i != $pager_total[$element] || $pager_current == $pager_total[$element] - 1)) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($i - $pager_current),
              'parameters' => $parameters,
            )),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
        $items[] = array(
          'class' => array('pager-first'),
          'data' => theme('pager_last', array(
            'text' => t($pager_total[$element]),
            'element' => $element,
            'parameters' => $parameters,
          )),
        );
      }
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    return '<h2 class="element-invisible">' . t('Pages') . '</h2>' . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager')),
    ));
  }
}

/**
 * Implements hook_form_FORM_ID_alter() for comment_form().
 */
function brainstorm_theme_form_comment_form_alter(&$form, $form_state, $form_id) {
  global $user;
  $form['author']['_author']['#type'] = 'hidden';
  $form['author']['name'] = array(
    '#weight' => -1,
    '#type' => 'textfield',
    '#default_value' => $user->uid != 0 ? $user->name : '',
    '#attributes' => array('placeholder' => t('Your full name')),
    '#required' => TRUE,
    '#disabled' => $user->uid != 0 ? TRUE : FALSE,
  );
  $form['author']['mail'] = array(
    '#type' => 'textfield',
    '#default_value' => $user->uid != 0 ? $user->mail : '',
    '#attributes' => array('placeholder' => t('E-mail address')),
    '#required' => TRUE,
    '#disabled' => $user->uid != 0 ? TRUE : FALSE,
  );
  $form['author']['#weight'] = 0;
  $form['comment_body']['#weight'] = -1;
  $form['comment_body']['und'][0]['value']['#title'] = '';
  $form['comment_body']['und'][0]['value']['#attributes'] = array('placeholder' => t('Write your comment here...'));
  $form['actions']['submit']['#value'] = t('Submit');
}

/**
 * Implements hook_preprocess_comment().
 */
function brainstorm_theme_preprocess_comment(&$variables) {
  $variables['created'] = date('F d, Y', $variables['elements']['#node']->created);
  $variables['submitted'] = t('!username  !datetime', array('!username' => $variables['author'], '!datetime' => $variables['created']));
}

/**
 * Implements hook_preprocess_page().
 */
function brainstorm_theme_preprocess_page(&$variables) {

  $page = $variables['theme_hook_suggestions'][0] ?: '';
  if ($page == 'page__blog') {
    drupal_add_js(path_to_theme() . '/scripts/jquery.waterfall.js', array('scope' => 'footer'));
  }
  drupal_add_js('jQuery.extend(Drupal.settings, { "pathToTheme": "' . path_to_theme() . '" });', 'inline');
  $variables['page']['copyright'] = t("©&nbsp; Copyright 2016 by !name", array(
    '!name' => l(t('ADCI solutions'), 'http://adcisolutions.com/', array(
      'attributes' => array('title' => 'drupal development'),
    ))
  ));
}

/**
 * Implements hook_preprocess_html().
 */
function brainstorm_theme_preprocess_html(&$variables) {
  $path = drupal_get_path_alias();
  switch ($path) {
    case 'about-us':
      $variables['classes_array'][] = 'page-about-us';
      break;

    case 'contact-us':
      $variables['classes_array'][] = 'page-contact';
      break;

    case 'typography':
      $variables['classes_array'][] = 'page-typography';
      break;

    default:
      break;
  }
}

/*
 * Implements hook_preprocess_views_view_fields().
 */
function brainstorm_theme_preprocess_views_view_fields(&$vars) {
  $view = $vars['view'];
  $vars['class_row'] = '';
  if (isset($vars['row']->field_field_animation[0])) {
    $title = $vars['row']->field_field_animation[0]['raw']['taxonomy_term']->name;
    $class_row = str_replace(' ', '-', strtolower($title));
    $vars['class_row'] = $class_row;
  }
}

