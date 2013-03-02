<?php
/**
 * @file
 * wanderitis_structure.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function wanderitis_structure_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geo|node|hike|form';
  $field_group->group_name = 'group_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geo Data',
    'weight' => '58',
    'children' => array(
      0 => 'field_meeting_point',
      1 => 'field_hike_route',
      2 => 'field_destination_point',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Geo Data',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_geo|node|hike|form'] = $field_group;

  return $export;
}
