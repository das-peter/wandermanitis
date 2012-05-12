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
  );
  $form['numbers']['children'] = array(
    '#type' => 'select',
    '#title' => t('Number of children'),
    '#options' => array(0 => '- ' . t('None') . ' -') + $number_options,
  );

  $form['actions']['send'] = array(
    '#type' => 'submit',
    '#value' => t('Send'),
  );
  $form['actions']['reset'] = array(
    '#type' => 'link',
    '#title' => t('Reset'),
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
  // Redirect to the confirmation page.
  $form_state['redirect'] = 'hike-subscribe/' . $form_state['values']['node']->nid . '/submitted';
}
