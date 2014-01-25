<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('Answer a Question Form'),
  'description' => t('Provides interface for asking questions.'),
  'render callback' => 'imagex_answers_answer_pane_content_type_render',
  'category' => t('Questions'),
  'required context' => new ctools_context_required(t('Node'), 'node'),
  'defaults' => array()
);

/**
 * Renders a pane with a node_add form
 */
function imagex_answers_answer_pane_content_type_render($subtype, $conf, $args, $context) {
  global $user;

  $question = $context->data;
  module_load_include('inc', 'node', 'node.pages');
  $node = new stdClass();
  $node->type = 'answer';
  $node->uid = $user->uid;
  $node->name = $user->name;
  node_object_prepare($node);
  $node->field_answer_question['und'][0]['nid'] = $question->nid;
  $form = drupal_get_form('answer_node_form',$node);
  // Hide the 'Answer to field' as it's obvious which question is being answered
  $form['field_answer_question']['#access'] = FALSE;
  // Hide the preview button
  $form['actions']['preview']['#access'] = FALSE;
  
  $block = new stdClass();
  $block->module = 'imagex_answers_pane';

  $block->title = t('Your Answer');
  $block->content = $form;

  $block->delta = 'answer_node_add_form';
  
  return $block;
}
