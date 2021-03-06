<?php

/**
 * @file
 * Variable integration for Path breadcrumbs module.
 */

/**
 * Implements hook_variable_info().
 */
function path_breadcrumbs_variable_info($options) {

  $variables['path_breadcrumbs_home_link_enabled'] = array(
    'type' => 'boolean',
    'title' => t('Prepend breadcrumbs with a home link by default', array(), $options),
    'description' => t('This value does not changes current breadcrumbs navigation. It is just set default value for new path breadcrumbs.'),
    'default' => TRUE,
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_home_link_title'] = array(
    'type' => 'string',
    'title' => t('Home link title', array(), $options),
    'description' => t('Title of the link that points to the front page.'),
    'default' => 'Home',
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_delimiter'] = array(
    'type' => 'string',
    'title' => t('Delimiter', array(), $options),
    'description' => t('Symbol that separates breadcrumbs.'),
    'default' => '»',
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_rich_snippets'] = array(
    'type' => 'select',
    'title' => t('Rich snippets support', array(), $options),
    'description' => t('Provides rich snippets support for breadcrumbs. It is important to build a structure of a site in the SERP.'),
    'options' => array(
      PATH_BREADCRUMBS_RICH_SNIPPETS_DISABLED => t('Disabled', array(), $options),
      PATH_BREADCRUMBS_RICH_SNIPPETS_RDFA => t('RDFa', array(), $options),
      PATH_BREADCRUMBS_RICH_SNIPPETS_MICRODATA => t('Microdata', array(), $options),
    ),
    'default' => 0,
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_hide_single_breadcrumb'] = array(
    'type' => 'boolean',
    'title' => t('Hide breadcrumbs navigation for single breadcrumb', array(), $options),
    'description' => t('If breacrumbs navigation contains only one breadcrumb then breadcrumb navigation will be hidden.'),
    'default' => FALSE,
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_decode_entities'] = array(
    'type' => 'boolean',
    'title' => t('Decode HTML entities'),
    'description' => t('Converts quotes in the breadcrumbs to their applicable characters.'),
    'default' => TRUE,
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_internal_render'] = array(
    'type' => 'boolean',
    'title' => t('Use module breadcrumbs render function', array(), $options),
    'description' => t('If this value checked module will replace system or theme breadcrumb render function by module\'s one.'),
    'default' => TRUE,
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );

  $variables['path_breadcrumbs_url_cleaning_method'] = array(
    'type' => 'select',
    'title' => t('URL path cleaning method', array(), $options),
    'description' => t('Choose the path cleaning method to be applied when rendering Path Breadcrumbs.'),
    'options' => array(
      'none' => t('Disabled', array(), $options),
      'ctools' => t('CTools', array(), $options),
      'pathauto' => t('Pathauto', array(), $options),
    ),
    'default' => 'none',
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );
  if (!module_exists('pathauto')) {
    unset($variables['path_breadcrumbs_url_cleaning_method']['options']['pathauto']);
  }

  $variables['path_breadcrumbs_truncate_title_length'] = array(
    'type' => 'number',
    'title' => t('Maximum title length', array(), $options),
    'description' => t('An upper limit of symbols in the Path Breadcrumbs title. Title over the limit will be truncated with adding ellipsis at the end. Leave blank to disable truncating.'),
    'default' => '',
    'localize' => TRUE,
    'group' => 'path_breadcrumbs',
  );

  return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function path_breadcrumbs_variable_group_info() {

  $groups['path_breadcrumbs'] = array(
    'title' => t('Path breadcrumbs'),
    'description' => t('Variables for Path breadcrumbs configuration.'),
    'access' => 'administer path breadcrumbs',
    'path' => array('admin/structure/path-breadcrumbs/settings'),
  );

  return $groups;
}
