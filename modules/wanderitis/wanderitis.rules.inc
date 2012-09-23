<?php
/**
 * Created by JetBrains PhpStorm.
 * User: das-peter
 * Date: 23.09.12
 * Time: 15:34
 * To change this template use File | Settings | File Templates.
 */

/**
 * Implements hook_rules_event_info().
 *
 * @return arrayI
 */
function wanderitis_rules_event_info() {
  $items = array(
    'wanderitis_hike_subscription' => array(
      'label' => t('New hike subscription'),
      'group' => t('Wanderitis'),
      'variables' => array(
        'hike' => array('type' => 'node', 'bundle' => 'hike', 'label' => t('Hike')),
        'name' => array('type' => 'text', 'label' => t('Name')),
        'firstname' => array('type' => 'text', 'label' => t('Firstname')),
        'phone' => array('type' => 'text', 'label' => t('Phone')),
        'email' => array('type' => 'text', 'label' => t('E-Mail')),
        'street' => array('type' => 'text', 'label' => t('Street')),
        'zip' => array('type' => 'text', 'label' => t('Zip')),
        'city' => array('type' => 'text', 'label' => t('City')),
        'adults' => array('type' => 'integer', 'label' => t('Adults')),
        'children' => array('type' => 'integer', 'label' => t('Children')),
        'holiday_location' => array('type' => 'integer', 'label' => t('Holiday Location')),
        'remarks' => array('type' => 'integer', 'label' => t('Remarks')),
      ),
    ),
  );
  return $items;
}

function wanderitis_hike_subscription() {

}
