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
  $display->layout = 'wandermanitis';
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
    $pane->subtype = 'wandermanitis_default_header';
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
  $display->layout = 'wandermanitis';
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
    $pane = new stdClass();
    $pane->pid = 'new-110b5e79-c0bd-9854-41fd-7ec562b5b3e7';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'wandermanitis_default_header';
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
    $pane->uuid = '110b5e79-c0bd-9854-41fd-7ec562b5b3e7';
    $display->content['new-110b5e79-c0bd-9854-41fd-7ec562b5b3e7'] = $pane;
    $display->panels['top'][0] = 'new-110b5e79-c0bd-9854-41fd-7ec562b5b3e7';
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
  $display->layout = 'wandermanitis';
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
  $display->title = 'Hikes';
  $display->uuid = '91cd964f-5bf9-e824-a574-3e1478f07a8f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-321df100-ddea-7e24-9982-186eda114dcc';
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
    $pane->uuid = '321df100-ddea-7e24-9982-186eda114dcc';
    $display->content['new-321df100-ddea-7e24-9982-186eda114dcc'] = $pane;
    $display->panels['left'][0] = 'new-321df100-ddea-7e24-9982-186eda114dcc';
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
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->uuid = 'f830ee8d-8e30-fc84-d959-737530d65a52';
    $display->content['new-f830ee8d-8e30-fc84-d959-737530d65a52'] = $pane;
    $display->panels['left'][1] = 'new-f830ee8d-8e30-fc84-d959-737530d65a52';
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
    $pane->position = 2;
    $pane->uuid = 'd0718569-dfae-1694-adbc-a9f2e8cebfe5';
    $display->content['new-d0718569-dfae-1694-adbc-a9f2e8cebfe5'] = $pane;
    $display->panels['left'][2] = 'new-d0718569-dfae-1694-adbc-a9f2e8cebfe5';
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
    $pane->position = 3;
    $pane->uuid = '1674ff7e-2241-8c44-bd66-beed7b124226';
    $display->content['new-1674ff7e-2241-8c44-bd66-beed7b124226'] = $pane;
    $display->panels['left'][3] = 'new-1674ff7e-2241-8c44-bd66-beed7b124226';
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
    $pane->position = 4;
    $pane->uuid = 'c63133c2-7395-cb74-9522-5f93ed6af464';
    $display->content['new-c63133c2-7395-cb74-9522-5f93ed6af464'] = $pane;
    $display->panels['left'][4] = 'new-c63133c2-7395-cb74-9522-5f93ed6af464';
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
    $pane->position = 5;
    $pane->uuid = '1995e44e-ec7a-fd94-4572-1131e889d035';
    $display->content['new-1995e44e-ec7a-fd94-4572-1131e889d035'] = $pane;
    $display->panels['left'][5] = 'new-1995e44e-ec7a-fd94-4572-1131e889d035';
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
    $pane->pid = 'new-0bbc64f2-5e72-aad4-4110-bebfdf97e9a7';
    $pane->panel = 'top';
    $pane->type = 'panels_mini';
    $pane->subtype = 'wandermanitis_default_header';
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
    $pane->uuid = '0bbc64f2-5e72-aad4-4110-bebfdf97e9a7';
    $display->content['new-0bbc64f2-5e72-aad4-4110-bebfdf97e9a7'] = $pane;
    $display->panels['top'][0] = 'new-0bbc64f2-5e72-aad4-4110-bebfdf97e9a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['hikes'] = $page;

  return $pages;

}
