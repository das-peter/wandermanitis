<?php
/**
 * @file
 * wanderitis_layout.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function wanderitis_layout_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'wanderitis_default_layout';
  $layout->admin_title = 'Wanderitis Responsive Layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'responsive';
  $layout->settings = array(
    'regions' => array(
      'header_a' => 'header_a',
      'header_b' => 'header_b',
      'body' => 'body',
      'sidebar_a' => 'sidebar_a',
      'footer_a' => 'footer_a',
    ),
    'overrides' => array(
      'wanderitis_smartphone' => array(),
      'wanderitis_tablet' => array(),
      'wanderitis_standard' => array(
        0 => array(
          'name' => 'body',
          'columns' => 9,
        ),
        1 => array(
          'name' => 'sidebar_a',
          'columns' => 3,
        ),
      ),
    ),
  );
  $export['wanderitis_default_layout'] = $layout;

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'wanderitis_search_layout';
  $layout->admin_title = 'Wanderitis Responsive Search Layout';
  $layout->admin_description = '';
  $layout->category = '';
  $layout->plugin = 'responsive';
  $layout->settings = array(
    'regions' => array(
      'header_a' => 'header_a',
      'header_b' => 'header_b',
      'navigation' => 'navigation',
      'body' => 'body',
      'footer_a' => 'footer_a',
    ),
    'overrides' => array(
      'wanderitis_smartphone' => array(),
      'wanderitis_tablet' => array(
        0 => array(
          'name' => 'navigation',
          'columns' => 2,
        ),
        1 => array(
          'name' => 'body',
          'columns' => 4,
        ),
      ),
      'wanderitis_standard' => array(
        0 => array(
          'name' => 'body',
          'columns' => 9,
        ),
        1 => array(
          'name' => 'sidebar_a',
          'columns' => 3,
        ),
        2 => array(
          'name' => 'header_a',
          'columns' => 12,
        ),
        3 => array(
          'name' => 'header_b',
          'columns' => 12,
        ),
        4 => array(
          'name' => 'footer_a',
          'columns' => 12,
        ),
        5 => array(
          'name' => 'navigation',
          'columns' => 3,
        ),
      ),
    ),
  );
  $export['wanderitis_search_layout'] = $layout;

  return $export;
}
