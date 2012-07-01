<?php
/**
 * @file
 * wanderitis_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function wanderitis_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'hike_subscription_form';
  $mini->category = 'wanderitis';
  $mini->admin_title = 'Hike Subscription Form';
  $mini->admin_description = 'Hike Subscription Form';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array(
    0 => array(
      'file' => array(
        'type' => 'inc',
        'module' => 'wanderitis',
        'name' => 'pages/wanderitis.form',
      ),
      'form_id' => 'wanderitis_hike_subscription_form',
      'arguments' => array(
        'node' => '%node',
      ),
      'substitute' => 1,
      'identifier' => 'Hike Subscription Form',
      'keyword' => 'hike_subscription_form',
      'name' => 'generic_form',
      'context' => array(
        0 => 'requiredcontext_entity:node_1',
      ),
      'id' => 1,
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd55ae0ea-5a07-d694-257d-6a2e5c6d71e7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f9e08e98-1af3-d3c4-354b-346a7d8d7fc7';
    $pane->panel = 'bottom';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'numbers:price',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'f9e08e98-1af3-d3c4-354b-346a7d8d7fc7';
    $display->content['new-f9e08e98-1af3-d3c4-354b-346a7d8d7fc7'] = $pane;
    $display->panels['bottom'][0] = 'new-f9e08e98-1af3-d3c4-354b-346a7d8d7fc7';
    $pane = new stdClass();
    $pane->pid = 'new-3a1c02a2-3da5-5554-2926-8dbbe1c848aa';
    $pane->panel = 'bottom';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'actions',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-generic-form-field-actions',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '3a1c02a2-3da5-5554-2926-8dbbe1c848aa';
    $display->content['new-3a1c02a2-3da5-5554-2926-8dbbe1c848aa'] = $pane;
    $display->panels['bottom'][1] = 'new-3a1c02a2-3da5-5554-2926-8dbbe1c848aa';
    $pane = new stdClass();
    $pane->pid = 'new-1d2d0148-7bf6-18e4-89a2-db53c013ca6d';
    $pane->panel = 'left_above';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'lastname',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '1d2d0148-7bf6-18e4-89a2-db53c013ca6d';
    $display->content['new-1d2d0148-7bf6-18e4-89a2-db53c013ca6d'] = $pane;
    $display->panels['left_above'][0] = 'new-1d2d0148-7bf6-18e4-89a2-db53c013ca6d';
    $pane = new stdClass();
    $pane->pid = 'new-4acbcfa6-073f-3e04-edf7-d04af905b10c';
    $pane->panel = 'left_above';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'mail',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '4acbcfa6-073f-3e04-edf7-d04af905b10c';
    $display->content['new-4acbcfa6-073f-3e04-edf7-d04af905b10c'] = $pane;
    $display->panels['left_above'][1] = 'new-4acbcfa6-073f-3e04-edf7-d04af905b10c';
    $pane = new stdClass();
    $pane->pid = 'new-d053dafb-5db7-58b4-adc1-3184ee145d0f';
    $pane->panel = 'left_below';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'address:postalcode',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'd053dafb-5db7-58b4-adc1-3184ee145d0f';
    $display->content['new-d053dafb-5db7-58b4-adc1-3184ee145d0f'] = $pane;
    $display->panels['left_below'][0] = 'new-d053dafb-5db7-58b4-adc1-3184ee145d0f';
    $pane = new stdClass();
    $pane->pid = 'new-643c8b20-6700-1f14-99c7-adb53baf63ce';
    $pane->panel = 'left_below';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'numbers:adults',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '643c8b20-6700-1f14-99c7-adb53baf63ce';
    $display->content['new-643c8b20-6700-1f14-99c7-adb53baf63ce'] = $pane;
    $display->panels['left_below'][1] = 'new-643c8b20-6700-1f14-99c7-adb53baf63ce';
    $pane = new stdClass();
    $pane->pid = 'new-826425dc-45d3-7a24-fd08-26c22556fde1';
    $pane->panel = 'middle';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'address:street',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '826425dc-45d3-7a24-fd08-26c22556fde1';
    $display->content['new-826425dc-45d3-7a24-fd08-26c22556fde1'] = $pane;
    $display->panels['middle'][0] = 'new-826425dc-45d3-7a24-fd08-26c22556fde1';
    $pane = new stdClass();
    $pane->pid = 'new-2d607448-0bdf-c504-996a-a1f5643519dd';
    $pane->panel = 'right_above';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'firstname',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '2d607448-0bdf-c504-996a-a1f5643519dd';
    $display->content['new-2d607448-0bdf-c504-996a-a1f5643519dd'] = $pane;
    $display->panels['right_above'][0] = 'new-2d607448-0bdf-c504-996a-a1f5643519dd';
    $pane = new stdClass();
    $pane->pid = 'new-9b3c7003-dd88-10c4-49ba-4786ffb9b7ea';
    $pane->panel = 'right_above';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'phone',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '9b3c7003-dd88-10c4-49ba-4786ffb9b7ea';
    $display->content['new-9b3c7003-dd88-10c4-49ba-4786ffb9b7ea'] = $pane;
    $display->panels['right_above'][1] = 'new-9b3c7003-dd88-10c4-49ba-4786ffb9b7ea';
    $pane = new stdClass();
    $pane->pid = 'new-502defbc-c6c6-5424-0183-56eb0d3a4308';
    $pane->panel = 'right_below';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'address:city',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '502defbc-c6c6-5424-0183-56eb0d3a4308';
    $display->content['new-502defbc-c6c6-5424-0183-56eb0d3a4308'] = $pane;
    $display->panels['right_below'][0] = 'new-502defbc-c6c6-5424-0183-56eb0d3a4308';
    $pane = new stdClass();
    $pane->pid = 'new-cb57debd-85db-cf04-8114-0b841263f03b';
    $pane->panel = 'right_below';
    $pane->type = 'generic_form_field';
    $pane->subtype = 'generic_form_field';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'field' => 'numbers:children',
      'custom_selector' => '',
      'hide_field_title' => 0,
      'context' => 'relationship_generic_form_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'cb57debd-85db-cf04-8114-0b841263f03b';
    $display->content['new-cb57debd-85db-cf04-8114-0b841263f03b'] = $pane;
    $display->panels['right_below'][1] = 'new-cb57debd-85db-cf04-8114-0b841263f03b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2d607448-0bdf-c504-996a-a1f5643519dd';
  $mini->display = $display;
  $export['hike_subscription_form'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'menu';
  $mini->category = 'wanderitis';
  $mini->admin_title = 'wanderitis  Menu';
  $mini->admin_description = 'Menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '535d6ed2-bf2f-e544-a9a3-c2aa1806430d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6d797ce9-2b89-ae74-85ce-03d2d3502bed';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = '6d797ce9-2b89-ae74-85ce-03d2d3502bed';
    $display->content['new-6d797ce9-2b89-ae74-85ce-03d2d3502bed'] = $pane;
    $display->panels['middle'][0] = 'new-6d797ce9-2b89-ae74-85ce-03d2d3502bed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6d797ce9-2b89-ae74-85ce-03d2d3502bed';
  $mini->display = $display;
  $export['menu'] = $mini;

  return $export;
}
