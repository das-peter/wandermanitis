<?php

/**
 * Implements hook_panels_layouts().
 */
function wandermanitis_theme_wandermanitis_panels_layouts() {
  $items['wandermanitis'] = array(
    'title' => t('Three column 2-10-4 stacked'),
    'category' => t('Wandermanitis: 16 Column Grid'),
    'icon' => 'wandermanitis.png',
    'theme' => 'wandermanitis',
    'admin css' => '../omega_panels_admin_16.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
