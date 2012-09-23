<?php

/**
 * Form for to subscribe to a hike.
 *
 * @param $form
 * @param $form_state
 * @param $node
 */
function wanderitis_hike_subscription_form($form, &$form_state, $node = NULL) {
  $form['lastname'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#required' => TRUE,
  );
  $form['firstname'] = array(
    '#type' => 'textfield',
    '#title' => t('Firstname'),
    '#required' => TRUE,
  );
  $form['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('E-Mail'),
    '#required' => TRUE,
  );
  $form['phone'] = array(
    '#type' => 'textfield',
    '#title' => t('Phone / Mobile'),
  );
  $form['address'] = array(
    '#type' => 'fieldset',
    '#title' => t('Address'),
    '#tree' => TRUE,
  );
  $form['address']['street'] = array(
    '#type' => 'textfield',
    '#title' => t('Street'),
  );
  $form['address']['postalcode'] = array(
    '#type' => 'textfield',
    '#title' => t('Postal code'),
  );
  $form['address']['city'] = array(
    '#type' => 'textfield',
    '#title' => t('City'),
  );
  $form['holiday_location'] = array(
    '#type' => 'textarea',
    '#title' => t('Holiday-Location'),
    '#description' => t('The location where we can reach you during your stay in Heidiland.'),
  );
  $form['remarks'] = array(
    '#type' => 'textarea',
    '#title' => t('Remarks / Requests'),
    '#description' => t('Add here remarks or special requests.'),
  );
  $number_options = range(1, 9);
  $number_options = array_combine($number_options, $number_options);
  $form['numbers'] = array(
    '#type' => 'container',
    '#prefix' => '<div class="numbers inline">',
    '#suffix' => '</div>',
  );
  $form['numbers']['adults'] = array(
    '#type' => 'select',
    '#title' => t('Number of adults'),
    '#options' => $number_options,
    '#required' => TRUE,
    '#ajax' => array(
      'callback' => 'wanderitis_hike_subscription_form_ajax',
      'wrapper' => 'price-field',
      'method' => 'replace',
    ),
  );
  $form['numbers']['children'] = array(
    '#type' => 'select',
    '#title' => t('Number of children'),
    '#options' => array(0 => '- ' . t('None') . ' -') + $number_options,
    '#ajax' => array(
      'callback' => 'wanderitis_hike_subscription_form_ajax',
      'wrapper' => 'price-field',
      'method' => 'replace',
    ),
  );

  $price_markup = NULL;
  if (!empty($node) && (isset($form_state['values']['adults']) || isset($form_state['values']['children']))) {
    $adults = (int) $form_state['values']['adults'];
    $children = (int) $form_state['values']['children'];
    $price_adult = field_view_field('node', $node, 'field_price_adult', array('type' => 'number_unformatted'));
    $price_adult = drupal_render_children($price_adult);
    $price_children = field_view_field('node', $node, 'field_price_child', array('type' => 'number_unformatted'));
    $price_children = drupal_render_children($price_children);
    $price_markup = ($price_adult * $adults) + ($price_children * $children) . ' CHF';
  }
  $form['numbers']['price'] = array(
    '#type' => 'item',
    '#title' => ($price_markup) ? t('Price') : NULL,
    '#markup' => $price_markup,
    '#prefix' => '<div class="price-field" id="price-field">',
    '#suffix' => '</div>',
  );
  $form['actions']['send'] = array(
    '#type' => 'submit',
    '#value' => t('Send'),
  );
  $form['actions']['reset'] = array(
    '#type' => 'link',
    '#title' => t('Back to the hike'),
    '#href' => 'node/' . (($node) ? $node->nid : NULL),
    '#attributes' => array(
      'class' => array('button'),
    ),
  );
  $form['node'] = array(
    '#type' => 'value',
    '#value' => (($node) ? $node : NULL),
  );

  return $form;
}

/**
 * Input validation.
 *
 * @param $form
 * @param $form_state
 */
function wanderitis_hike_subscription_form_validate($form, &$form_state) {
  if ($form_state['values']['mail'] && !valid_email_address($form_state['values']['mail'])) {
    form_set_error('mail', t('The e-mail address you specified is not valid.'));
  }
}

/**
 * Submit handler.
 *
 * @param $form
 * @param $form_state
 */
function wanderitis_hike_subscription_form_submit($form, &$form_state) {
  rules_invoke_all(
    'wanderitis_hike_subscription',
    $form_state['values']['node'],
    $form_state['values']['lastname'],
    $form_state['values']['firstname'],
    $form_state['values']['phone'],
    $form_state['values']['mail'],
    $form_state['values']['address']['street'],
    $form_state['values']['address']['postalcode'],
    $form_state['values']['address']['city'],
    $form_state['values']['adults'],
    $form_state['values']['children'],
    $form_state['values']['holiday_location'],
    $form_state['values']['remarks']
  );
  // Redirect to the confirmation page.
  $form_state['redirect'] = 'hike-subscribe/' . $form_state['values']['node']->nid . '/submitted';
}

function wanderitis_hike_subscription_form_ajax($form, $form_state) {
  return $form['numbers']['price'];
}
