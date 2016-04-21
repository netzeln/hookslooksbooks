<?php
/**
 * @file
 * music_review.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function music_review_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'hooks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Hooks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Hooks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Artist */
  $handler->display->display_options['fields']['field_artist']['id'] = 'field_artist';
  $handler->display->display_options['fields']['field_artist']['table'] = 'field_data_field_artist';
  $handler->display->display_options['fields']['field_artist']['field'] = 'field_artist';
  $handler->display->display_options['fields']['field_artist']['label'] = '';
  $handler->display->display_options['fields']['field_artist']['element_label_colon'] = FALSE;
  /* Field: Content: Musical Work */
  $handler->display->display_options['fields']['field_music']['id'] = 'field_music';
  $handler->display->display_options['fields']['field_music']['table'] = 'field_data_field_music';
  $handler->display->display_options['fields']['field_music']['field'] = 'field_music';
  $handler->display->display_options['fields']['field_music']['label'] = '';
  $handler->display->display_options['fields']['field_music']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_music']['element_label_colon'] = FALSE;
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
    'music_review' => 'music_review',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['hooks'] = $view;

  return $export;
}
