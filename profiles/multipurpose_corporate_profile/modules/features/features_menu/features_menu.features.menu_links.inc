<?php
/**
 * @file
 * features_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-us:node/3
  $menu_links['main-menu_about-us:node/3'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'node/3',
      'router_path' => 'node/%',
      'link_title' => 'About us',
      'options' => array(
          'attributes' => array(
              'title' => '',
          ),
          'identifier' => 'main-menu_about-us:node/3',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 1,
      'weight' => -49,
      'customized' => 1,
  );
  // Exported menu link: main-menu_alerts:node/4
  $menu_links['main-menu_alerts:node/4'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'node/4',
      'router_path' => 'node/%',
      'link_title' => 'Alerts',
      'options' => array(
          'attributes' => array(
              'title' => '',
          ),
          'identifier' => 'main-menu_alerts:node/4',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -50,
      'customized' => 1,
      'parent_identifier' => 'main-menu_pages:<front>',
  );
  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'blog',
      'router_path' => 'blog',
      'link_title' => 'Blog',
      'options' => array(
          'identifier' => 'main-menu_blog:blog',
      ),
      'module' => 'system',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -48,
      'customized' => 1,
  );
  // Exported menu link: main-menu_column-3:portfolio/column_three
  $menu_links['main-menu_column-3:portfolio/column_three'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'portfolio/column_three',
      'router_path' => 'portfolio/column_three',
      'link_title' => 'Column 3',
      'options' => array(
          'attributes' => array(
              'title' => '',
          ),
          'identifier' => 'main-menu_column-3:portfolio/column_three',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -50,
      'customized' => 1,
      'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_column-4:portfolio/column_four
  $menu_links['main-menu_column-4:portfolio/column_four'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'portfolio/column_four',
      'router_path' => 'portfolio/column_four',
      'link_title' => 'Column 4',
      'options' => array(
          'attributes' => array(
              'title' => '',
          ),
          'identifier' => 'main-menu_column-4:portfolio/column_four',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -49,
      'customized' => 1,
      'parent_identifier' => 'main-menu_portfolio:portfolio',
  );
  // Exported menu link: main-menu_contact-us:node/6
  $menu_links['main-menu_contact-us:node/6'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'node/6',
      'router_path' => 'node/%',
      'link_title' => 'Contact us',
      'options' => array(
          'attributes' => array(),
          'identifier' => 'main-menu_contact-us:node/6',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -44,
      'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
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
  // Exported menu link: main-menu_pages:<front>
  $menu_links['main-menu_pages:<front>'] = array(
      'menu_name' => 'main-menu',
      'link_path' => '<front>',
      'router_path' => '',
      'link_title' => 'Pages',
      'options' => array(
          'attributes' => array(
              'title' => '',
          ),
          'identifier' => 'main-menu_pages:<front>',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 1,
      'has_children' => 1,
      'expanded' => 1,
      'weight' => -46,
      'customized' => 1,
  );
  // Exported menu link: main-menu_portfolio:portfolio
  $menu_links['main-menu_portfolio:portfolio'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'portfolio',
      'router_path' => 'portfolio',
      'link_title' => 'Portfolio',
      'options' => array(
          'identifier' => 'main-menu_portfolio:portfolio',
          'attributes' => array(
              'title' => '',
          ),
      ),
      'module' => 'system',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 1,
      'expanded' => 1,
      'weight' => -47,
      'customized' => 1,
  );
  // Exported menu link: main-menu_pricing-tables:node/5
  $menu_links['main-menu_pricing-tables:node/5'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'node/5',
      'router_path' => 'node/%',
      'link_title' => 'Pricing Tables',
      'options' => array(
          'attributes' => array(
              'title' => '',
          ),
          'identifier' => 'main-menu_pricing-tables:node/5',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -49,
      'customized' => 1,
      'parent_identifier' => 'main-menu_pages:<front>',
  );
  // Exported menu link: main-menu_typography:node/2
  $menu_links['main-menu_typography:node/2'] = array(
      'menu_name' => 'main-menu',
      'link_path' => 'node/2',
      'router_path' => 'node/%',
      'link_title' => 'Typography',
      'options' => array(
          'attributes' => array(),
          'identifier' => 'main-menu_typography:node/2',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => -47,
      'customized' => 1,
      'parent_identifier' => 'main-menu_pages:<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Alerts');
  t('Blog');
  t('Column 3');
  t('Column 4');
  t('Contact us');
  t('Home');
  t('Pages');
  t('Portfolio');
  t('Pricing Tables');
  t('Typography');


  return $menu_links;
}
