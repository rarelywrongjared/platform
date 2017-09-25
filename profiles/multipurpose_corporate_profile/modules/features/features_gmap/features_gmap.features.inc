<?php
/**
 * @file
 * features_gmap.features.inc
 */

/**
 * Implements hook_default_colorized_gmap().
 */
function features_gmap_default_colorized_gmap() {
  $items = array();
  $items['colorized_gmap_1428982285'] = entity_import('colorized_gmap', '{
    "name" : "colorized_gmap_1428982285",
    "created" : "1428982305",
    "changed" : "1429258380",
    "uid" : "1",
    "latitude" : "48.853358000000",
    "longitude" : "2.348903000000",
    "additional_settings" : {
      "controls" : {
        "min_drag_width" : "0",
        "streetViewControl" : 0,
        "panControl" : 1,
        "mapTypeControl" : 0
      },
      "controls_position" : { "streetViewControl" : "1", "panControl" : "1", "mapTypeControl" : "3" },
      "marker_settings" : { "marker" : 0, "markertitle" : "Destination" },
      "zoom_control_settings" : {
        "zoom" : "15",
        "zoomControl" : 1,
        "scrollwheel" : 1,
        "zoomControlSize" : "2",
        "zoomControlPosition" : "1"
      }
    },
    "style" : { "1" : {
        "featureType" : "water",
        "elementType" : "all",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "on" },
          { "saturation" : "0" },
          { "lightness" : "0" },
          { "weight" : "1.00" }
        ],
        "remove" : 0
      }
    },
    "block_settings" : {
      "region" : { "bartik" : -1, "multipurpose_corporate_theme" : -1, "seven" : -1 },
      "custom" : "0",
      "visibility" : "0",
      "pages" : "",
      "title" : "Contact us"
    },
    "rdf_mapping" : []
  }');
  return $items;
}
