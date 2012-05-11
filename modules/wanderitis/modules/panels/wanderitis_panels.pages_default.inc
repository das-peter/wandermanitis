<?php
/**
 * @file
 * wanderitis_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function wanderitis_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Default',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'wanderitis';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '00750f0a-299e-dd14-4d6f-10f0ed3279da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c19896c-0833-a534-5dfc-4328c4469d12';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'menu';
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
    $pane->uuid = '2c19896c-0833-a534-5dfc-4328c4469d12';
    $display->content['new-2c19896c-0833-a534-5dfc-4328c4469d12'] = $pane;
    $display->panels['left'][0] = 'new-2c19896c-0833-a534-5dfc-4328c4469d12';
    $pane = new stdClass();
    $pane->pid = 'new-dc559e98-23a4-9e04-1de4-8b007857f948';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'dc559e98-23a4-9e04-1de4-8b007857f948';
    $display->content['new-dc559e98-23a4-9e04-1de4-8b007857f948'] = $pane;
    $display->panels['middle'][0] = 'new-dc559e98-23a4-9e04-1de4-8b007857f948';
    $pane = new stdClass();
    $pane->pid = 'new-05d64f06-8e42-cd64-9db3-bfe49405d6ef';
    $pane->panel = 'top';
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
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '05d64f06-8e42-cd64-9db3-bfe49405d6ef';
    $display->content['new-05d64f06-8e42-cd64-9db3-bfe49405d6ef'] = $pane;
    $display->panels['top'][0] = 'new-05d64f06-8e42-cd64-9db3-bfe49405d6ef';
    $pane = new stdClass();
    $pane->pid = 'new-4389a713-8140-8564-75e1-64c84da161c4';
    $pane->panel = 'top_left';
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
    $pane->uuid = '4389a713-8140-8564-75e1-64c84da161c4';
    $display->content['new-4389a713-8140-8564-75e1-64c84da161c4'] = $pane;
    $display->panels['top_left'][0] = 'new-4389a713-8140-8564-75e1-64c84da161c4';
    $pane = new stdClass();
    $pane->pid = 'new-9a5d9e19-3654-cb14-c50f-5faad5ac745c';
    $pane->panel = 'top_left';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Language',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = '9a5d9e19-3654-cb14-c50f-5faad5ac745c';
    $display->content['new-9a5d9e19-3654-cb14-c50f-5faad5ac745c'] = $pane;
    $display->panels['top_left'][1] = 'new-9a5d9e19-3654-cb14-c50f-5faad5ac745c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-dc559e98-23a4-9e04-1de4-8b007857f948';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Hike',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => 'hike',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'hike' => 'hike',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'wanderitis';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '00750f0a-299e-dd14-4d6f-10f0ed3279da';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c19896c-0833-a534-5dfc-4328c4469d12';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'menu';
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
    $pane->uuid = '2c19896c-0833-a534-5dfc-4328c4469d12';
    $display->content['new-2c19896c-0833-a534-5dfc-4328c4469d12'] = $pane;
    $display->panels['left'][0] = 'new-2c19896c-0833-a534-5dfc-4328c4469d12';
    $pane = new stdClass();
    $pane->pid = 'new-94bdaee5-6d8f-9274-d9de-3d93c06d05fd';
    $pane->panel = 'middle';
    $pane->type = 'page_title';
    $pane->subtype = 'page_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'markup' => 'h1',
      'class' => '',
      'id' => '',
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
    $pane->uuid = '94bdaee5-6d8f-9274-d9de-3d93c06d05fd';
    $display->content['new-94bdaee5-6d8f-9274-d9de-3d93c06d05fd'] = $pane;
    $display->panels['middle'][0] = 'new-94bdaee5-6d8f-9274-d9de-3d93c06d05fd';
    $pane = new stdClass();
    $pane->pid = 'new-eda3f50d-23da-a694-a5cf-905fc45ce77a';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_hike_dates';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
        'show_repeat_rule' => 'show',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'eda3f50d-23da-a694-a5cf-905fc45ce77a';
    $display->content['new-eda3f50d-23da-a694-a5cf-905fc45ce77a'] = $pane;
    $display->panels['middle'][1] = 'new-eda3f50d-23da-a694-a5cf-905fc45ce77a';
    $pane = new stdClass();
    $pane->pid = 'new-731d2626-1cc2-a574-39f6-f5ccc6044eab';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '731d2626-1cc2-a574-39f6-f5ccc6044eab';
    $display->content['new-731d2626-1cc2-a574-39f6-f5ccc6044eab'] = $pane;
    $display->panels['middle'][2] = 'new-731d2626-1cc2-a574-39f6-f5ccc6044eab';
    $pane = new stdClass();
    $pane->pid = 'new-f70ef1ee-ed13-f9b4-01cc-675e8745d536';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_media';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'colorbox',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'colorbox_node_style' => 'thumbnail',
        'colorbox_image_style' => 'large',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = 'f70ef1ee-ed13-f9b4-01cc-675e8745d536';
    $display->content['new-f70ef1ee-ed13-f9b4-01cc-675e8745d536'] = $pane;
    $display->panels['middle'][3] = 'new-f70ef1ee-ed13-f9b4-01cc-675e8745d536';
    $pane = new stdClass();
    $pane->pid = 'new-5f4a0cf3-df76-ba84-0d7e-1fe91425c691';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mail';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'email_contact',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '5f4a0cf3-df76-ba84-0d7e-1fe91425c691';
    $display->content['new-5f4a0cf3-df76-ba84-0d7e-1fe91425c691'] = $pane;
    $display->panels['right'][0] = 'new-5f4a0cf3-df76-ba84-0d7e-1fe91425c691';
    $pane = new stdClass();
    $pane->pid = 'new-d9ea7f91-9b0c-b2f4-95f0-d3253f5db75c';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_audience';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = 'd9ea7f91-9b0c-b2f4-95f0-d3253f5db75c';
    $display->content['new-d9ea7f91-9b0c-b2f4-95f0-d3253f5db75c'] = $pane;
    $display->panels['right'][1] = 'new-d9ea7f91-9b0c-b2f4-95f0-d3253f5db75c';
    $pane = new stdClass();
    $pane->pid = 'new-b081912c-0326-c2b4-e9a8-fbf480a12282';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_equipment_mand';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = 'b081912c-0326-c2b4-e9a8-fbf480a12282';
    $display->content['new-b081912c-0326-c2b4-e9a8-fbf480a12282'] = $pane;
    $display->panels['right'][2] = 'new-b081912c-0326-c2b4-e9a8-fbf480a12282';
    $pane = new stdClass();
    $pane->pid = 'new-53843f1e-93ea-3b24-0559-c68c92df0fff';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_shoe_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = '53843f1e-93ea-3b24-0559-c68c92df0fff';
    $display->content['new-53843f1e-93ea-3b24-0559-c68c92df0fff'] = $pane;
    $display->panels['right'][3] = 'new-53843f1e-93ea-3b24-0559-c68c92df0fff';
    $pane = new stdClass();
    $pane->pid = 'new-5b973f3d-2fc3-31b4-556f-7617116be436';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_min_participants';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = '5b973f3d-2fc3-31b4-556f-7617116be436';
    $display->content['new-5b973f3d-2fc3-31b4-556f-7617116be436'] = $pane;
    $display->panels['right'][4] = 'new-5b973f3d-2fc3-31b4-556f-7617116be436';
    $pane = new stdClass();
    $pane->pid = 'new-16c0637d-3bfe-4504-1943-0e98ffcf1ea2';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_max_participants';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'number_integer',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->uuid = '16c0637d-3bfe-4504-1943-0e98ffcf1ea2';
    $display->content['new-16c0637d-3bfe-4504-1943-0e98ffcf1ea2'] = $pane;
    $display->panels['right'][5] = 'new-16c0637d-3bfe-4504-1943-0e98ffcf1ea2';
    $pane = new stdClass();
    $pane->pid = 'new-27c68b5a-603d-6a84-5956-3307d1c746c0';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_weather_conditions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->uuid = '27c68b5a-603d-6a84-5956-3307d1c746c0';
    $display->content['new-27c68b5a-603d-6a84-5956-3307d1c746c0'] = $pane;
    $display->panels['right'][6] = 'new-27c68b5a-603d-6a84-5956-3307d1c746c0';
    $pane = new stdClass();
    $pane->pid = 'new-6f662dfd-d6ea-6844-7de7-62db20eb49c9';
    $pane->panel = 'top';
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
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '6f662dfd-d6ea-6844-7de7-62db20eb49c9';
    $display->content['new-6f662dfd-d6ea-6844-7de7-62db20eb49c9'] = $pane;
    $display->panels['top'][0] = 'new-6f662dfd-d6ea-6844-7de7-62db20eb49c9';
    $pane = new stdClass();
    $pane->pid = 'new-1ab4c4ca-bab4-4b34-e129-308569acb2d5';
    $pane->panel = 'top_left';
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
    $pane->uuid = '1ab4c4ca-bab4-4b34-e129-308569acb2d5';
    $display->content['new-1ab4c4ca-bab4-4b34-e129-308569acb2d5'] = $pane;
    $display->panels['top_left'][0] = 'new-1ab4c4ca-bab4-4b34-e129-308569acb2d5';
    $pane = new stdClass();
    $pane->pid = 'new-d8a4b600-ac84-dff4-c164-9f2bc2fbf9f9';
    $pane->panel = 'top_left';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Language',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'd8a4b600-ac84-dff4-c164-9f2bc2fbf9f9';
    $display->content['new-d8a4b600-ac84-dff4-c164-9f2bc2fbf9f9'] = $pane;
    $display->panels['top_left'][1] = 'new-d8a4b600-ac84-dff4-c164-9f2bc2fbf9f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function wanderitis_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'blog';
  $page->task = 'page';
  $page->admin_title = 'Blog';
  $page->admin_description = '';
  $page->path = 'blog';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Blog',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_blog_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'blog';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Blog',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => 'blog',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'wanderitis';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Blog';
  $display->uuid = '56830f4d-c22e-c4c4-4df5-4d0cc03777e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4674d30e-49c6-b694-0160-891591f83b21';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'menu';
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
    $pane->uuid = '4674d30e-49c6-b694-0160-891591f83b21';
    $display->content['new-4674d30e-49c6-b694-0160-891591f83b21'] = $pane;
    $display->panels['left'][0] = 'new-4674d30e-49c6-b694-0160-891591f83b21';
    $pane = new stdClass();
    $pane->pid = 'new-388e9be3-92cb-4274-89d6-87ebfdc7032f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_articles-panel_pane_2';
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
    $pane->uuid = '388e9be3-92cb-4274-89d6-87ebfdc7032f';
    $display->content['new-388e9be3-92cb-4274-89d6-87ebfdc7032f'] = $pane;
    $display->panels['middle'][0] = 'new-388e9be3-92cb-4274-89d6-87ebfdc7032f';
    $pane = new stdClass();
    $pane->pid = 'new-7ceb8a65-a6f2-f074-c1bc-b7fb6c05cbe4';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'wanderitis_default_header';
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
    $pane->uuid = '7ceb8a65-a6f2-f074-c1bc-b7fb6c05cbe4';
    $display->content['new-7ceb8a65-a6f2-f074-c1bc-b7fb6c05cbe4'] = $pane;
    $display->panels['top'][0] = 'new-7ceb8a65-a6f2-f074-c1bc-b7fb6c05cbe4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-388e9be3-92cb-4274-89d6-87ebfdc7032f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = 'Frontpage';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Frontpage',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => 'frontpage',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'wanderitis';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'wanderitis';
  $display->uuid = 'b6abead3-8226-ea64-2d0c-4e6473e32300';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a0b647e-1d28-4fe4-d96a-06d69e1ba91a';
    $pane->panel = 'left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'menu';
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
    $pane->uuid = '4a0b647e-1d28-4fe4-d96a-06d69e1ba91a';
    $display->content['new-4a0b647e-1d28-4fe4-d96a-06d69e1ba91a'] = $pane;
    $display->panels['left'][0] = 'new-4a0b647e-1d28-4fe4-d96a-06d69e1ba91a';
    $pane = new stdClass();
    $pane->pid = 'new-acb7969b-a37b-5254-91e6-fa5ed8d46ab6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'front_page_content-panel_pane_1';
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
    $pane->uuid = 'acb7969b-a37b-5254-91e6-fa5ed8d46ab6';
    $display->content['new-acb7969b-a37b-5254-91e6-fa5ed8d46ab6'] = $pane;
    $display->panels['middle'][0] = 'new-acb7969b-a37b-5254-91e6-fa5ed8d46ab6';
    $pane = new stdClass();
    $pane->pid = 'new-a633e6d9-5fd2-0274-e1f5-5f744f70e66d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'latest_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'a633e6d9-5fd2-0274-e1f5-5f744f70e66d';
    $display->content['new-a633e6d9-5fd2-0274-e1f5-5f744f70e66d'] = $pane;
    $display->panels['middle'][1] = 'new-a633e6d9-5fd2-0274-e1f5-5f744f70e66d';
    $pane = new stdClass();
    $pane->pid = 'new-dbdec5bb-d3eb-1934-1132-913e236fe82d';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'next_hikes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Next Hikes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'dbdec5bb-d3eb-1934-1132-913e236fe82d';
    $display->content['new-dbdec5bb-d3eb-1934-1132-913e236fe82d'] = $pane;
    $display->panels['right'][0] = 'new-dbdec5bb-d3eb-1934-1132-913e236fe82d';
    $pane = new stdClass();
    $pane->pid = 'new-f55479be-f2b4-9284-45d5-1310dca6fc9b';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'teaser-panel_teasers_home';
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
    $pane->uuid = 'f55479be-f2b4-9284-45d5-1310dca6fc9b';
    $display->content['new-f55479be-f2b4-9284-45d5-1310dca6fc9b'] = $pane;
    $display->panels['top'][0] = 'new-f55479be-f2b4-9284-45d5-1310dca6fc9b';
    $pane = new stdClass();
    $pane->pid = 'new-bb1271bc-fb45-e9f4-5930-72f46a4a380d';
    $pane->panel = 'top_left';
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
    $pane->uuid = 'bb1271bc-fb45-e9f4-5930-72f46a4a380d';
    $display->content['new-bb1271bc-fb45-e9f4-5930-72f46a4a380d'] = $pane;
    $display->panels['top_left'][0] = 'new-bb1271bc-fb45-e9f4-5930-72f46a4a380d';
    $pane = new stdClass();
    $pane->pid = 'new-d236eff6-862a-f954-d581-8cd693823119';
    $pane->panel = 'top_left';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Language',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'd236eff6-862a-f954-d581-8cd693823119';
    $display->content['new-d236eff6-862a-f954-d581-8cd693823119'] = $pane;
    $display->panels['top_left'][1] = 'new-d236eff6-862a-f954-d581-8cd693823119';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'hikes';
  $page->task = 'page';
  $page->admin_title = 'hikes';
  $page->admin_description = '';
  $page->path = 'hikes';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_hikes_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'hikes';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Hikes',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => 'hikes',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'View: Hikes: Context',
        'keyword' => 'view',
        'name' => 'view:hikes-ctools_context_hikes',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'wanderitis';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Hikes';
  $display->uuid = '91cd964f-5bf9-e824-a574-3e1478f07a8f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f830ee8d-8e30-fc84-d959-737530d65a52';
    $pane->panel = 'left';
    $pane->type = 'views_exposed';
    $pane->subtype = 'views_exposed';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:hikes-ctools_context_hikes_1',
      'override_title' => 1,
      'override_title_text' => 'Filter Hikes',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->uuid = 'f830ee8d-8e30-fc84-d959-737530d65a52';
    $display->content['new-f830ee8d-8e30-fc84-d959-737530d65a52'] = $pane;
    $display->panels['left'][0] = 'new-f830ee8d-8e30-fc84-d959-737530d65a52';
    $pane = new stdClass();
    $pane->pid = 'new-d0718569-dfae-1694-adbc-a9f2e8cebfe5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-sWTeyENwhxiV20uMoUqxoSBLnD4t8ikv';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Audience',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'd0718569-dfae-1694-adbc-a9f2e8cebfe5';
    $display->content['new-d0718569-dfae-1694-adbc-a9f2e8cebfe5'] = $pane;
    $display->panels['left'][1] = 'new-d0718569-dfae-1694-adbc-a9f2e8cebfe5';
    $pane = new stdClass();
    $pane->pid = 'new-1674ff7e-2241-8c44-bd66-beed7b124226';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-jTx2F7oHEAP9W1E154BchpwJ2dubKbpb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Mandatory Equipment',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->uuid = '1674ff7e-2241-8c44-bd66-beed7b124226';
    $display->content['new-1674ff7e-2241-8c44-bd66-beed7b124226'] = $pane;
    $display->panels['left'][2] = 'new-1674ff7e-2241-8c44-bd66-beed7b124226';
    $pane = new stdClass();
    $pane->pid = 'new-c63133c2-7395-cb74-9522-5f93ed6af464';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ivAIEgnh9bFS4HkcWNH0s6zL8Ph1L0mK';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Mandatory Shoe Type',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->uuid = 'c63133c2-7395-cb74-9522-5f93ed6af464';
    $display->content['new-c63133c2-7395-cb74-9522-5f93ed6af464'] = $pane;
    $display->panels['left'][3] = 'new-c63133c2-7395-cb74-9522-5f93ed6af464';
    $pane = new stdClass();
    $pane->pid = 'new-1995e44e-ec7a-fd94-4572-1131e889d035';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-oGEyc3d1Tfx0d83o5BEGVUyQnPkueYL9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Weather Conditions',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->uuid = '1995e44e-ec7a-fd94-4572-1131e889d035';
    $display->content['new-1995e44e-ec7a-fd94-4572-1131e889d035'] = $pane;
    $display->panels['left'][4] = 'new-1995e44e-ec7a-fd94-4572-1131e889d035';
    $pane = new stdClass();
    $pane->pid = 'new-d332a0a1-8895-62b4-09d1-945cda627e82';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:hikes-ctools_context_hikes_1',
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
    $pane->uuid = 'd332a0a1-8895-62b4-09d1-945cda627e82';
    $display->content['new-d332a0a1-8895-62b4-09d1-945cda627e82'] = $pane;
    $display->panels['middle'][0] = 'new-d332a0a1-8895-62b4-09d1-945cda627e82';
    $pane = new stdClass();
    $pane->pid = 'new-b5ce79de-eaf6-92a4-0561-d082206cd7f1';
    $pane->panel = 'middle';
    $pane->type = 'views_row';
    $pane->subtype = 'views_row';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'rows' => array(),
      'use_fields' => 0,
      'fields' => array(),
      'context' => 'context_view:hikes-ctools_context_hikes_1',
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
    $pane->uuid = 'b5ce79de-eaf6-92a4-0561-d082206cd7f1';
    $display->content['new-b5ce79de-eaf6-92a4-0561-d082206cd7f1'] = $pane;
    $display->panels['middle'][1] = 'new-b5ce79de-eaf6-92a4-0561-d082206cd7f1';
    $pane = new stdClass();
    $pane->pid = 'new-aca9d1b1-ce7b-2f84-69c2-5e87c026f5fd';
    $pane->panel = 'middle';
    $pane->type = 'views_pager';
    $pane->subtype = 'views_pager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'context_view:hikes-ctools_context_hikes_1',
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
    $pane->uuid = 'aca9d1b1-ce7b-2f84-69c2-5e87c026f5fd';
    $display->content['new-aca9d1b1-ce7b-2f84-69c2-5e87c026f5fd'] = $pane;
    $display->panels['middle'][2] = 'new-aca9d1b1-ce7b-2f84-69c2-5e87c026f5fd';
    $pane = new stdClass();
    $pane->pid = 'new-d3118412-5fc7-7214-9da7-c474ac2400a4';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'teaser-panel_teasers_home';
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
    $pane->uuid = 'd3118412-5fc7-7214-9da7-c474ac2400a4';
    $display->content['new-d3118412-5fc7-7214-9da7-c474ac2400a4'] = $pane;
    $display->panels['top'][0] = 'new-d3118412-5fc7-7214-9da7-c474ac2400a4';
    $pane = new stdClass();
    $pane->pid = 'new-12bbe195-92c0-c7a4-01a5-49c5dec19d8d';
    $pane->panel = 'top_left';
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
    $pane->uuid = '12bbe195-92c0-c7a4-01a5-49c5dec19d8d';
    $display->content['new-12bbe195-92c0-c7a4-01a5-49c5dec19d8d'] = $pane;
    $display->panels['top_left'][0] = 'new-12bbe195-92c0-c7a4-01a5-49c5dec19d8d';
    $pane = new stdClass();
    $pane->pid = 'new-a2fbb51f-f07d-6874-bd2b-33e786c86313';
    $pane->panel = 'top_left';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Language',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'a2fbb51f-f07d-6874-bd2b-33e786c86313';
    $display->content['new-a2fbb51f-f07d-6874-bd2b-33e786c86313'] = $pane;
    $display->panels['top_left'][1] = 'new-a2fbb51f-f07d-6874-bd2b-33e786c86313';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hikes'] = $page;

  return $pages;

}
