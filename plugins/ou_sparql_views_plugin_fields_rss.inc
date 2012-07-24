<?php

class ou_sparql_views_plugin_fields_rss extends views_plugin_row {
  
  function summary_title() {
    return t('Test Views Row Plugin');
  }
  
  function option_definition() {
    $options = parent::option_definition();
    $options['fields'] = array('default' => array());
    $options['separator'] = array('default' => '');
    $options['hide_empty'] = array('default' => FALSE);
   
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $rss_elements = array(
        '' => t('< None >'),
        // one of the following two must be present
        'title' => t('Title'),
        'description' => t('Description'),
        // this isn't mandatory but it makes sense to have it
        'link' => t('Link'),
        // more optional elements
        'author' => t('Author'),
        'comments' => t('Comments'),
        'enclosure' => t('Enclosure'),
        'guid' => t('GUID'),
        'pubDate' => t('Publication Date'),
        'source' => t('Source'),
    );
    $fields = $this->display->handler->get_field_labels();

    // list all the selected fields (as labels), along with the elements (as <options>)
    $form['fields'] = array(
        '#title' => t('Field Settings'),
        '#type' => 'fieldset',
    );
    foreach ($fields as $field_id => $field_ui_name) {
      $form['fields'][$field_id] = array(
          '#title' => $field_ui_name,
          '#type' => 'select',
          '#options' => $rss_elements,
          '#default_value' => isset($this->options['fields'][$field_id])?
              $this->options['fields'][$field_id]: '',
      );
    }
    // separator
    $form['separator'] = array(
      '#title' => t('Separator'),
      '#type' => 'textfield',
      '#size' => 5,
      '#description' => t('If more than one field is assigned to an element, 
        enter the text with which to separate them'),
      '#default_value' => isset($this->options['separator']) ? 
              $this->options['separator'] : '',
    );
    $form['hide_empty'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hide empty fields'),
      '#default_value' => $this->options['hide_empty'],
      '#description' => t('Do not output elements for fields that are empty.'),
    );
  }
  
  function options_validate(&$form, &$form_state) {
    // check that at least one value has been set to 'title' or 'description'
    $valid = FALSE;
    foreach($form_state['values']['row_options']['fields'] as $field_option) {
      watchdog('test','Field Option: %f',array('%f' => $field_option));
      if ($field_option == 'title' || $field_option == 'description') {
        $valid = TRUE;
        break;
      }
    }
    if (!$valid) {
     form_error($form['fields'],t('At least one element must display either 
       the "Title" or "Description" element to be considered valid RSS.'));
    }
  }
  
  function options_submit(&$form, &$form_state) {
    // Remove empty field options.
    $form_state['values']['fields'] = array_filter($form_state['values']['fields']);
  }
  
  function pre_render(&$result) {
    foreach($result as $row) {
      foreach ($row as $original_key => $value) {
        if (!isset($this->options['fields'][$original_key])) {
          continue;
        }
        $element_name = $this->options['fields'][$original_key];
        switch($element_name) {
          case 'title':
          case 'link':
          case 'description':
            $row->$element_name = $value;
            break;
          default:
            $row->elements[$element_name] = $value;
            break;
        }      
      }
    }
  }

}
