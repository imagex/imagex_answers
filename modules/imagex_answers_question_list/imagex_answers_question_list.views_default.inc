<?php
/**
 * @file
 * imagex_answers_question_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function imagex_answers_question_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'questions_all_views_';
  $view->description = 'ALL Views for Q&A';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions (All Views)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => '',
    'tag' => 'Recommend',
    'function' => 'count',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Answer Count */
  $handler->display->display_options['fields']['field_answer_count']['id'] = 'field_answer_count';
  $handler->display->display_options['fields']['field_answer_count']['table'] = 'field_data_field_answer_count';
  $handler->display->display_options['fields']['field_answer_count']['field'] = 'field_answer_count';
  $handler->display->display_options['fields']['field_answer_count']['label'] = '';
  $handler->display->display_options['fields']['field_answer_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_answer_count']['alter']['text'] = '[field_answer_count]  Answers';
  $handler->display->display_options['fields']['field_answer_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_answer_count']['type'] = 'nodereference_count_default';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['text'] = '[value] Votes';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
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
    'question' => 'question',
  );

  /* Display: All */
  $handler = $view->new_display('panel_pane', 'All', 'panel_pane_1');

  /* Display: Open */
  $handler = $view->new_display('panel_pane', 'Open', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Answer Count */
  $handler->display->display_options['fields']['field_answer_count']['id'] = 'field_answer_count';
  $handler->display->display_options['fields']['field_answer_count']['table'] = 'field_data_field_answer_count';
  $handler->display->display_options['fields']['field_answer_count']['field'] = 'field_answer_count';
  $handler->display->display_options['fields']['field_answer_count']['label'] = '';
  $handler->display->display_options['fields']['field_answer_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_answer_count']['alter']['text'] = '[field_answer_count]  Answers';
  $handler->display->display_options['fields']['field_answer_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_answer_count']['type'] = 'nodereference_count_default';
  /* Field: Vote results: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value']['alter']['text'] = '[value] Votes';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  /* Field: Content: Topics */
  $handler->display->display_options['fields']['field_topics']['id'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['table'] = 'field_data_field_topics';
  $handler->display->display_options['fields']['field_topics']['field'] = 'field_topics';
  $handler->display->display_options['fields']['field_topics']['label'] = '';
  $handler->display->display_options['fields']['field_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Question Locked (field_question_locked_p) */
  $handler->display->display_options['filters']['field_question_locked_p_value']['id'] = 'field_question_locked_p_value';
  $handler->display->display_options['filters']['field_question_locked_p_value']['table'] = 'field_data_field_question_locked_p';
  $handler->display->display_options['filters']['field_question_locked_p_value']['field'] = 'field_question_locked_p_value';
  $handler->display->display_options['filters']['field_question_locked_p_value']['operator'] = 'empty';

  /* Display: Resolved */
  $handler = $view->new_display('panel_pane', 'Resolved', 'panel_pane_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Question Locked (field_question_locked_p) */
  $handler->display->display_options['filters']['field_question_locked_p_value']['id'] = 'field_question_locked_p_value';
  $handler->display->display_options['filters']['field_question_locked_p_value']['table'] = 'field_data_field_question_locked_p';
  $handler->display->display_options['filters']['field_question_locked_p_value']['field'] = 'field_question_locked_p_value';
  $handler->display->display_options['filters']['field_question_locked_p_value']['operator'] = 'not empty';

  /* Display: Popular */
  $handler = $view->new_display('panel_pane', 'Popular', 'panel_pane_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Radioactivity (field_linux_radioactivity:radioactivity_energy) */
  $handler->display->display_options['filters']['field_linux_radioactivity_radioactivity_energy']['id'] = 'field_linux_radioactivity_radioactivity_energy';
  $handler->display->display_options['filters']['field_linux_radioactivity_radioactivity_energy']['table'] = 'field_data_field_linux_radioactivity';
  $handler->display->display_options['filters']['field_linux_radioactivity_radioactivity_energy']['field'] = 'field_linux_radioactivity_radioactivity_energy';
  $handler->display->display_options['filters']['field_linux_radioactivity_radioactivity_energy']['operator'] = '>';
  $handler->display->display_options['filters']['field_linux_radioactivity_radioactivity_energy']['value']['value'] = '0';

  /* Display: Answered */
  $handler = $view->new_display('panel_pane', 'Answered', 'panel_pane_5');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'question' => 'question',
  );
  /* Filter criterion: Content: Answer Count (field_answer_count) */
  $handler->display->display_options['filters']['field_answer_count_count']['id'] = 'field_answer_count_count';
  $handler->display->display_options['filters']['field_answer_count_count']['table'] = 'field_data_field_answer_count';
  $handler->display->display_options['filters']['field_answer_count_count']['field'] = 'field_answer_count_count';
  $handler->display->display_options['filters']['field_answer_count_count']['operator'] = '>';
  $handler->display->display_options['filters']['field_answer_count_count']['value']['value'] = '0';
  $export['questions_all_views_'] = $view;

  return $export;
}
