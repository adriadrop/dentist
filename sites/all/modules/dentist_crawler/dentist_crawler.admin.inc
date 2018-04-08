<?php
function dentist_crawler_admin(){
    $url = 'http://www.whatclinic.com/dentists/' . variable_get('dentist_crawler_city', 'turkey');
	//http://www.whatclinic.com/dentists/turkey/index.aspx?page=1
	$last_pager = variable_get('dentist_crawler_last_page', 0);
	if ($last_pager){
		$url .= '/index.aspx?page='.$last_pager;
	}
	drupal_set_message();
	$form = array();
	$form['from'] = array(
      '#type' => 'item',
      '#title' => t('Current crawl point: !url', array('!url' => l($url, $url))),
    );

	$form['dentist_crawler_enabled'] = array(
		'#type' => 'checkbox',
		'#title' => t('Enable a crawling during cron'),
		'#description' => t("If checked, this module will continue fetching items from the WhatClinic site."),
		'#default_value' => variable_get('dentist_crawler_enabled', 0),
	);
	$form['dentist_crawler_frequency'] = array(
		'#type' => 'textfield',
		'#title' => t('Cron frequency'),
		'#description' => t("Enter minimum seconds of time this module should wait to re-run the grabber. 3600 (1 hour) is recommended."),
		'#default_value' => variable_get('dentist_crawler_frequency', 3600),
		'#required' => TRUE,
	);
	$form['dentist_crawler_dedupe_action'] = array(
		'#type' => 'select',
		'#title' => t('Action to take if the URL is already crawled and available in the database.'),
		'#default_value' => variable_get('dentist_crawler_dedupe_action', 'skip'),
		'#options' => array(
			'skip' => t('Skip'),
			'do' => t('Add new'),
			'update' => t('Update'),
			'replace' => t('Replace'),
			),
		'#description' => t("'update' will load the existing node and will only replace data from the URL. Missing data from the source after last crawl will not be removed. 'Replace' will save a new node from the source data and will replace the existing node (node ID will remain unchanged)."),
		'#required' => TRUE,
	);
	$form['crawl'] = array(
      '#type' => 'fieldset',
      '#title' => t('Crawl Location'),
    );
	$form['crawl']['dentist_crawler_city'] = array(
		'#type' => 'textfield',
		'#title' => t('Country'),
		'#description' => t('Enter country name to crawl from WhatClinic site. E.g: if you enter "turkey" here, http://www.whatclinic.com/dentists/turkey and their subsequent paged items will be crawled. Note that if you change this value, pager will be reset so crawler starts over from the first page'),
		'#default_value' => variable_get('dentist_crawler_city', 'turkey'),
		'#required' => TRUE,
	);
	$form['crawl']['dentist_crawler_last_page'] = array(
		'#type' => 'textfield',
		'#title' => t('Pager ID'),
		'#description' => t('Enter a pager ID to start crawling on next run. Enter 0 or leave blank to start over from first page. Note that as per WhatClinic site, ?page=1 is actually the second page.'),
		'#default_value' => variable_get('dentist_crawler_last_page', '0'),
		'#required' => FALSE,
	);
   $form['#submit'][] = 'dentist_crawler_admin_submit';
   return system_settings_form($form);
}

function dentist_crawler_admin_submit($form, $form_state){
  if ($form['crawl']['dentist_crawler_city']['#default_value'] != $form_state['values']['dentist_crawler_city']){
    variable_set('dentist_crawler_last_page', 0);
	drupal_set_message(t('Last crawled page information has been reset due to your change in the country name.'), 'warning');
	// drupal_set_message(t('New crawl starting point: !url', array('!url' => l('http://www.whatclinic.com/dentists/' . $form_state['values']['dentist_crawler_city'], 'http://www.whatclinic.com/dentists/' . $form_state['values']['dentist_crawler_city']))));
  }
/*   	$url = 'http://www.whatclinic.com/dentists/' . variable_get('dentist_crawler_city', 'turkey');
	$last_pager = variable_get('dentist_crawler_last_page', 0);
	if ($last_pager){
		$url .= '/index.aspx?page='.$last_pager;
	}
	drupal_set_message(t('Now crawling !url', array('!url' => l($url, $url)))); */
}

function dentist_crawler_sqlform(){
  $form['city'] = array(
		'#type' => 'textfield',
		'#title' => t('Country'),
		'#description' => t('Enter a country name here, and all entries in dentist_crawler table that contain this country name will be erased allowing hard refreshes of data.<br/>SQL Query would look like, "DELETE from {dentist_crawler} WHERE url LIKE \'http://www.whatclinic.com/dentists/[country]%\'"'),
		'#required' => TRUE,
	);
	$form['submit'] = array(
	  '#type' => 'submit',
	  '#value' => 'Delete records'
	);
	
	return $form;
}

function dentist_crawler_sqlform_submit($form, $form_state){
$result = db_query(
  'DELETE from {dentist_crawler} WHERE url LIKE :pattern',
  array(':pattern' => db_like('http://www.whatclinic.com/dentists/'. $form_state['values']['city']) . '%')
);
drupal_set_message('Query executed');
}