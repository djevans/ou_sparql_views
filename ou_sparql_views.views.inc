<?php

function ou_sparql_views_views_plugins() {
  
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
  );
  
  return $plugins;
  
}
