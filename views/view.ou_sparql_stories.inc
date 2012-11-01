<?php

$view = new view;
$view->name = 'ou_sparql_stories';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'sparql_views_2823727186';
$view->human_name = 'Stories';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Stories';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = FALSE;
$handler->display->display_options['empty']['area']['content'] = 'No stories found.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['empty']['area']['tokenize'] = 0;
/* Field: Post (OU Research Hub): Link */
$handler->display->display_options['fields']['ou_post_ou_rss_link']['id'] = 'ou_post_ou_rss_link';
$handler->display->display_options['fields']['ou_post_ou_rss_link']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_post_ou_rss_link']['field'] = 'ou_post_ou_rss_link';
$handler->display->display_options['fields']['ou_post_ou_rss_link']['label'] = '';
$handler->display->display_options['fields']['ou_post_ou_rss_link']['exclude'] = TRUE;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_post_ou_rss_link']['required'] = 1;
/* Field: Post (OU Research Hub): Title */
$handler->display->display_options['fields']['ou_post_ou_dc_title']['id'] = 'ou_post_ou_dc_title';
$handler->display->display_options['fields']['ou_post_ou_dc_title']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_post_ou_dc_title']['field'] = 'ou_post_ou_dc_title';
$handler->display->display_options['fields']['ou_post_ou_dc_title']['label'] = '';
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['make_link'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['path'] = '[ou_post_ou_rss_link]';
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['absolute'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_title']['required'] = 1;
/* Field: Post (OU Research Hub): Date */
$handler->display->display_options['fields']['ou_post_ou_dc_date']['id'] = 'ou_post_ou_dc_date';
$handler->display->display_options['fields']['ou_post_ou_dc_date']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_post_ou_dc_date']['field'] = 'ou_post_ou_dc_date';
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['element_label_colon'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_date']['required'] = 1;
/* Field: Post (OU Research Hub): Description */
$handler->display->display_options['fields']['ou_post_ou_dc_description']['id'] = 'ou_post_ou_dc_description';
$handler->display->display_options['fields']['ou_post_ou_dc_description']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['fields']['ou_post_ou_dc_description']['field'] = 'ou_post_ou_dc_description';
$handler->display->display_options['fields']['ou_post_ou_dc_description']['label'] = '';
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['alter_text'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['make_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['absolute'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['external'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['replace_spaces'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['trim_whitespace'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['nl2br'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['word_boundary'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['ellipsis'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['more_link'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['strip_tags'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['trim'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['alter']['html'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['element_default_classes'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['hide_empty'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['empty_zero'] = 0;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['hide_alter_empty'] = 1;
$handler->display->display_options['fields']['ou_post_ou_dc_description']['required'] = 1;
/* Sort criterion: Post (OU Research Hub): Date */
$handler->display->display_options['sorts']['ou_post_ou_dc_date']['id'] = 'ou_post_ou_dc_date';
$handler->display->display_options['sorts']['ou_post_ou_dc_date']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['sorts']['ou_post_ou_dc_date']['field'] = 'ou_post_ou_dc_date';
$handler->display->display_options['sorts']['ou_post_ou_dc_date']['order'] = 'DESC';
/* Contextual filter: Post (OU Research Hub): Creator */
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['id'] = 'ou_post_ou_dc_creator';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['field'] = 'ou_post_ou_dc_creator';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_action'] = 'default';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_argument_type'] = 'ou_sparql_views_argument_default_user_field';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['specify_validation'] = 1;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['sparql_options'] = array(
  'value_type' => 'uri',
  'language' => '0',
  'code' => '',
);
/* Filter criterion: Post (OU Research Hub): RDF type */
$handler->display->display_options['filters']['ou_post_type']['id'] = 'ou_post_type';
$handler->display->display_options['filters']['ou_post_type']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['filters']['ou_post_type']['field'] = 'ou_post_type';
$handler->display->display_options['filters']['ou_post_type']['value'] = 'sioc:Post';

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'stories/%';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'My Stories';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '3';
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Post (OU Research Hub): Creator */
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['id'] = 'ou_post_ou_dc_creator';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['table'] = 'sparql_views_2823727186';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['field'] = 'ou_post_ou_dc_creator';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_action'] = 'default';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_argument_type'] = 'ou_sparql_views_argument_default_user_field';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_argument_options']['user'] = FALSE;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['default_argument_skip_url'] = 0;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['specify_validation'] = 1;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['validate']['type'] = 'ou_sparql_views_argument_validate_user_field';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['validate_options']['type'] = 'either';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['validate_options']['restrict_roles'] = 0;
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['validate']['fail'] = 'empty';
$handler->display->display_options['arguments']['ou_post_ou_dc_creator']['sparql_options'] = array(
  'value_type' => 'uri',
  'language' => '0',
  'code' => '',
);
