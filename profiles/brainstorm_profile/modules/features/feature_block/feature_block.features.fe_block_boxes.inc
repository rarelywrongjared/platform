<?php
/**
 * @file
 * feature_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About us blog';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'about_us';
  $fe_block_boxes->body = 'Product is the vitales sence of what wedo,and truly great product is born of meticulous planning ad process.';

  $export['about_us'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Back to portfolio';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'back_to';
  $fe_block_boxes->body = '<a href="/portfolio"><input type="button" value="Back to portfolio"></a>';

  $export['back_to'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Colors';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'colors';
  $fe_block_boxes->body = 'FOR ACCENTS
<div class="color-1"></div>
FOR ACCENTS
<div class="color-2"></div>
FOR BODY TEXT
<div class="color-3"></div>
FOR TITLE
<div class="color-4"></div>';

  $export['colors'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Company name';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'company_name';
  $fe_block_boxes->body = '<div class="first-part picture"></div>
<div class="second-part">
<h3>Company name</h3>
Our company is a complete web design, web development and offshore outsourcing company, which brings ideas and technology for the success of your business. We deliver quality and innovative web design and web development solutions for localand international customers.
<a href="/portfolio" class="button">our portfolio</a>
</div>
';

  $export['company_name'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Lists';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'lists';
  $fe_block_boxes->body = '<ul>
<li><span>Home</span></li>
<li><span>About us</span></li>
<li><span>Portfolio</span></li>
<li><span>Blog</span></li>
<li><span>Typography</span></li>
</ul>';

  $export['lists'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Map';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'map';
  $fe_block_boxes->body = '<div id="map"></div>';

  $export['map'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Our skills';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'our_skills';
  $fe_block_boxes->body = '<div class="first-part"><div class=\'team\'><p>TEAM UP</p></div></div>
<div class="second-part">
<h2>Our skills</h2>
<ul class="skills-bar-container">
  <p><label>Market Analisys</label>
  <div class="percent" id="pourcent-1">95%</div></p>
  <li>
    <div class="progressbar" id="progress-1"></div>
  </li>
  <p><label>Brend Identity</label>
  <div class="percent" id="pourcent-2">85%</div></p>
  <li>
    <div class="progressbar" id="progress-2"></div>
  </li>
   <p> <label>Grafic Design</label>
  <div class="percent" id="pourcent-3">99%</div></p>
  <li>
    <div class="progressbar" id="progress-3"></div>
  </li>
    <p><label>HTML Coding</label>
  <div class="percent" id="pourcent-4">80%</div></p>
    <li>
      <div class="progressbar" id="progress-4"></div>
    </li>
  </ul>
</div>';

  $export['our_skills'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'social_icons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_icons';
  $fe_block_boxes->body = '<a class="fa  fa-facebook-official" href="#"></a><a class="fa fa-twitter" href="#"></a><a class="fa fa-instagram " href="#"></a><a class="fa fa-behance" href="#"></a><a class="fa fa-linkedin-square" href="#"></a><a class="fa fa-dribbble" href="#"></a>';

  $export['social_icons'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About us';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'who_we_are';
  $fe_block_boxes->body = '<div class="first-part">
<h2> Who we are</h2>
   <div class="text-who"><p>Sed ut perspiciatis, unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam eaque ipsa, quae ab illo inventore eriatis et quasi architecto beatae vitae dicta sunt, explicabo. Nemo enim ipsam voluptatm, quia voluptas sit.</p></div>   
<a href="/about-us">More about us</a></div>
<div class="second-part"></div>';

  $export['who_we_are'] = $fe_block_boxes;

  return $export;
}
