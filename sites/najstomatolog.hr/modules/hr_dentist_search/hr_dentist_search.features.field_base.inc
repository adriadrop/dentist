<?php
/**
 * @file
 * hr_dentist_search.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hr_dentist_search_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_collegamento'
  $field_bases['field_collegamento'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_collegamento',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_email'
  $field_bases['field_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_fb'
  $field_bases['field_fb'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fb',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_founded'
  $field_bases['field_founded'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_founded',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_freebies'
  $field_bases['field_freebies'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_freebies',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_images'
  $field_bases['field_images'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_images',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_kontakt_osoba'
  $field_bases['field_kontakt_osoba'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_kontakt_osoba',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_location'
  $field_bases['field_location'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_location',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'glid' => array(
        0 => 'glid',
      ),
    ),
    'locked' => 0,
    'module' => 'getlocations_fields',
    'settings' => array(
      'autocomplete_bias' => 0,
      'baselayers' => array(
        'Hybrid' => 1,
        'Map' => 1,
        'OpenStreetMap' => 0,
        'Physical' => 1,
        'Satellite' => 1,
      ),
      'behavior' => array(
        'overview' => 1,
        'overview_opened' => 0,
        'scale' => 0,
        'scrollwheel' => 1,
      ),
      'circles_apply' => 0,
      'circles_clickable' => 0,
      'circles_coords' => '',
      'circles_enable' => 0,
      'circles_fillcolor' => '#FF0000',
      'circles_fillopacity' => 0.35,
      'circles_message' => '',
      'circles_radius' => 0,
      'circles_strokecolor' => '#FF0000',
      'circles_strokeopacity' => 0.8,
      'circles_strokeweight' => 3,
      'city_autocomplete' => 0,
      'comment_map_marker' => 'drupal',
      'controltype' => 'small',
      'country' => 'HR',
      'draggable' => 1,
      'fullscreen' => 0,
      'fullscreen_controlposition' => '',
      'geojson_data' => '',
      'geojson_enable' => 0,
      'geojson_options' => '',
      'getdirections_link' => 0,
      'gps_bubble' => 0,
      'gps_button' => 0,
      'gps_button_label' => '',
      'gps_center' => 0,
      'gps_geocode' => 0,
      'gps_marker' => '',
      'gps_marker_title' => '',
      'highlight_enable' => 0,
      'highlight_fillcolor' => '#FF0000',
      'highlight_fillopacity' => 0.35,
      'highlight_radius' => 10,
      'highlight_strokecolor' => '#FF0000',
      'highlight_strokeopacity' => 0.8,
      'highlight_strokeweight' => 3,
      'input_additional_required' => 0,
      'input_additional_weight' => 0,
      'input_additional_width' => 40,
      'input_address_width' => 80,
      'input_city_required' => 0,
      'input_city_weight' => 0,
      'input_city_width' => 40,
      'input_clear_button_weight' => 0,
      'input_country_required' => 0,
      'input_country_weight' => 0,
      'input_country_width' => 40,
      'input_fax_required' => 0,
      'input_fax_weight' => 0,
      'input_fax_width' => 20,
      'input_geobutton_weight' => 0,
      'input_geolocation_button_weight' => 0,
      'input_latitude_weight' => 0,
      'input_latitude_width' => 20,
      'input_longitude_weight' => 0,
      'input_longitude_width' => 20,
      'input_map_marker' => 'small dgreen',
      'input_map_show' => 1,
      'input_map_weight' => 0,
      'input_marker_weight' => 0,
      'input_mobile_required' => 0,
      'input_mobile_weight' => 0,
      'input_mobile_width' => 20,
      'input_name_required' => 4,
      'input_name_weight' => 0,
      'input_name_width' => 40,
      'input_phone_required' => 0,
      'input_phone_weight' => 0,
      'input_phone_width' => 20,
      'input_postal_code_required' => 0,
      'input_postal_code_weight' => 0,
      'input_postal_code_width' => 40,
      'input_province_required' => 0,
      'input_province_weight' => 0,
      'input_province_width' => 40,
      'input_smart_ip_button_weight' => 0,
      'input_street_required' => 0,
      'input_street_weight' => 0,
      'input_street_width' => 60,
      'jquery_colorpicker_enabled' => 0,
      'kml_group' => array(
        'kml_url' => '',
        'kml_url_button' => 0,
        'kml_url_button_label' => 'Kml Layer',
        'kml_url_button_state' => 0,
        'kml_url_click' => 1,
        'kml_url_infowindow' => 0,
        'kml_url_viewport' => 1,
      ),
      'latlon_warning' => 1,
      'latlong' => '40,0',
      'map_backgroundcolor' => '',
      'map_marker' => 'drupal',
      'map_settings_allow' => 0,
      'mapcontrolposition' => '',
      'mapheight' => '200px',
      'maptype' => 'Map',
      'mapwidth' => '300px',
      'maxzoom_map' => -1,
      'minzoom_map' => -1,
      'mtc' => 'standard',
      'node_map_marker' => 'drupal',
      'node_marker_field_location' => 'drupal',
      'nodoubleclickzoom' => 0,
      'nokeyboard' => 0,
      'only_continents' => '',
      'only_countries' => '',
      'overview' => 0,
      'overview_opened' => 0,
      'pancontrol' => 1,
      'pancontrolposition' => '',
      'per_item_marker' => 0,
      'polygons_clickable' => 0,
      'polygons_coords' => '',
      'polygons_enable' => 0,
      'polygons_fillcolor' => '#FF0000',
      'polygons_fillopacity' => 0.35,
      'polygons_message' => '',
      'polygons_strokecolor' => '#FF0000',
      'polygons_strokeopacity' => 0.8,
      'polygons_strokeweight' => 3,
      'polylines_clickable' => 0,
      'polylines_coords' => '',
      'polylines_enable' => 0,
      'polylines_message' => '',
      'polylines_strokecolor' => '#FF0000',
      'polylines_strokeopacity' => 0.8,
      'polylines_strokeweight' => 3,
      'province_autocomplete' => 0,
      'rectangles_apply' => 0,
      'rectangles_clickable' => 0,
      'rectangles_coords' => '',
      'rectangles_dist' => 0,
      'rectangles_enable' => 0,
      'rectangles_fillcolor' => '#FF0000',
      'rectangles_fillopacity' => 0.35,
      'rectangles_message' => '',
      'rectangles_strokecolor' => '#FF0000',
      'rectangles_strokeopacity' => 0.8,
      'rectangles_strokeweight' => 3,
      'restrict_by_country' => 0,
      'scale' => 0,
      'scalecontrolposition' => '',
      'scrollwheel' => 1,
      'search_country' => 'US',
      'search_places' => 0,
      'search_places_dd' => 0,
      'search_places_label' => 'Google Places Search',
      'search_places_list' => 0,
      'search_places_placeholder' => '',
      'search_places_position' => 'outside_above',
      'search_places_size' => 40,
      'show_bubble_on_one_marker' => 0,
      'show_maplinks' => 0,
      'show_search_distance' => 0,
      'street_num_pos' => 2,
      'streetview_settings_allow' => 1,
      'sv_addresscontrol' => 1,
      'sv_addresscontrolposition' => '',
      'sv_clicktogo' => 1,
      'sv_enable' => 0,
      'sv_heading' => 0,
      'sv_imagedatecontrol' => 0,
      'sv_linkscontrol' => 1,
      'sv_pancontrol' => 1,
      'sv_pancontrolposition' => '',
      'sv_pitch' => 0,
      'sv_scrollwheel' => 1,
      'sv_showfirst' => 0,
      'sv_zoom' => 1,
      'sv_zoomcontrol' => 'default',
      'sv_zoomcontrolposition' => '',
      'svcontrolposition' => '',
      'use_address' => 2,
      'use_clear_button' => 1,
      'use_country_dropdown' => 2,
      'use_geolocation_button' => 1,
      'use_smart_ip_button' => 0,
      'use_smart_ip_latlon' => 0,
      'user_map_marker' => 'drupal',
      'views_search_center' => 0,
      'views_search_marker' => 'drupal',
      'views_search_marker_enable' => 0,
      'views_search_marker_toggle' => 0,
      'views_search_marker_toggle_active' => 0,
      'views_search_radshape_enable' => 0,
      'views_search_radshape_fillcolor' => '#FF0000',
      'views_search_radshape_fillopacity' => 0.35,
      'views_search_radshape_strokecolor' => '#FF0000',
      'views_search_radshape_strokeopacity' => 0.8,
      'views_search_radshape_strokeweight' => 3,
      'views_search_radshape_toggle' => 0,
      'views_search_radshape_toggle_active' => 0,
      'visual_refresh' => 0,
      'vocabulary_map_marker' => 'drupal',
      'zoom' => 3,
      'zoomcontrolposition' => '',
    ),
    'translatable' => 0,
    'type' => 'getlocations_fields',
  );

  // Exported field_base: 'field_numero_verde'
  $field_bases['field_numero_verde'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_numero_verde',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_opening_hours'
  $field_bases['field_opening_hours'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_opening_hours',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_payed'
  $field_bases['field_payed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_payed',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Payed Basic' => 'Payed Basic',
        'Payed On Top' => 'Payed On Top',
        'Payed per lead' => 'Payed per lead',
        'Payed' => 'Payed',
        'Not Payed' => 'Not Payed',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_payment_options'
  $field_bases['field_payment_options'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_payment_options',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Gotovina',
        2 => 'Kreditne kartice',
        3 => 'Amex',
        4 => 'Mastercard',
        5 => 'Visa',
        6 => 'Discover',
        7 => 'Diners Club',
        8 => 'JCB',
        9 => 'PayPal',
        10 => 'Plačanje na rate',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_phone'
  $field_bases['field_phone'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phone',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_price'
  $field_bases['field_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_price',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_prices_per_dentist'
  $field_bases['field_prices_per_dentist'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_prices_per_dentist',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_procedura'
  $field_bases['field_procedura'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_procedura',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'usluge',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_rating'
  $field_bases['field_rating'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_rating',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fivestar',
    'settings' => array(
      'axis' => 'vote',
    ),
    'translatable' => 0,
    'type' => 'fivestar',
  );

  // Exported field_base: 'field_specialties'
  $field_bases['field_specialties'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_specialties',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Implants' => 'Implants specialist',
        'ADA' => 'American Dental Association',
        'ADM' => 'Asociación Dental Mexicana',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_staff_size'
  $field_bases['field_staff_size'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_staff_size',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_video'
  $field_bases['field_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'video_embed_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'video_embed_field',
  );

  return $field_bases;
}
