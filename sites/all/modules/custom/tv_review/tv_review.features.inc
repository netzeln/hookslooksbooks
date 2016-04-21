<?php
/**
 * @file
 * tv_review.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tv_review_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tv_review_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tv_review_node_info() {
  $items = array(
    'tv_review' => array(
      'name' => t('TV Review'),
      'base' => 'node_content',
      'description' => t('for reviewing tv show or episode'),
      'has_title' => '1',
      'title_label' => t('Episode'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
