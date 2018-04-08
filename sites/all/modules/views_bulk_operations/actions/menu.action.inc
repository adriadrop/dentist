<?php
/**
 * @file Drupal action to create menu items for nodes.
 */
 
/**
 * Implementation of hook_action_info().
 * Called by VBO on its own hook_action_info().
 */
function views_bulk_operations_menu_action_info() {
  if (!module_exists('menu')) return array();

  return array('views_bulk_operations_menu_action' => 
    array(
      'type' => 'node',
      'label' => t('Add node to menu'),
      'configurable' => TRUE,
    )
  );
}

/**
 * Action function.
 */
function views_bulk_operations_menu_action(&$node, $context) {
  $parent = explode(":", $context['plid']);
  $menu_name = $parent[0];
  $plid = intval($parent[1]);

  if ($plid || $menu_name) {
    $item = array(
      'link_path' => 'node/' . $node->nid,
      'link_title' => $node->title,
      'menu_name' => $menu_name,
      'plid' => $plid,
      'hidden' => $context['hidden']
      );
    menu_link_save($item);
    menu_cache_clear_all();
  }
}

/**
 * Action form function.
 */
function views_bulk_operations_menu_action_form($context) {
  $menu = array_intersect_key(menu_get_menus(), array($context['settings']['menu_id'] => null) );

  $options = menu_parent_options($menu, array('mlid' => 0));
  $form['plid'] = array(
    '#type' => 'select',
    '#title' => t('Parent item'),
    '#options' => $options,
    '#description' => t('The maximum depth for an item and all its children is fixed at !maxdepth. Some menu items may not be available as parents if selecting them would exceed this limit.', array('!maxdepth' => MENU_MAX_DEPTH)),
    '#attributes' => array('class' => array('menu-title-select')),
  );

  $form['hidden'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable Menu Item'),
    '#weight' => 10,
    '#default_value' => $context['settings']['hidden'],
    '#description' => t('Menu items that are disabled will not be listed in any menu.'),
  );

  return $form;
}

/**
 * Action form submit handler.
 */
function views_bulk_operations_menu_action_submit($form, $form_state) {
  return array('plid' => $form_state['values']['plid'], 'hidden' => $form_state['values']['hidden']);
}

function views_bulk_operations_menu_action_views_bulk_operations_form($options) {
  $select_options = menu_get_menus();
  $form['menu_id'] = array(
    '#type' => 'select',
    '#title' => t('Default Parent item'),
    '#default_value' => $options['menu_id'],
    '#options' => $select_options,
    '#description' => t('The maximum depth for an item and all its children is fixed at !maxdepth. Some menu items may not be available as parents if selecting them would exceed this limit.', array('!maxdepth' => MENU_MAX_DEPTH)),
    '#attributes' => array('class' => 'menu-title-select'),
  );
  $form['hidden'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable Menu Items by Default'),
    '#weight' => 10,
    '#default_value' => 0,
    '#description' => t('Menu items that are disabled will not be listed in any menu.'),
  );

  return $form;
}

