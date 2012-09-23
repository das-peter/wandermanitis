<?php
/**
 * @file
 * wanderitis_layout.default_layout_breakpoint.inc
 */

/**
 * Implements hook_default_layout_breakpoint().
 */
function wanderitis_layout_default_layout_breakpoint() {
  $export = array();

  $layout_breakpoint = new stdClass();
  $layout_breakpoint->disabled = FALSE; /* Edit this to true to make a default layout_breakpoint disabled initially */
  $layout_breakpoint->api_version = 1;
  $layout_breakpoint->name = 'wanderitis_smartphone';
  $layout_breakpoint->admin_title = 'wanderitis Smartphone';
  $layout_breakpoint->width = '0px';
  $layout_breakpoint->grid_name = 'wanderitis_ninesixty_16';
  $export['wanderitis_smartphone'] = $layout_breakpoint;

  $layout_breakpoint = new stdClass();
  $layout_breakpoint->disabled = FALSE; /* Edit this to true to make a default layout_breakpoint disabled initially */
  $layout_breakpoint->api_version = 1;
  $layout_breakpoint->name = 'wanderitis_standard';
  $layout_breakpoint->admin_title = 'wanderitis Standard';
  $layout_breakpoint->width = '760px';
  $layout_breakpoint->grid_name = 'twelve_column_fluid';
  $export['wanderitis_standard'] = $layout_breakpoint;

  $layout_breakpoint = new stdClass();
  $layout_breakpoint->disabled = FALSE; /* Edit this to true to make a default layout_breakpoint disabled initially */
  $layout_breakpoint->api_version = 1;
  $layout_breakpoint->name = 'wanderitis_tablet';
  $layout_breakpoint->admin_title = 'wanderitis Tablet';
  $layout_breakpoint->width = '320px';
  $layout_breakpoint->grid_name = 'six_column_fluid';
  $export['wanderitis_tablet'] = $layout_breakpoint;

  return $export;
}
