<?php
/**
 * @file
 * imagex_answers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function imagex_answers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-question-field_radioactivity'
  $field_instances['node-question-field_radioactivity'] = array(
    'bundle' => 'question',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 0,
        'radioactivity_timestamp' => 1383330030,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity',
    'label' => 'Radioactivity',
    'required' => FALSE,
    'settings' => array(
      'profile' => 'medium_traffic',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 34,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-question-field_radioactivity_counter'
  $field_instances['node-question-field_radioactivity_counter'] = array(
    'bundle' => 'question',
    'default_value' => array(
      0 => array(
        'radioactivity_energy' => 0,
        'radioactivity_timestamp' => 1383330137,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'radioactivity',
        'settings' => array(
          'accuracy' => 100,
          'energy' => 10,
          'type' => 'none',
        ),
        'type' => 'radioactivity_combo_formatter',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_radioactivity_counter',
    'label' => 'Radioactivity Counter',
    'required' => FALSE,
    'settings' => array(
      'profile' => 'counter',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'radioactivity',
      'settings' => array(),
      'type' => 'radioactivity_basic_widget',
      'weight' => 35,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Radioactivity');
  t('Radioactivity Counter');

  return $field_instances;
}
