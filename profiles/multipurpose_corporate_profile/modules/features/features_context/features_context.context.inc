<?php
/**
 * @file
 * features_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about_us';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about-us' => 'about-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-our_amazing_team-block_1' => array(
          'module' => 'views',
          'delta' => 'our_amazing_team-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['about_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
        'blog/*' => 'blog/*',
        'node/50' => 'node/50',
        'node/51' => 'node/51',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-popular_tags-block' => array(
          'module' => 'views',
          'delta' => 'popular_tags-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'instagram_block-instagram_block' => array(
          'module' => 'instagram_block',
          'delta' => 'instagram_block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'addtoany-addtoany_button' => array(
          'module' => 'addtoany',
          'delta' => 'addtoany_button',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'disqus-disqus_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_comments',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'contact_us';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact-us' => 'contact-us',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'colorized_gmap-1' => array(
          'module' => 'colorized_gmap',
          'delta' => '1',
          'region' => 'secondary_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['contact_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'delta_page_title';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~contact-us' => '~contact-us',
        '~<front>' => '~<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'secondary_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['delta_page_title'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dignities-block' => array(
          'module' => 'views',
          'delta' => 'dignities-block',
          'region' => 'content',
          'weight' => '-15',
        ),
        'views-secondary_slider-block' => array(
          'module' => 'views',
          'delta' => 'secondary_slider-block',
          'region' => 'content',
          'weight' => '-14',
        ),
        'views-recent_news-block' => array(
          'module' => 'views',
          'delta' => 'recent_news-block',
          'region' => 'content',
          'weight' => '-13',
        ),
        'views-our_amazing_team-block' => array(
          'module' => 'views',
          'delta' => 'our_amazing_team-block',
          'region' => 'content',
          'weight' => '-11',
        ),
        'views-clients_slider-block' => array(
          'module' => 'views',
          'delta' => 'clients_slider-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'general';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-popular_tags-block' => array(
          'module' => 'views',
          'delta' => 'popular_tags-block',
          'region' => 'tertiary_content',
          'weight' => '-10',
        ),
        'instagram_block-instagram_block' => array(
          'module' => 'instagram_block',
          'delta' => 'instagram_block',
          'region' => 'tertiary_content',
          'weight' => '-9',
        ),
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'tertiary_content',
          'weight' => '-8',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'header',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['general'] = $context;

  return $export;
}
