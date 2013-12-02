<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Ask a Question Form'),
  'description' => t('Provides interface for asking questions.'),
  'render callback' => 'imagex_answers_pane_content_type_render',
  'category' => t('Questions'),
  'defaults' => array()
);

/**
 * Renders a pane with a node_add form
 */
function imagex_answers_pane_content_type_render() {
  module_load_include('inc', 'node', 'node.pages');
  $form = node_add('question');
  
  $block = new stdClass();
  $block->module = 'imagex_answers_pane';

  $block->title = t('Ask a question');
  $block->content = $form;

  $block->delta = 'question_node_add_form';
  
  return $block;
}
