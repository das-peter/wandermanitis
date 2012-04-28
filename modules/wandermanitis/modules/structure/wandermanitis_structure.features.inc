<?php
/**
 * @file
 * wandermanitis_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wandermanitis_structure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function wandermanitis_structure_node_info() {
  $items = array(
    'hike' => array(
      'name' => t('Hike'),
      'base' => 'node_content',
      'description' => t('Content type to describe a walking-tour.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
