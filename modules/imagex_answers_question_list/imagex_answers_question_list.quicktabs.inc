<?php
/**
 * @file
 * imagex_answers_question_list.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function imagex_answers_question_list_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'linux_questions';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Questions';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'questions_all_views_',
      'display' => 'panel_pane_1',
      'args' => '',
      'title' => 'All',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'questions_all_views_',
      'display' => 'panel_pane_2',
      'args' => '',
      'title' => 'Open',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'questions_all_views_',
      'display' => 'panel_pane_3',
      'args' => '',
      'title' => 'Resolved',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'questions_all_views_',
      'display' => 'panel_pane_4',
      'args' => '',
      'title' => 'Popular',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'questions_all_views_',
      'display' => 'panel_pane_5',
      'args' => '',
      'title' => 'Answered',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('All');
  t('Answered');
  t('Open');
  t('Popular');
  t('Questions');
  t('Resolved');

  $export['linux_questions'] = $quicktabs;

  return $export;
}
