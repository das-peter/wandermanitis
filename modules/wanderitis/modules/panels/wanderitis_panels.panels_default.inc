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

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wanderitis_default_header';
  $mini->category = 'wanderitis';
  $mini->admin_title = 'wanderitis Default Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol';
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
    $pane->pid = 'new-a529b620-da05-5cd4-31bd-ef9ff1917ea7';
    $pane->panel = 'left';
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
    $pane->position = 1;
    $pane->uuid = 'a529b620-da05-5cd4-31bd-ef9ff1917ea7';
    $display->content['new-a529b620-da05-5cd4-31bd-ef9ff1917ea7'] = $pane;
    $display->panels['left'][1] = 'new-a529b620-da05-5cd4-31bd-ef9ff1917ea7';
    $pane = new stdClass();
    $pane->pid = 'new-d9061547-4366-de04-dd82-18087a313370';
    $pane->panel = 'right';
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
    $display->panels['right'][0] = 'new-d9061547-4366-de04-dd82-18087a313370';
    $pane = new stdClass();
    $pane->pid = 'new-d6cc153d-45dd-6f84-5d8e-f02c5edddbda';
    $pane->panel = 'right';
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
    $display->panels['right'][1] = 'new-d6cc153d-45dd-6f84-5d8e-f02c5edddbda';
    $pane = new stdClass();
    $pane->pid = 'new-8b9b6068-aae3-28f4-fd59-3969025423b8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'teaser-panel_teasers_home';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '8b9b6068-aae3-28f4-fd59-3969025423b8';
    $display->content['new-8b9b6068-aae3-28f4-fd59-3969025423b8'] = $pane;
    $display->panels['right'][2] = 'new-8b9b6068-aae3-28f4-fd59-3969025423b8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a529b620-da05-5cd4-31bd-ef9ff1917ea7';
  $mini->display = $display;
  $export['wanderitis_default_header'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'wanderitis_node_header';
  $mini->category = 'wanderitis';
  $mini->admin_title = 'wanderitis Node Header';
  $mini->admin_description = '';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Inhalt',
      'keyword' => 'node',
      'name' => 'entity:node',
      'id' => 1,
    ),
  );
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
    $pane->pid = 'new-fe342195-fb1d-c524-818e-cb0f80e40190';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'slideshow',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'slideshow_image_style' => 'header',
        'slideshow_link' => '',
        'slideshow_colorbox_image_style' => '',
        'slideshow_colorbox_slideshow' => '',
        'slideshow_colorbox_slideshow_speed' => '4000',
        'slideshow_colorbox_transition' => 'elastic',
        'slideshow_colorbox_speed' => '350',
        'slideshow_caption' => '',
        'slideshow_caption_link' => '',
        'slideshow_fx' => 'fade',
        'slideshow_speed' => '1000',
        'slideshow_timeout' => '4000',
        'slideshow_order' => '',
        'slideshow_controls' => 0,
        'slideshow_controls_position' => 'after',
        'slideshow_pause' => 0,
        'slideshow_pager' => '',
        'slideshow_pager_position' => 'after',
        'slideshow_pager_image_style' => '',
        'slideshow_carousel_image_style' => '',
        'slideshow_carousel_visible' => '3',
        'slideshow_carousel_scroll' => '1',
        'slideshow_carousel_speed' => '500',
        'slideshow_carousel_vertical' => 0,
        'slideshow_carousel_circular' => 0,
        'slideshow_carousel_follow' => 0,
      ),
      'context' => 'requiredcontext_entity:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = 'fe342195-fb1d-c524-818e-cb0f80e40190';
    $display->content['new-fe342195-fb1d-c524-818e-cb0f80e40190'] = $pane;
    $display->panels['middle'][2] = 'new-fe342195-fb1d-c524-818e-cb0f80e40190';
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
  $export['wanderitis_node_header'] = $mini;

  return $export;
}
