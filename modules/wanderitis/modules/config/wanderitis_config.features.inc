<?php
/**
 * @file
 * wanderitis_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wanderitis_config_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function wanderitis_config_image_default_styles() {
  $styles = array();

  // Exported image style: header
  $styles['header'] = array(
    'name' => 'header',
    'effects' => array(
      1 => array(
        'label' => 'Smart scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image and ensure it fits into the given dimensions.',
        'effect callback' => 'cando_smart_scale_and_crop_effect',
        'dimensions callback' => 'cando_smart_scale_crop_dimensions',
        'form callback' => 'cando_smart_scale_crop_form',
        'summary theme' => 'cando_smart_scale_crop_summary',
        'module' => 'cando',
        'name' => 'image_smart_scale_and_crop',
        'data' => array(
          'width' => '1200',
          'height' => '400',
          'upscale' => 0,
          'anchor' => 'center-center',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
