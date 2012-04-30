<?php
/**
 * @file
 * wandermanitis_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function wandermanitis_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'menu';
  $mini->category = 'Wandermanitis';
  $mini->admin_title = 'Wandermanitis  Menu';
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
