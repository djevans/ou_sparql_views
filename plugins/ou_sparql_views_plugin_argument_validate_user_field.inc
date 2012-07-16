<?php
  
class ou_sparql_views_plugin_argument_validate_user_field extends views_plugin_argument_validate_user {

  function validate_argument($argument) {
    if (parent::validate_argument($argument)) {
      $uid = $this->argument->argument;
      $account = user_load($uid);
      $source_field = $this->argument->options['default_argument_options']['sparql_options']['source_field'];
      $field = field_get_items('user', $account, $source_field);
      watchdog('ou_sparql_views','Value: %v',array('%v' => print_r($field,TRUE)));
      $value = $field[0]['value'];
      if (!empty($value)) {
        $this->argument->argument = $value;
        return TRUE;
      }
    }
    return FALSE;
  }
  
}
