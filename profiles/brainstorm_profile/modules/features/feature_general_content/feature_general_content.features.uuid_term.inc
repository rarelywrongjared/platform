<?php
/**
 * @file
 * feature_general_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function feature_general_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Founder',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '022aafdd-a2c4-4812-9ea0-0bf8acfa5614',
    'vocabulary_machine_name' => 'profession',
  );
  $terms[] = array(
    'name' => 'Designer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '06a7abee-6de0-494d-83f4-4bd97a264522',
    'vocabulary_machine_name' => 'profession',
  );
  $terms[] = array(
    'name' => 'Centre text',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '1eda4ffe-c499-48b7-9969-cc0bb431bf0a',
    'vocabulary_machine_name' => 'animation',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Photography',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '202393ae-238b-4a04-bbcc-04bdabd38b1e',
    'vocabulary_machine_name' => 'portfolio',
  );
  $terms[] = array(
    'name' => 'Web design',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3182e92a-6ffa-45a4-bc47-c69397bd7cfd',
    'vocabulary_machine_name' => 'portfolio',
  );
  $terms[] = array(
    'name' => 'Illustration',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '84b171f6-85c4-4c8e-9b20-eaa5412313a7',
    'vocabulary_machine_name' => 'portfolio',
  );
  $terms[] = array(
    'name' => 'Back-End Developer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ba3d90c1-1670-49a1-83bb-ce438cdaf879',
    'vocabulary_machine_name' => 'profession',
  );
  $terms[] = array(
    'name' => 'Internet Marketing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bc720f3a-f462-4899-8efe-9e0110595bbf',
    'vocabulary_machine_name' => 'profession',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Left text',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd6973f29-b3d3-471d-8ba3-9a456b327cd8',
    'vocabulary_machine_name' => 'animation',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  $terms[] = array(
    'name' => 'Branding identy',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd9375f37-42fe-4361-af8f-8d0bd5fbab53',
    'vocabulary_machine_name' => 'portfolio',
  );
  $terms[] = array(
    'name' => 'Right text',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'e0ea5119-d2bb-4f6f-88fc-8323120c02ee',
    'vocabulary_machine_name' => 'animation',
    'path' => array(
      'pathauto' => 1,
    ),
  );
  return $terms;
}
