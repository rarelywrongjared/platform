<?php
/**
 * @file
 * features_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'New Corporate';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_block';
  $fe_block_boxes->body = '<div class="new-corporate"><img src="/profiles/multipurpose_corporate_profile/themes/multipurpose_corporate_theme/images/footer-logo.png" /></div>

<div class="about-this-theme">About us</div>

<p>We are a&nbsp;youthful team of hopeful enthusiasts who wish to free the world of conspiring tyranny. &nbsp;As determined&nbsp;as Rocky and as powerful as Rambo, we follow any means that can help us bring truth and justice to this mad, mad and conspired world. Don’t contacts us as we will contact you first.</p>
';

  $export['footer_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Our mission';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'our_mission';
  $fe_block_boxes->body = '<p>As a global conspiracy investigation institution with a pioneering awareness raising model, our mission is to create an environment that brings together open-minded people, cultures and &nbsp;ideas from around the world, in order to free individuals and organizations from space &nbsp;lizards\' control.</p>
';

  $export['our_mission'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Social icons';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'social_icons';
  $fe_block_boxes->body = '<a href="#"><span class="fa fa-rss"> </span></a><a href="#"><span class="fa fa-facebook"> </span></a><a href="#"><span class="fa fa-twitter"> </span></a><a href="#"><span class="fa fa-linkedin"> </span></a><a href="#"><span class="fa fa-google-plus"> </span></a><a href="#"><span class="fa fa-vk"> </span></a><a href="#"><span class="fa fa-instagram"> </span></a><a href="#"><span class="fa fa-vimeo-square"> </span></a>';

  $export['social_icons'] = $fe_block_boxes;

  return $export;
}
