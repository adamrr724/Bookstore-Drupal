<?php
/**
 * @file
 * site_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/1';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Adam\'s Amazing Bookstore';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'You\'ll find the best books in town!';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'basic';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_sunrise_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => 'public://book_2.png',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumb_display' => 1,
    'scrolltop_display' => 1,
    'bootstrap_css_cdn' => '3.2.0',
    'bootstrap_js_cdn' => '3.2.0',
    'responsive_respond' => 0,
    'google_map_js' => 1,
    'google_map_latitude' => '37.422114',
    'google_map_longitude' => '-122.08385',
    'google_map_zoom' => '13',
    'google_map_show' => 'Show Map',
    'google_map_hide' => 'Hide Map',
    'google_map_canvas' => 'map-canvas',
    'quicksand_js' => 1,
    'prettyphoto_js' => 1,
    'prettyphoto_theme' => 'pp_default',
    'prettyphoto_social_tools' => 1,
    'tabs__active_tab' => 'edit-basic-settings',
  );
  $export['theme_sunrise_settings'] = $strongarm;

  return $export;
}
