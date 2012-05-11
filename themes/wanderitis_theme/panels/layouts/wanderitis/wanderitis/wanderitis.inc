<?php

/**
 * Implements hook_panels_layouts().
 */
function wanderitis_theme_wanderitis_panels_layouts() {
  $items['wanderitis'] = array(
    'title' => t('Three column 2-10-4 stacked'),
    'category' => t('Wanderitis: 16 Column Grid'),
    'icon' => 'wanderitis.png',
    'theme' => 'wanderitis',
    'admin css' => '../omega_panels_admin_16.css',
    'regions' => array(
      'top_left' => t('Top left'),
      'top' => t('Top middle'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
