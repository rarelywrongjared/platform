<?php
/**
 * @file
 * feature_block.features.inc
 */

/**
 * Implements hook_default_colorized_gmap().
 */
function feature_block_default_colorized_gmap() {
  $items = array();
  $items['colorized_gmap_1490003670'] = entity_import('colorized_gmap', '{
    "name" : "colorized_gmap_1490003670",
    "created" : "1490003703",
    "changed" : "1490066845",
    "uid" : "1",
    "latitude" : "48.853358000000",
    "longitude" : "2.348903000000",
    "additional_settings" : {
      "controls" : {
        "min_drag_width" : "0",
        "streetViewControl" : 1,
        "panControl" : 1,
        "mapTypeControl" : 1
      },
      "controls_position" : { "streetViewControl" : "1", "panControl" : "1", "mapTypeControl" : "3" },
      "marker_settings" : {
        "marker" : 0,
        "markertitle" : "Destination",
        "info_window" : { "value" : "", "format" : "filtered_html" }
      },
      "zoom_control_settings" : {
        "zoom" : "15",
        "zoomControl" : 1,
        "scrollwheel" : 1,
        "zoomControlSize" : "2",
        "zoomControlPosition" : "1"
      }
    },
    "style" : {
      "1" : {
        "featureType" : "administrative.locality",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#2c2e33" },
          { "visibility" : "on" },
          { "saturation" : "7" },
          { "lightness" : "19" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "2" : {
        "featureType" : "landscape",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#fff" },
          { "visibility" : "simplified" },
          { "saturation" : "-100" },
          { "lightness" : "100" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "3" : {
        "featureType" : "poi",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#fff" },
          { "visibility" : "off" },
          { "saturation" : "-100" },
          { "lightness" : "100" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "4" : {
        "featureType" : "road",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#bbc0c4" },
          { "visibility" : "simplified" },
          { "saturation" : "-93" },
          { "lightness" : "31" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "5" : {
        "featureType" : "road",
        "elementType" : "labels",
        "stylers" : [
          { "color" : "#404040" },
          { "visibility" : "simplified" },
          { "saturation" : "-93" },
          { "lightness" : "31" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "6" : {
        "featureType" : "road.arterial",
        "elementType" : "labels",
        "stylers" : [
          { "color" : "#404040" },
          { "visibility" : "simplified" },
          { "saturation" : "-93" },
          { "lightness" : "30" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "7" : {
        "featureType" : "road.local",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#e9ebed" },
          { "visibility" : "simplified" },
          { "saturation" : "-90" },
          { "lightness" : "-8" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "8" : {
        "featureType" : "transit",
        "elementType" : "geometry",
        "stylers" : [
          { "color" : "#000" },
          { "visibility" : "simplified" },
          { "saturation" : "10" },
          { "lightness" : "69" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "9" : {
        "featureType" : "water",
        "elementType" : "all",
        "stylers" : [
          { "color" : "#e9ebed" },
          { "visibility" : "simplified" },
          { "saturation" : "-78" },
          { "lightness" : "67" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "10" : {
        "featureType" : "administrative",
        "elementType" : "labels",
        "stylers" : [
          { "color" : "#000000" },
          { "visibility" : "simplified" },
          { "saturation" : "-93" },
          { "lightness" : "20" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "11" : {
        "featureType" : "transit",
        "elementType" : "labels.icon",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      },
      "13" : {
        "featureType" : "road",
        "elementType" : "labels.icon",
        "stylers" : [
          { "color" : "" },
          { "visibility" : "off" },
          { "saturation" : "" },
          { "lightness" : "" },
          { "weight" : "" }
        ],
        "remove" : 0
      }
    },
    "block_settings" : {
      "region" : { "brainstorm_theme" : "content_aside", "seven" : -1 },
      "custom" : "0",
      "visibility" : "1",
      "pages" : "contact-us",
      "title" : ""
    },
    "rdf_mapping" : []
  }');
  return $items;
}


/**
 * Implements hook_ctools_plugin_api().
 */
function feature_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
