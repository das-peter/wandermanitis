<?php
/**
 * @file
 * wanderitis_config.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function wanderitis_config_default_rules_configuration() {
  $items = array();
  $items['rules_hike_subscription_confirmation'] = entity_import('rules_config', '{ "rules_hike_subscription_confirmation" : {
      "LABEL" : "Hike subscription confirmation",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "remarks" : { "label" : "remarks", "type" : "text" },
        "hike" : { "label" : "Hike", "type" : "node" },
        "lastname" : { "label" : "lastname", "type" : "text" },
        "firstname" : { "label" : "firstname", "type" : "text" },
        "phone" : { "label" : "phone", "type" : "text" },
        "mail" : { "label" : "mail", "type" : "text" },
        "street" : { "label" : "street", "type" : "text" },
        "postalcode" : { "label" : "postalcode", "type" : "text" },
        "city" : { "label" : "city", "type" : "text" },
        "adults" : { "label" : "adults", "type" : "integer" },
        "children" : { "label" : "children", "type" : "integer" },
        "holiday_location" : { "label" : "holiday location", "type" : "text" },
        "date_of_hike" : { "label" : "date of hike", "type" : "text" }
      },
      "DO" : [
        { "mimemail" : {
            "to" : "[mail:value]",
            "from_name" : "wanderitis.ch",
            "from_mail" : "info@wanderitis.ch",
            "subject" : "wanderitis subscription confirmation for [hike:title-field] [[date-of-hike:value]]",
            "body" : "Thank you very much for subscribing for the hike \\u003Ca href=\\u0022[hike:url]\\u0022\\u003E[hike:title-field]\\u003C\\/a\\u003E\\r\\n\\r\\nThis are the data we received from you:\\r\\n\\r\\nDate of hike: [date-of-hike:value]\\r\\n\\r\\nLastname: [lastname:value]\\r\\nFirstname: [firstname:value]\\r\\nPhone: [phone:value]\\r\\nMail: [mail:value]\\r\\nStreet: [street:value]\\r\\nCity:  [postalcode:value] [city:value]\\r\\n\\r\\nParticipants:\\r\\nAdults: [adults:value]\\r\\nChildren: [children:value]\\r\\n\\r\\n\\u003Cstrong\\u003EHoliday location: \\u003C\\/strong\\u003E\\r\\n[holiday-location:value]\\r\\n\\r\\n\\u003Cstrong\\u003ERemarks:\\u003C\\/strong\\u003E\\r\\n[remarks:value]\\r\\n\\r\\nWe\\u0027ll contact you as soon as possible.\\r\\n\\r\\nBest regards\\r\\nwanderitis.ch",
            "plaintext" : "Thank you very much for subscribing for the hike [hike:title-field] ([hike:url])\\r\\n\\r\\nThis are the data we received from you:\\r\\n\\r\\nDate of hike: [date-of-hike:value]\\r\\n\\r\\nLastname: [lastname:value]\\r\\nFirstname: [firstname:value]\\r\\nPhone: [phone:value]\\r\\nMail: [mail:value]\\r\\nStreet: [street:value]\\r\\nCity:  [postalcode:value] [city:value]\\r\\n\\r\\nParticipants:\\r\\nAdults: [adults:value]\\r\\nChildren: [children:value]\\r\\n\\r\\nHoliday location:\\r\\n[holiday-location:value]\\r\\n\\r\\nRemarks:\\r\\n[remarks:value]\\r\\n\\r\\nWe\\u0027ll contact you as soon as possible.\\r\\n\\r\\nBest regards\\r\\nwanderitis.ch"
          }
        }
      ]
    }
  }');
  $items['rules_hike_subscription_notification'] = entity_import('rules_config', '{ "rules_hike_subscription_notification" : {
      "LABEL" : "Hike subscription notification",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "hike" : { "label" : "Hike", "type" : "node" },
        "lastname" : { "label" : "lastname", "type" : "text" },
        "firstname" : { "label" : "firstname", "type" : "text" },
        "phone" : { "label" : "phone", "type" : "text" },
        "mail" : { "label" : "mail", "type" : "text" },
        "street" : { "label" : "street", "type" : "text" },
        "postalcode" : { "label" : "postalcode", "type" : "text" },
        "city" : { "label" : "city", "type" : "text" },
        "adults" : { "label" : "adults", "type" : "integer" },
        "children" : { "label" : "children", "type" : "integer" },
        "holiday_location" : { "label" : "holiday location", "type" : "text" },
        "remarks" : { "label" : "remarks", "type" : "text" },
        "date_of_hike" : { "label" : "date of hike", "type" : "text" }
      },
      "DO" : [
        { "mimemail" : {
            "to" : "info@wanderitis.ch",
            "from_name" : "[lastname:value] [firstname:value]",
            "from_mail" : "info@wanderitis.ch",
            "subject" : "[hike:nid] :New Subscription [hike:title-field] [[date-of-hike:value]]",
            "body" : "You got a new subscription for the hike \\u003Ca href=\\u0022[hike:url]\\u0022\\u003E[hike:title-field]\\u003C\\/a\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003EData:\\u003C\\/strong\\u003E\\r\\nLastname: [lastname:value]\\r\\nFirstname: [firstname:value]\\r\\nPhone: [phone:value]\\r\\nMail: [mail:value]\\r\\nStreet: [street:value]\\r\\nCity:  [postalcode:value] [city:value]\\r\\n\\r\\nDate of hike: [date-of-hike:value]\\r\\nAdults: [adults:value]\\r\\nChildren: [children:value]\\r\\n\\r\\n\\u003Cstrong\\u003EHoliday location: \\u003C\\/strong\\u003E\\r\\n[holiday-location:value]\\r\\n\\r\\n\\u003Cstrong\\u003ERemarks:\\u003C\\/strong\\u003E\\r\\n[remarks:value]",
            "plaintext" : "You got a new subscription for the hike [hike:title-field]\\r\\n[hike:url]\\r\\n\\r\\nData:\\r\\nLastname: [lastname:value]\\r\\nFirstname: [firstname:value]\\r\\nPhone: [phone:value]\\r\\nMail: [mail:value]\\r\\nStreet: [street:value]\\r\\nCity:  [postalcode:value] [city:value]\\r\\n\\r\\nDate of hike: [date-of-hike:value]\\r\\nAdults: [adults:value]\\r\\nChildren: [children:value]\\r\\n\\r\\nHoliday location:\\r\\n[holiday-location:value]\\r\\n\\r\\nRemarks:\\r\\n[remarks:value]"
          }
        }
      ]
    }
  }');
  $items['rules_new_hike_subscription'] = entity_import('rules_config', '{ "rules_new_hike_subscription" : {
      "LABEL" : "New hike subscription",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "wanderitis" ],
      "ON" : [ "wanderitis_hike_subscription" ],
      "DO" : [
        { "component_rules_hike_subscription_confirmation" : {
            "remarks" : [ "remarks" ],
            "hike" : [ "hike" ],
            "lastname" : [ "name" ],
            "firstname" : [ "firstname" ],
            "phone" : [ "phone" ],
            "mail" : [ "email" ],
            "street" : [ "street" ],
            "postalcode" : [ "zip" ],
            "city" : [ "city" ],
            "adults" : [ "adults" ],
            "children" : [ "children" ],
            "holiday_location" : [ "holiday_location" ],
            "date_of_hike" : [ "date_of_hike" ]
          }
        },
        { "component_rules_hike_subscription_notification" : {
            "hike" : [ "hike" ],
            "lastname" : [ "name" ],
            "firstname" : [ "firstname" ],
            "phone" : [ "phone" ],
            "mail" : [ "email" ],
            "street" : [ "street" ],
            "postalcode" : [ "zip" ],
            "city" : [ "city" ],
            "adults" : [ "adults" ],
            "children" : [ "children" ],
            "holiday_location" : [ "holiday_location" ],
            "remarks" : [ "remarks" ],
            "date_of_hike" : [ "date_of_hike" ]
          }
        }
      ]
    }
  }');
  return $items;
}
