
<?php

$plugin = array(
  'single' => TRUE,
  'title' => t('ImageX Question Form'),
  'description' => t('Provides interface for asking questions.'),
  'edit form' => 'imagex_answers_pane_content_type_edit_form',
  'render callback' => 'imagex_answers_pane_content_type_render',
  'category' => t('ImageX'),
  'defaults' => array()
);