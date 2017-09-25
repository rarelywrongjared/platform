<?php
/**
 * @file
 * features_general_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function features_general_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Aliens',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '0a2026ba-a74f-4bbc-8ac3-dc91deb6dc0c',
    'vocabulary_machine_name' => 'portfolio_terms',
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolioterms/aliens',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Control',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '10428bde-555a-404c-9ec5-9eb1e68c90e7',
    'vocabulary_machine_name' => 'portfolio_terms',
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolioterms/control',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tin Foil Hat Solutions',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '28999e48-25a0-4014-bf46-f7ec8afa87fd',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/tin-foil-hat-solutions',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Space Lizards',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '2b8a5dfd-03ad-4330-8032-b9aae87383ac',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/space-lizards',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Conspiracy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8709eab4-6250-4c5d-99df-239e7e9dea80',
    'vocabulary_machine_name' => 'portfolio_terms',
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolioterms/conspiracy',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Illuminati',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '9750cb12-140e-42d4-a10e-8e7aafe6c5e2',
    'vocabulary_machine_name' => 'portfolio_terms',
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolioterms/illuminati',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Mind Control',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b3e7038a-da85-4755-96c7-8e640eaaf402',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/mind-control',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Tin Foil Hat',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'cba2689c-7288-4ef0-b9bf-c75763b74717',
    'vocabulary_machine_name' => 'portfolio_terms',
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolioterms/tin-foil-hat',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Conspiracy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'f7c33ae0-1835-4214-b255-f5cf97424c07',
    'vocabulary_machine_name' => 'tags',
    'url_alias' => array(
      0 => array(
        'alias' => 'tags/conspiracy',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
