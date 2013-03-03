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
  $field_group->identifier = 'group_date_time|node|hike|form';
  $field_group->group_name = 'group_date_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_bar';
  $field_group->data = array(
    'label' => 'Dates & Time',
    'weight' => '3',
    'children' => array(
      0 => 'field_hike_dates',
      1 => 'field_time_of_day',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_date_time|node|hike|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equipment|node|hike|form';
  $field_group->group_name = 'group_equipment';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_bar';
  $field_group->data = array(
    'label' => 'Equipment',
    'weight' => '4',
    'children' => array(
      0 => 'field_equipment_rec',
      1 => 'field_equipment_mand',
      2 => 'field_shoe_type',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_equipment|node|hike|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geo|node|hike|form';
  $field_group->group_name = 'group_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_route';
  $field_group->data = array(
    'label' => 'Geo Data',
    'weight' => '16',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|hike|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_bar';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_media',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|hike|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_participants|node|hike|form';
  $field_group->group_name = 'group_participants';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_bar';
  $field_group->data = array(
    'label' => 'Participants',
    'weight' => '6',
    'children' => array(
      0 => 'field_max_participants',
      1 => 'field_min_participants',
      2 => 'field_audience',
      3 => 'field_price_adult',
      4 => 'field_price_child',
      5 => 'field_level_of_difficulty',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_participants|node|hike|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_route|node|hike|form';
  $field_group->group_name = 'group_route';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_bar';
  $field_group->data = array(
    'label' => 'Route',
    'weight' => '5',
    'children' => array(
      0 => 'field_weather_conditions',
      1 => 'field_meeting_point_descr',
      2 => 'field_distance',
      3 => 'field_altitude_difference',
      4 => 'field_duration',
      5 => 'field_guide_notes',
      6 => 'field_destination_point_descr',
      7 => 'group_geo',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_route|node|hike|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tab_bar|node|hike|form';
  $field_group->group_name = 'group_tab_bar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tab-Bar',
    'weight' => '0',
    'children' => array(
      0 => 'group_equipment',
      1 => 'group_route',
      2 => 'group_text',
      3 => 'group_participants',
      4 => 'group_date_time',
      5 => 'group_media',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_tab_bar|node|hike|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|hike|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'hike';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tab_bar';
  $field_group->data = array(
    'label' => 'General',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_tags',
      3 => 'field_mail',
      4 => 'language',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'General',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_text|node|hike|form'] = $field_group;

  return $export;
}
