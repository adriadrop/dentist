<?php
/**
 * @file
 * hr_dentist_search.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hr_dentist_search_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dentist|node|dentist|default';
  $field_group->group_name = 'group_dentist';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Descrizione',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descrizione',
      'instance_settings' => array(
        'classes' => 'group',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_dentist_full_group_dentist',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dentist|node|dentist|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_div_info_1|node|dentist|default';
  $field_group->group_name = 'group_div_info_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info';
  $field_group->data = array(
    'label' => 'Info 1',
    'weight' => '8',
    'children' => array(
      0 => 'field_rating',
      1 => 'contact_button',
      2 => 'first_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info 1',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_dentist_full_group_div_info_1',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_div_info_1|node|dentist|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_div_info_2|node|dentist|default';
  $field_group->group_name = 'group_div_info_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info';
  $field_group->data = array(
    'label' => 'Info 2',
    'weight' => '9',
    'children' => array(
      0 => 'field_opening_hours',
      1 => 'field_freebies',
      2 => 'field_staff_size',
      3 => 'field_payment_options',
      4 => 'field_fb',
      5 => 'address',
      6 => 'phone_list',
      7 => 'utf_web_link',
      8 => 'verde',
      9 => 'years_in_business',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info 2',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_dentist_full_group_div_info_2',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_div_info_2|node|dentist|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_div_info_3|node|dentist|default';
  $field_group->group_name = 'group_div_info_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info';
  $field_group->data = array(
    'label' => 'Info 3',
    'weight' => '10',
    'children' => array(
      0 => 'field_location',
      1 => 'fb_like',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info 3',
      'instance_settings' => array(
        'classes' => 'container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_dentist_full_group_div_info_3',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_div_info_3|node|dentist|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|dentist|default';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '0',
    'children' => array(
      0 => 'group_div_info_1',
      1 => 'group_div_info_2',
      2 => 'group_div_info_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_dentist_full_group_info',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|dentist|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photos|node|dentist|default';
  $field_group->group_name = 'group_photos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photos',
    'weight' => '1',
    'children' => array(
      0 => 'field_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photos',
      'instance_settings' => array(
        'classes' => 'group',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_dentist_full_group_photos',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_photos|node|dentist|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|dentist|default';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dentist';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '2',
    'children' => array(
      0 => 'field_video',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-video field-group-div ',
        'id' => 'node_dentist_full_group_video',
      ),
    ),
  );
  $export['group_video|node|dentist|default'] = $field_group;

  return $export;
}
