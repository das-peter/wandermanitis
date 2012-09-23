<?php
/**
 * @file
 * wanderitis_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wanderitis_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "gridbuilder" && $api == "default_gridbuilder_grids") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "layout" && $api == "default_layout_breakpoint") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
}
