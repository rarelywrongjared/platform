<?php
/**
 * @file
 * features_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['addtoany-addtoany_button'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'addtoany_button',
    'module' => 'addtoany',
    'node_types' => array(
      0 => 'blog_entry',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Share',
    'visibility' => 0,
  );

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'quick_backup',
    'module' => 'backup_migrate',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-footer_block'] = array(
    'cache' => -1,
    'css_class' => 'block-new-corporate',
    'custom' => 0,
    'machine_name' => 'footer_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => 'tertiary_content',
        'status' => 1,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-our_mission'] = array(
    'cache' => -1,
    'css_class' => 'block-our-mission',
    'custom' => 0,
    'machine_name' => 'our_mission',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => -21,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Our mission',
    'visibility' => 1,
  );

  $export['block-social_icons'] = array(
    'cache' => -1,
    'css_class' => 'block-social-icons',
    'custom' => 0,
    'machine_name' => 'social_icons',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['colorized_gmap-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'colorized_gmap',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['comment-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['context_ui-editor'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'editor',
    'module' => 'context_ui',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['delta_blocks-page-title'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'page-title',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_combination_widget'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_combination_widget',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_comments'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_comments',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_popular_threads'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_popular_threads',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_recent_comments'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_recent_comments',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['disqus-disqus_top_commenters'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'disqus_top_commenters',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['instagram_block-instagram_block'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'instagram_block',
    'module' => 'instagram_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Photos',
    'visibility' => 0,
  );

  $export['instagram_block-instagram_block_tag'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'instagram_block_tag',
    'module' => 'instagram_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'content/pricing-tables
content/alerts
content/tabs
content/typography',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Sidebar menu',
    'visibility' => 1,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'content/pricing-tables
content/alerts
content/tabs
content/typography
node/52',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['node-recent'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 2,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 3,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 4,
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-help'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => -22,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 10,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-new'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-clients_slider-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'clients_slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-dignities-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'dignities-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-our_amazing_team-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'our_amazing_team-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-our_amazing_team-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'our_amazing_team-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-popular_tags-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'popular_tags-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-portfolio_terms-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'portfolio_terms-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-recent_news-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'recent_news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-secondary_slider-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'secondary_slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['webform-client-block-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'client-block-1',
    'module' => 'webform',
    'node_types' => array(),
    'pages' => 'node/6',
    'roles' => array(),
    'themes' => array(
      'multipurpose_corporate_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'multipurpose_corporate_theme',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
