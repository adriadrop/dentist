<?php
/**
 * @file
 * hr_dentist_search.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function hr_dentist_search_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|search_by_procedure-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'search_by_procedure-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'header',
        1 => 'attachment_before',
        2 => 'exposed',
        3 => 'rows',
        4 => 'pager',
      ),
    ),
    'fields' => array(
      'header' => 'ds_content',
      'attachment_before' => 'ds_content',
      'exposed' => 'ds_content',
      'rows' => 'ds_content',
      'pager' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['ds_views|search_by_procedure-page|default'] = $ds_layout;

  return $export;
}
