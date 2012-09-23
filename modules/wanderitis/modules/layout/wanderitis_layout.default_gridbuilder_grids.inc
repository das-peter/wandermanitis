<?php
/**
 * @file
 * wanderitis_layout.default_gridbuilder_grids.inc
 */

/**
 * Implements hook_default_gridbuilder_grids().
 */
function wanderitis_layout_default_gridbuilder_grids() {
  $export = array();

  $gridbuilder = new stdClass();
  $gridbuilder->disabled = FALSE; /* Edit this to true to make a default gridbuilder disabled initially */
  $gridbuilder->api_version = 1;
  $gridbuilder->name = 'wanderitis_ninesixty_16';
  $gridbuilder->admin_title = 'Wanderitis 960px wide, 16 column grid';
  $gridbuilder->grid_type = 0;
  $gridbuilder->width = 960;
  $gridbuilder->columns = 16;
  $gridbuilder->padding_width = 20;
  $gridbuilder->gutter_width = 10;
  $export['wanderitis_ninesixty_16'] = $gridbuilder;

  return $export;
}
