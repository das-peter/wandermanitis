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

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wandermanitis_default_header';
  $mini->category = 'Wandermanitis';
  $mini->admin_title = 'Wandermanitis Default Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'threecol_25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a4c4eda-9d8a-9744-6d3b-7f71120770be';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c349dbb9-b957-e5f4-c177-2d1ece63bd9f';
    $pane->panel = 'left';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'c349dbb9-b957-e5f4-c177-2d1ece63bd9f';
    $display->content['new-c349dbb9-b957-e5f4-c177-2d1ece63bd9f'] = $pane;
    $display->panels['left'][0] = 'new-c349dbb9-b957-e5f4-c177-2d1ece63bd9f';
    $pane = new stdClass();
    $pane->pid = 'new-d9061547-4366-de04-dd82-18087a313370';
    $pane->panel = 'middle';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'd9061547-4366-de04-dd82-18087a313370';
    $display->content['new-d9061547-4366-de04-dd82-18087a313370'] = $pane;
    $display->panels['middle'][0] = 'new-d9061547-4366-de04-dd82-18087a313370';
    $pane = new stdClass();
    $pane->pid = 'new-d6cc153d-45dd-6f84-5d8e-f02c5edddbda';
    $pane->panel = 'middle';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = 'd6cc153d-45dd-6f84-5d8e-f02c5edddbda';
    $display->content['new-d6cc153d-45dd-6f84-5d8e-f02c5edddbda'] = $pane;
    $display->panels['middle'][1] = 'new-d6cc153d-45dd-6f84-5d8e-f02c5edddbda';
    $pane = new stdClass();
    $pane->pid = 'new-a529b620-da05-5cd4-31bd-ef9ff1917ea7';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'admin_language-admin_language_switcher';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'a529b620-da05-5cd4-31bd-ef9ff1917ea7';
    $display->content['new-a529b620-da05-5cd4-31bd-ef9ff1917ea7'] = $pane;
    $display->panels['right'][0] = 'new-a529b620-da05-5cd4-31bd-ef9ff1917ea7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a529b620-da05-5cd4-31bd-ef9ff1917ea7';
  $mini->display = $display;
  $export['wandermanitis_default_header'] = $mini;

  return $export;
}
