<?php

/**
 * @package Global Industrial Business Theme - Adodis Drupal Theme
 * @version 1.1 April 07, 2011
 * @author Adodis Theme http://www.drupal-themes.adodis.com
 * @copyright Copyright (C) 2010 Adodis Drupal Theme
 * @license http://www.gnu.org/licenses/gpl-2.0.html GNU/GPLv2 only
 */
/**
 * Theme Engine functions. Its change the html,page,block layouts
 * @param All variables and values defined by $variables
 */

/*
 * Process page
 * pre-process hook_preprocess_search_block_form
 */
function industry_preprocess_search_block_form(&$variables) {

	/***** Search form Moderation *********/
	$variables['form']['search_block_form']['#title'] = '';
	$variables['form']['search_block_form']['#size'] = 20;
	$variables['form']['search_block_form']['#value'] = 'Enter keyword....';
	$variables['form']['search_block_form']['#attributes'] = array('onblur' => "if (this.value == '') {this.value = '".$variables['form']['search_block_form']['#value']."';}", 'onfocus' => "if (this.value == '".$variables['form']['search_block_form']['#value']."') {this.value = '';}" );
	unset($variables['form']['search_block_form']['#printed']);

	$variables['search']['search_block_form'] = drupal_render($variables['form']['search_block_form']);
	$variables['search_form'] = implode($variables['search']);

}

/*
 * Process page
 * pre-process hook_preprocess_page
 */
function industry_process_page(&$variables){

	global $base_url;

	/*********front page different color title**********/

	$variable=$variables['title'];
	$text=(explode(" ", $variable));
	$count = count($text);
	if($count < 3) {
	$variables['title'] = '<span><span class="title_default">'.$text[0].'</span> '.$text[1].'</span>';
	}
	else {
		$output = '<span>';
		foreach ($text as $k => $v) {
      	 if($k < 2) {
    		$output .=  '<span class="title_default">'.$v.'</span> ';
      	 }
      	 else {
      	 	$output .= ' '.$v.' ';
      	 }
		}
      	$output .= '</span>';
	   	$variables['title'] = $output;
	}


	/***** User login form Moderation *********/
	if($variables['page']['sidebar_left']){

		//$variables['page']['sidebar_left']['user_login']['links']['#markup'] = '<ul><li><a href = "'.$base_url.'/user/register">Create a Account</a></li><li><a href = "'.$base_url.'/user/password">Forget password</a></li></ul>';
		$variables['page']['sidebar_left']['user_login']['name']['#title']='';
		$variables['page']['sidebar_left']['user_login']['name']['#value']='User Name';
		$variables['page']['sidebar_left']['user_login']['name']['#required']='';
		$variables['page']['sidebar_left']['user_login']['pass']['#title']='';
		$variables['page']['sidebar_left']['user_login']['pass']['#value']='Password';
		$variables['page']['sidebar_left']['user_login']['actions']['submit']['#value']='Login';
		$variables['page']['sidebar_left']['user_login']['pass']['#required']='';
		$variables['page']['sidebar_left']['user_login']['pass']['#attributes'] = array('onblur' => "if (this.value == '') {this.value = '".$variables['page']['sidebar_left']['user_login']['pass']['#value']."';}", 'onfocus' => "if (this.value == '".$variables['page']['sidebar_left']['user_login']['pass']['#value']."') {this.value = '';}" );
		$variables['page']['sidebar_left']['user_login']['name']['#attributes'] = array('onblur' => "if (this.value == '') {this.value = '".$variables['page']['sidebar_left']['user_login']['name']['#value']."';}", 'onfocus' => "if (this.value == '".$variables['page']['sidebar_left']['user_login']['name']['#value']."') {this.value = '';}" );
	}

	/***** Sidebars class defined *********/
	if($variables['page']['sidebar_left'] && $variables['page']['sidebar_right']){
		$variables['switch_column']='three-column';
	}
	elseif($variables['page']['sidebar_left']){
		$variables['switch_column']='two-column-left';
	}
	elseif($variables['page']['sidebar_right']){
		$variables['switch_column']='two-column-right';
	}
	else{
		$variables['switch_column']='one-column';
	}

	/***** User Positions Top block class defined *********/
	$userbox_top= 0;
	if ($variables['page']['user1']) $userbox_top += 1;
	if ($variables['page']['user2']) $userbox_top += 1;
	if ($variables['page']['user3']) $userbox_top += 1;

	switch ($userbox_top) {
		case 1:
			$userbox_top = "one";
			break;
		case 2:
			$userbox_top = "two";
			break;
		case 3:
			$userbox_top = "three";
			break;
		default:
			$userbox_top = "";
	}
	$variables['user_column_top']=$userbox_top;


	/******* User Positions padding Seperatation *********/
	$variables['user_last'] = '';
	if(empty($variables['page']['user1']) && $variables['page']['user2'] && $variables['page']['user3']) {
		$variables['user_last']='end-top-user';
	}


	/***** Bottom Positions block class defined *********/
	$bottom_box= 0;
	if ($variables['page']['bottomcontent1']) $bottom_box += 1;
	if ($variables['page']['bottomcontent2']) $bottom_box += 1;

	switch ($bottom_box) {
		case 1:
			$bottom_box = "one";
			break;
		case 2:
			$bottom_box = "two";
			break;
		default:
			$userbox_top = "";
	}
	$variables['bottom_column']=$bottom_box;


	/***** Footer Content Positions block class defined *********/
	$footercontent= 0;
	if ($variables['page']['fcolumn1']) $footercontent += 1;
	if ($variables['page']['fcolumn2']) $footercontent += 1;
	if ($variables['page']['fcolumn3']) $footercontent += 1;

	switch ($footercontent) {
		case 1:
			$footercontent = "one";
			break;
		case 2:
			$footercontent = "two";
			break;
		case 3:
			$footercontent = "three";
			break;
		default:
			$footercontent = "";
	}
	$variables['fcontent_column']=$footercontent;


	/******* User Positions padding Seperatation *******/
	$variables['fcontent_last'] = '';
	if(empty($variables['page']['fcolumn1']) && $variables['page']['fcolumn2'] && $variables['page']['fcolumn3']) {
		$variables['fcontent_last']='end-top-fcontent';
	}


	/***** Footer Menu Positions block class defined *********/
	$footermenu= 0;
	if ($variables['page']['fcolumn4']) $footermenu += 1;
	if ($variables['page']['fcolumn5']) $footermenu += 1;
	if ($variables['page']['fcolumn6']) $footermenu += 1;

	switch ($footermenu) {
		case 1:
			$footermenu = "one";
			break;
		case 2:
			$footermenu = "two";
			break;
		case 3:
			$footermenu = "three";
			break;
		default:
			$footermenu = "";
	}
	$variables['fmenu_column']=$footermenu;

	/******* User Positions padding Seperatation *******/
	$variables['fmenu_last'] = '';
	if(empty($variables['page']['fcolumn4']) && $variables['page']['fcolumn5'] && $variables['page']['fcolumn6']) {
		$variables['fmenu_last']='end-top-fmenu';
	}

}

/*
 * Process Block
 * pre-process hook_preprocess_block(()
 */
function industry_preprocess_block(&$variables) {

	/**Colored Block title**/
	if ($variables['block']->region=='sidebar_left' ||
	$variables['block']->region=='sidebar_right' ||
	$variables['block']->region=='bottomcontent1' ||
	$variables['block']->region=='bottomcontent2') {
	$variable = $variables['block']->subject;
	$text=(explode(" ", $variable));
	$count = count($text);
	if(!empty($variables['block']->subject)) {
	if($count == 1) {
	$variables['block']->subject = '<span><span class="title_default">'.$text[0].'</span>';
	}elseif($count == 2) {
	$variables['block']->subject = '<span><span class="title_default">'.$text[0].'</span> '.$text[1].'</span>';
	}
	else {
		$output = '<span>';
		foreach ($text as $k => $v) {
      	 if($k < 2)
      	 {
    		$output .=  '<span class="title_default">'.$v.'</span> ';
      	 }
      	 else {
      	 	$output .= ' '.$v.' ';
      	 }
 		}
 		$output .= '</span>';
 		$variables['block']->subject = $output;
		}
	}
	}


	/******* Side bar left and right class suffix *********/

	if($variables['block']->region=='sidebar_left'){
		$variables['region_class']='block-content';
		$variables['class_suffix']=$variables['class_suffix'];
	}
	elseif($variables['block']->region=='sidebar_right'){
		$variables['region_class']='block-content';
		$variables['class_suffix']=$variables['class_suffix'];
	}
	elseif($variables['block']->region=='user1' || $variables['block']->region=='user2' || $variables['block']->region=='user3'){
		$variables['region_class']='content';
		$variables['class_suffix']=$variables['class_suffix'];
	}
	else{
		$variables['region_class']='content';
		$variables['class_suffix']='';
	}

		if($variables['block']->region=='navigation'){
			$mainmenu_dv="<div id='naviagtion_menu' class='menu_navigation clearfix'>".$variables['content']."</div>";
			$variables['content']=$mainmenu_dv;
		}
}

/*
 * Process Block
 * pre-process hook_preprocess_html(()
 */
function industry_preprocess_html(&$variables) {

	// Add conditional stylesheets for IE
	if(!empty($variables['page']['navigation']) || theme_get_setting('slideshow')=='yes'){
		drupal_add_js(path_to_theme().'/js/jquery-1.4.4.js');
	}
	if(theme_get_setting('slideshow')=='yes'){
		drupal_add_js(path_to_theme() . '/js/slideshow.js');
	}

	if(!empty($variables['page']['navigation'])) {
		drupal_add_js(path_to_theme().'/js/superfish.js');
		drupal_add_js('jQuery(function(){ jQuery("#naviagtion_menu ul.menu").addClass("sf-menu sf-navbar"); });','inline');
		drupal_add_css(path_to_theme() . '/css/superfish-menu.css');
		drupal_add_css(path_to_theme() . '/css/superfish-navbar.css');

	}

}

/*
 * Process Block
 * pre-process hook_menu_link(()
 */
function industry_menu_link(array $variables) {

	$element=$variables['element'];

	$link = $variables['element']['#original_link'];
	$class = implode(" ",$variables['element']['#attributes']['class']);
	$class = "menu-".$variables['element']['#original_link']['mlid']." ".$class;


	if (isset($link['href'])) {


	$sh_link = link_create($link['title'], $link['href'], isset($link['localized_options']) ? $link['localized_options'] : array());
	$sh=explode("+",$sh_link);
	$ado =$sh[0];
	if(isset($sh[1]))
	{
	$class .='';
	$class .=' active-trail';
	}

	}
	elseif (!empty($link['localized_options']['html'])) {
	$ado .= $link['title'];
	}
	else {
	$ado .= check_plain($link['title']);
	}
	if ($element['#below']) {
	    $ado .= drupal_render($element['#below']);
	}

	$output1 = '<li class="'.$class.'">';
	$output1 .= $ado;
	$output1 .= "</li>\n";
	return $output1;
}


function link_create($text, $path, array $options = array()) {

	global $language_url;

	static $use_theme = NULL;

	// Merge in defaults.
	$options += array(
	'attributes' => array(),
	'html' => FALSE,
	);

	if (($path == $_GET['q'] || ($path == '<front>' && drupal_is_front_page())) &&
	(empty($options['language']) || $options['language']->language == $language_url->language)) {
	$options['attributes']['class'][] = 'active';
	}

	if (isset($options['attributes']['title']) && strpos($options['attributes']['title'], '<') !== FALSE) {
	$options['attributes']['title'] = strip_tags($options['attributes']['title']);
	}
	if (!isset($use_theme) && function_exists('theme')) {
	if (variable_get('theme_link', TRUE)) {
	drupal_theme_initialize();
	$registry = theme_get_registry();
	$use_theme = !isset($registry['link']['function']) || ($registry['link']['function'] != 'theme_link');
	$use_theme = $use_theme || !empty($registry['link']['preprocess functions']) || !empty($registry['link']['process functions']) || !empty($registry['link']['includes']);
	}
	else {
	$use_theme = FALSE;
	}
	}
	if ($use_theme) {
	return theme('link', array('text' => $text, 'path' => $path, 'options' => $options));
	}



	$output = '<a href="' . check_plain(url($path, $options)) . '"' . drupal_attributes($options['attributes']) . '><span>' . ($options['html'] ? $text : check_plain($text)) . '</span></a>';

		if(isset($options['attributes']['class']))
		{
			if($options['attributes']['class'][0]=='active')
			{
				$output .='+set';
			}
		}

	return $output;
}