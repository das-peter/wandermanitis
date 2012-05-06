<?php
/**
 * @file
 * wandermanitis_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wandermanitis_panels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wandermanitis_panels_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function wandermanitis_panels_default_search_api_index() {
  $items = array();
  $items['content'] = entity_import('search_api_index', '{
    "name" : "Content-Index",
    "machine_name" : "content",
    "description" : null,
    "server" : "localhost",
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "author" : { "type" : "integer", "entity_type" : "user" },
        "unified_fulltext" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "title_field" : { "type" : "text" },
        "field_max_participants" : { "type" : "integer" },
        "field_min_participants" : { "type" : "integer" },
        "field_equipment_rec" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_equipment_mand" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_shoe_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_audience" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_weather_conditions" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_mail" : { "type" : "text" },
        "field_hike_dates" : { "type" : "list\\u003Cdate\\u003E" },
        "search_api_language" : { "type" : "string" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_language_control" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "lang_field" : "",
            "languages" : {
              "und" : "und",
              "en-gb" : "en-gb",
              "fr" : "fr",
              "de" : "de",
              "it" : "it",
              "es" : "es"
            }
          }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "unified_fulltext" : true, "title_field" : true, "field_mail" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "unified_fulltext" : true, "title_field" : true, "field_mail" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "unified_fulltext" : true, "title_field" : true, "field_mail" : true },
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "unified_fulltext" : true, "title_field" : true, "field_mail" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function wandermanitis_panels_default_search_api_server() {
  $items = array();
  $items['localhost'] = entity_import('search_api_server', '{
    "name" : "localhost",
    "machine_name" : "localhost",
    "description" : "localhost",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "content" : {
          "type" : {
            "table" : "search_api_db_content_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_content_status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "unified_fulltext" : {
            "table" : "search_api_db_content_unified_fulltext",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_content_field_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "title_field" : {
            "table" : "search_api_db_content_title_field",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_max_participants" : {
            "table" : "search_api_db_content_field_max_participants",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_min_participants" : {
            "table" : "search_api_db_content_field_min_participants",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_equipment_rec" : {
            "table" : "search_api_db_content_field_equipment_rec",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_equipment_mand" : {
            "table" : "search_api_db_content_field_equipment_mand",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_shoe_type" : {
            "table" : "search_api_db_content_field_shoe_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_audience" : {
            "table" : "search_api_db_content_field_audience",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_weather_conditions" : {
            "table" : "search_api_db_content_field_weather_conditions",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_mail" : {
            "table" : "search_api_db_content_field_mail",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_hike_dates" : {
            "table" : "search_api_db_content_field_hike_dates",
            "type" : "list\\u003Cdate\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_content_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_content_author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_content_search_api_access_node",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
