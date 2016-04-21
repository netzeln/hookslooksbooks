<?php
/**
 * @file
 * tv_review.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tv_review_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'looks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Looks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Looks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Series */
  $handler->display->display_options['fields']['field_series']['id'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['table'] = 'field_data_field_series';
  $handler->display->display_options['fields']['field_series']['field'] = 'field_series';
  $handler->display->display_options['fields']['field_series']['label'] = '';
  $handler->display->display_options['fields']['field_series']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_series']['element_label_colon'] = FALSE;
  /* Field: Content: Episode */
  $handler->display->display_options['fields']['field_episode']['id'] = 'field_episode';
  $handler->display->display_options['fields']['field_episode']['table'] = 'field_data_field_episode';
  $handler->display->display_options['fields']['field_episode']['field'] = 'field_episode';
  $handler->display->display_options['fields']['field_episode']['label'] = '';
  $handler->display->display_options['fields']['field_episode']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'tv_review' => 'tv_review',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['looks'] = $view;

  return $export;
}
