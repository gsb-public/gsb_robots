<?php

/**
 * @file
 * Administrative page callbacks for the gsb_robots module.
 */

/**
 * Administration settings form.
 *
 * @see system_settings_form()
 */
function gsb_robots_admin_settings() {
  $form['gsb_robots_content'] = array(
    '#type' => 'textarea',
    '#title' => t('Contents of robots.txt'),
    '#default_value' => variable_get('gsb_robots_content', ''),
    '#cols' => 60,
    '#rows' => 20,
    '#wysiwyg' => FALSE,
  );

  return system_settings_form($form);
}
