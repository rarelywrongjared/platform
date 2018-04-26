<?php
/**
 * @file
 * feature_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: devel_nodeaccess-summary:devel/node_access/summary.
  $menu_links['devel_nodeaccess-summary:devel/node_access/summary'] = array(
    'menu_name' => 'devel',
    'link_path' => 'devel/node_access/summary',
    'router_path' => 'devel/node_access/summary',
    'link_title' => 'Node_access summary',
    'options' => array(
      'identifier' => 'devel_nodeaccess-summary:devel/node_access/summary',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_about-us:node/56.
  $menu_links['main-menu_about-us:node/56'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/56',
    'router_path' => 'node/%',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about-us:node/56',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_blog:blog.
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contacts:node/51.
  $menu_links['main-menu_contacts:node/51'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/51',
    'router_path' => 'node/%',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contacts:node/51',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_portfolio:portfolio.
  $menu_links['main-menu_portfolio:portfolio'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'portfolio',
    'router_path' => 'portfolio',
    'link_title' => 'Portfolio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_portfolio:portfolio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_typography:node/6.
  $menu_links['main-menu_typography:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Typography',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_typography:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: management_administration-menu:admin/config/administration/admin_menu.
  $menu_links['management_administration-menu:admin/config/administration/admin_menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/administration/admin_menu',
    'router_path' => 'admin/config/administration/admin_menu',
    'link_title' => 'Administration menu',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust administration menu settings.',
      ),
      'identifier' => 'management_administration-menu:admin/config/administration/admin_menu',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_administration:admin/config/administration',
  );
  // Exported menu link: management_custom-breadcrumbs:admin/structure/custom_breadcrumbs.
  $menu_links['management_custom-breadcrumbs:admin/structure/custom_breadcrumbs'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/custom_breadcrumbs',
    'router_path' => 'admin/structure/custom_breadcrumbs',
    'link_title' => 'Custom breadcrumbs',
    'options' => array(
      'attributes' => array(
        'title' => 'Customize the breadcrumb trail for pages on your site.',
      ),
      'identifier' => 'management_custom-breadcrumbs:admin/structure/custom_breadcrumbs',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_structure:admin/structure',
  );
  // Exported menu link: management_jquery-update:admin/config/development/jquery_update.
  $menu_links['management_jquery-update:admin/config/development/jquery_update'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/jquery_update',
    'router_path' => 'admin/config/development/jquery_update',
    'link_title' => 'jQuery update',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure settings related to the jQuery upgrade, the library path and compression.',
      ),
      'identifier' => 'management_jquery-update:admin/config/development/jquery_update',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_main-menu:admin/structure/menu/manage/main-menu.
  $menu_links['management_main-menu:admin/structure/menu/manage/main-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/main-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Main menu',
    'options' => array(
      'identifier' => 'management_main-menu:admin/structure/menu/manage/main-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_management:admin/structure/menu/manage/management.
  $menu_links['management_management:admin/structure/menu/manage/management'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/management',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Management',
    'options' => array(
      'identifier' => 'management_management:admin/structure/menu/manage/management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_navigation:admin/structure/menu/manage/navigation.
  $menu_links['management_navigation:admin/structure/menu/manage/navigation'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/navigation',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Navigation',
    'options' => array(
      'identifier' => 'management_navigation:admin/structure/menu/manage/navigation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_node-export:admin/config/content/node_export.
  $menu_links['management_node-export:admin/config/content/node_export'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/node_export',
    'router_path' => 'admin/config/content/node_export',
    'link_title' => 'Node export',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the settings for Node export.',
      ),
      'identifier' => 'management_node-export:admin/config/content/node_export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_profiler-builder:admin/config/development/profiler_builder.
  $menu_links['management_profiler-builder:admin/config/development/profiler_builder'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/development/profiler_builder',
    'router_path' => 'admin/config/development/profiler_builder',
    'link_title' => 'Profiler Builder',
    'options' => array(
      'attributes' => array(
        'title' => 'Build distribution files from current settings',
      ),
      'identifier' => 'management_profiler-builder:admin/config/development/profiler_builder',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_development:admin/config/development',
  );
  // Exported menu link: management_responsive-menus:admin/config/user-interface/responsive_menus.
  $menu_links['management_responsive-menus:admin/config/user-interface/responsive_menus'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/responsive_menus',
    'router_path' => 'admin/config/user-interface/responsive_menus',
    'link_title' => 'Responsive Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Settings for Responsive Menus module',
      ),
      'identifier' => 'management_responsive-menus:admin/config/user-interface/responsive_menus',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );
  // Exported menu link: management_user-menu:admin/structure/menu/manage/user-menu.
  $menu_links['management_user-menu:admin/structure/menu/manage/user-menu'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/user-menu',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'User menu',
    'options' => array(
      'identifier' => 'management_user-menu:admin/structure/menu/manage/user-menu',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: management_uuid-features-integration:admin/config/content/uuid_features.
  $menu_links['management_uuid-features-integration:admin/config/content/uuid_features'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/uuid_features',
    'router_path' => 'admin/config/content/uuid_features',
    'link_title' => 'UUID Features Integration',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the settings for UUID Features Integration.',
      ),
      'identifier' => 'management_uuid-features-integration:admin/config/content/uuid_features',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: navigation_node-export-import:node/add/node_export.
  $menu_links['navigation_node-export-import:node/add/node_export'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/node_export',
    'router_path' => 'node/add/node_export',
    'link_title' => 'Node export: import',
    'options' => array(
      'attributes' => array(
        'title' => 'Import content using <em>Node export</em>.',
      ),
      'identifier' => 'navigation_node-export-import:node/add/node_export',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_portfolio:portfolio.
  $menu_links['navigation_portfolio:portfolio'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'portfolio',
    'router_path' => 'portfolio',
    'link_title' => 'Portfolio',
    'options' => array(
      'identifier' => 'navigation_portfolio:portfolio',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Administration menu');
  t('Blog');
  t('Contacts');
  t('Custom breadcrumbs');
  t('Home');
  t('Main menu');
  t('Management');
  t('Navigation');
  t('Node export');
  t('Node export: import');
  t('Node_access summary');
  t('Portfolio');
  t('Profiler Builder');
  t('Responsive Menus');
  t('Typography');
  t('UUID Features Integration');
  t('User menu');
  t('jQuery update');

  return $menu_links;
}
