<?php

/**
 * Implements hook_views_default_views().
 */

function ou_sparql_views_default_views() {
	$views = array();
  $files = file_scan_directory(
    drupal_get_path('module', 'ou_sparql_views'). '/views', 
    '/view\..+\.inc/'
  );
  foreach ($files as $uri => $file) {
    require $uri;
    if (isset($view)) {
      $views[$view->name] = $view;
    }
  }
  return $views;
}