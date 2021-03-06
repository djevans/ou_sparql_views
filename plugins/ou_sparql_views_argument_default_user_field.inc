<?php

class ou_sparql_views_argument_default_user_field extends views_plugin_argument_default_user {
	
	function options_form(&$form, &$form_state) {
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