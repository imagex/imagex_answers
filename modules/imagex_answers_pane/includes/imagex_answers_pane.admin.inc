<?php

/**
 * CoverItLive Admin Settings form
 */
function imagex_answers_pane_admin_settings_form($form, &$form_state) {
  // CoverItLive api URL.
  $form['linux_coveritlive_api_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Admin Setting'),
    '#description' => t('Admin Setting'),
    '#size' => 40,
    '#required' => TRUE,
  );  
  
  return system_settings_form($form);
}
