<?php
/**
 * @file
 * wandermanitis_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wandermanitis_panels_default_page_manager_pages() {
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
  $display->layout = 'threecol_25_50_25_stacked';
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
  $display->layout = 'threecol_25_50_25_stacked';
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
  $display->title = 'Wandermanitis';
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
    $pane->configuration = array();
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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
