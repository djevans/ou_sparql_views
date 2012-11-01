<?php

$view = new view;
$view->name = 'ou_sparql_person';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'sparql_views_2823727186';
$view->human_name = 'Person';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Person';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
$handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
$handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
$handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
$handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
/* Contextual filter: Person (OU Research Hub): URI */
$handler->display->display_options['arguments']['ou_person']['id'] = 'ou_person';
$handler->display->display_options['arguments']['ou_person']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['arguments']['ou_person']['field'] = 'ou_person';
$handler->display->display_options['arguments']['ou_person']['default_action'] = 'default';
$handler->display->display_options['arguments']['ou_person']['default_argument_type'] = 'sparql_views_argument_default_user_field';
$handler->display->display_options['arguments']['ou_person']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['ou_person']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['ou_person']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['ou_person']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['ou_person']['sparql_options'] = array(
  'value_type' => 'uri',
  'language' => '0',
  'code' => '',
);
/* Filter criterion: Person (OU Research Hub): RDF type */
$handler->display->display_options['filters']['ou_person_type']['id'] = 'ou_person_type';
$handler->display->display_options['filters']['ou_person_type']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['filters']['ou_person_type']['field'] = 'ou_person_type';
$handler->display->display_options['filters']['ou_person_type']['value'] = 'foaf:Person';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'person/%';

/* Display: Description */
$handler = $view->new_display('block', 'Description', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Personal Information';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '5';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Person (OU Research Hub): URI */
$handler->display->display_options['fields']['ou_person']['id'] = 'ou_person';
$handler->display->display_options['fields']['ou_person']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_person']['field'] = 'ou_person';
$handler->display->display_options['fields']['ou_person']['exclude'] = TRUE;
$handler->display->display_options['fields']['ou_person']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_person']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_person']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_person']['element_label_colon'] = 1;
$handler->display->display_options['fields']['ou_person']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_person']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_person']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_person']['hide_alter_empty'] = 1;
/* Field: Person (OU Research Hub): Description */
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['id'] = 'ou_person_field_ou_dcelements_description';
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['field'] = 'ou_person_field_ou_dcelements_description';
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['label'] = '';
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_person_field_ou_dcelements_description']['required'] = 0;

/* Display: Thumbnail */
$handler = $view->new_display('block', 'Thumbnail', 'block_1');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Person (OU Research Hub): URI */
$handler->display->display_options['fields']['ou_person']['id'] = 'ou_person';
$handler->display->display_options['fields']['ou_person']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_person']['field'] = 'ou_person';
$handler->display->display_options['fields']['ou_person']['exclude'] = TRUE;
$handler->display->display_options['fields']['ou_person']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_person']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_person']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_person']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_person']['element_label_colon'] = 1;
$handler->display->display_options['fields']['ou_person']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_person']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_person']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_person']['hide_alter_empty'] = 1;
/* Field: Person (OU Research Hub): Thumbnail */
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['id'] = 'ou_person_ou_foaf_thumbnail';
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['field'] = 'ou_person_ou_foaf_thumbnail';
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['label'] = '';
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['required'] = 0;
$handler->display->display_options['fields']['ou_person_ou_foaf_thumbnail']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => '',
);
