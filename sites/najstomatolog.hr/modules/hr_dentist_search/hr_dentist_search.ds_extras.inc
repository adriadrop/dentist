<?php
/**
 * @file
 * hr_dentist_search.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function hr_dentist_search_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'search_by_procedure-page';
  $ds_vd->label = 'Search_by_procedure: Page (Views template)';
  $export['search_by_procedure-page'] = $ds_vd;

  return $export;
}
