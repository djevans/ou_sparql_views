<?php

function ou_sparql_views_views_plugins() {

  module_load_include('inc','sparql_views','sparql_views.views');
  $base_tables = array();
  $endpoints = sparql_views_get_endpoints();
  foreach($endpoints as $endpoint) {
    $base_tables[] = $endpoint->table_id;
  }
  
  $plugins = array(
    'argument default' => array(
      'ou_sparql_views_argument_default_user_field' => array(
        'title' => t('User Field Value'),
        'help' => t('Replace a variable in the query with a user\'s field value.'),
        'handler' => 'ou_sparql_views_argument_default_user_field',
      ),
    ),
    'argument validator' => array(
      'ou_sparql_views_argument_validate_user_field' => array(
        'title' => t('User Field Value'),
        'help' => t('Replace a variable in the query with a user\'s field value.'),
        'handler' => 'ou_sparql_views_argument_validate_user_field',
      ),
    ),
    'row' => array(
      'ou_sparql_views_plugin_fields_rss' => array(
        'title' => t('Fields RSS Row Plugin'),
        'help' => t('A row plugin to display SPARQL Views as RSS'),
        'handler' => 'ou_sparql_views_plugin_fields_rss',
        'theme' => 'views_view_row_rss',
        'type' => 'feed',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'help topic' => 'style-node-rss',
        'base' => $base_tables,
      ),
    ),  
  );
  return $plugins;

}



