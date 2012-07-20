<?php

function ou_sparql_views_views_plugins() {
  module_load_include('inc','sparql_views','sparql_views.views');
  $endpoint_tables = sparql_views_get_endpoints();
  foreach ($endpoint_tables as $table) {
    $table_id = $table->table_id;
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
      'ou_sparql_views_plugin_argument_validate_user_field' => array(
        'title' => t('User Field Value'),
        'help' => t('Replace a variable in the query with a user\'s field value.'),
        'handler' => 'ou_sparql_views_plugin_argument_validate_user_field',
      ),
    ),
    'row' => array(
      'ou_sparql_views_plugin_style_rss' => array(
        'title' => t('SPARQL Views RSS'),
        'help' => t('Render SPARQL results as RSS'),
        'handler' => 'ou_sparql_views_plugin_style_rss',
        // we can't supply a base table as it relies on the hash of the endpoint...
        // or can we?
        'base' => $table_id,
      ),
    ),
  );
  
  return $plugins;
  
}
