<?php

class ou_sparql_views_argument_default_user_field extends views_plugin_argument_default_user {
  
  function get_argument() {
    
    $uid = parent::get_argument();
    $source_field = $this->options['sparql_options']['source_field'];
    $field = field_get_items('user', $uid, $source_field);
    $replacement = $field[0]['value'];
    return $replacement;
    
  }
  
  /**
   * Provide the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $fields = array();
    $instance_info = field_info_instances('user');
    foreach ($instance_info as $bundle) {
      foreach ($bundle as $field_name => $field_info) {
        $fields[$field_name] = check_plain(t($field_info['label']));
      }
    }
    $form['sparql_options']['source_field'] = array(
      '#type' => 'select',
      '#title' => t('Source Field'),
      '#options' => $fields,
      '#default_value' => $this->options['sparql_options']['source_field'],
      '#description' => t('The variable in the query will be replaced with the value of this field on the node.'),
      '#weight' => -1,
    );  
  }
  
}