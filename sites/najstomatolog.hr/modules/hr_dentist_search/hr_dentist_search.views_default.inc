<?php
/**
 * @file
 * hr_dentist_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_dentist_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_by_procedure';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Search by Procedure';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search by Procedure';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_procedura' => 'field_procedura',
    'field_price' => 'field_price',
    'field_rating' => 'field_rating',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_procedura' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_rating' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Cjenik (field_prices_per_dentist) */
  $handler->display->display_options['relationships']['field_prices_per_dentist_node']['id'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['relationships']['field_prices_per_dentist_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_prices_per_dentist_node']['field'] = 'field_prices_per_dentist_node';
  /* Field: Getlocations Fields: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['relationship'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  /* Field: Getlocations Fields: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['relationship'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_prices_per_dentist_node';
  /* Field: Field collection item: Procedura */
  $handler->display->display_options['fields']['field_procedura']['id'] = 'field_procedura';
  $handler->display->display_options['fields']['field_procedura']['table'] = 'field_data_field_procedura';
  $handler->display->display_options['fields']['field_procedura']['field'] = 'field_procedura';
  $handler->display->display_options['fields']['field_procedura']['label'] = 'Usluga';
  /* Field: Field collection item: Cijena */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['label'] = 'Cijene';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Field: Ocijena */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['relationship'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['fields']['field_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
  );
  /* Field: Upute PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['ui_name'] = 'Upute PHP';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$values = filter_input_array(INPUT_GET);
if (isset($values[\'distance\'][\'latitude\'])) {
   print \'<a href="getdirections/latlons/\' . $row->latitude . \',\' . $row->longitude . \'|\' . $values[\'distance\'][\'latitude\'] . \',\' . $values[\'distance\'][\'longitude\'] . \'">Pogledaj Upute</a>\';
}
?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['relationship'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Taxonomy Entity Index: Has taxonomy terms on Field collection item  (with depth and indexed in taxonomy_entity_index) */
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['id'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['field'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['value'] = array(
    159 => '159',
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['group'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator_id'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['label'] = 'Usluge';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['operator'] = 'taxonomy_entity_index_tid_depth_op';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['identifier'] = 'taxonomy_entity_index_tid_depth';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['vocabulary'] = 'usluge';
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['hierarchy'] = 1;
  $handler->display->display_options['filters']['taxonomy_entity_index_tid_depth']['depth'] = '1';
  /* Filter criterion: Getlocations Fields: Distance */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'getlocations_fields';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['relationship'] = 'field_prices_per_dentist_node';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'uid_loc_field' => 'user',
    'tid_arg' => '',
    'tid_loc_field' => 'taxonomy_term',
    'cid_arg' => '',
    'cid_loc_field' => 'comment',
    'search_distance' => '20',
    'search_units' => 'km',
    'search_field' => 'Lokacija',
    'search_operator' => 'mbr',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['distance']['expose']['search_units'] = array(
    'default' => 'km',
  );
  $handler->display->display_options['filters']['distance']['expose']['search_distance'] = array(
    'default' => 10,
  );
  $handler->display->display_options['filters']['distance']['expose']['search_field'] = array(
    'default' => '',
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'search';
  $handler->display->display_options['filters']['distance']['settings'] = array(
    'display_search_units' => 0,
    'display_search_distance' => 0,
    'searchbox_size' => '60',
    'restrict_by_country' => 1,
    'country' => 'HR',
  );
  /* Filter criterion: Field collection item: Cijena (field_price) */
  $handler->display->display_options['filters']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['filters']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['group'] = 1;
  $handler->display->display_options['filters']['field_price_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_price_value']['expose']['operator_id'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['label'] = 'Cijena';
  $handler->display->display_options['filters']['field_price_value']['expose']['operator'] = 'field_price_value_op';
  $handler->display->display_options['filters']['field_price_value']['expose']['identifier'] = 'field_price_value';
  $handler->display->display_options['filters']['field_price_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pretraga';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'getlocations';
  $handler->display->display_options['style_options']['width'] = '100%';
  $handler->display->display_options['style_options']['height'] = '400px';
  $handler->display->display_options['style_options']['latlong'] = '40,15';
  $handler->display->display_options['style_options']['category_method'] = '0';
  $handler->display->display_options['style_options']['category_term_reference_field'] = 'field_procedura';
  $handler->display->display_options['style_options']['highlight_enable'] = 1;
  $handler->display->display_options['style_options']['highlight_radius'] = '10';
  $handler->display->display_options['style_options']['views_search_center'] = 1;
  $handler->display->display_options['style_options']['empty_result'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Getlocations Fields: Glid */
  $handler->display->display_options['fields']['glid']['id'] = 'glid';
  $handler->display->display_options['fields']['glid']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['glid']['field'] = 'glid';
  $handler->display->display_options['fields']['glid']['relationship'] = 'field_prices_per_dentist_node';
  /* Field: Getlocations Fields: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  /* Field: Getlocations Fields: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  /* Field: Getlocations Fields: Marker */
  $handler->display->display_options['fields']['marker']['id'] = 'marker';
  $handler->display->display_options['fields']['marker']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['marker']['field'] = 'marker';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $translatables['search_by_procedure'] = array(
    t('Master'),
    t('Search by Procedure'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_prices_per_dentist'),
    t('Longitude'),
    t('Latitude'),
    t('Title'),
    t('Usluga'),
    t('Cijene'),
    t('Ocijena'),
    t('Usluge'),
    t('km'),
    t('Cijena'),
    t('Page'),
    t('Attachment'),
    t('Glid'),
    t('Marker'),
  );
  $export['search_by_procedure'] = $view;

  return $export;
}
