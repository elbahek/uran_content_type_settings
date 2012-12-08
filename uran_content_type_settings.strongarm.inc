<?php
/**
 * @file
 * uran_content_type_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function uran_content_type_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_type_extras_default_settings';
  $strongarm->value = array(
    'title_label' => 'Title',
    'content_type_extras_remove_body' => 0,
    'node_preview' => '0',
    'content_type_extras_preview_button' => 'Preview',
    'content_type_extras_save_and_new' => '0',
    'content_type_extras_save_and_new_button' => 'Save and New',
    'content_type_extras_save_and_edit' => '0',
    'content_type_extras_save_and_edit_button' => 'Save and Edit',
    'content_type_extras_cancel' => '0',
    'node_options' => array(
      'status' => 'status',
      'promote' => 0,
      'sticky' => 0,
      'revision' => 0,
    ),
    'node_submitted' => 0,
    'user_permissions' => array(
      'create_roles' => array(
        3 => '3',
        1 => 0,
        2 => 0,
      ),
      'edit_roles' => array(
        3 => '3',
        1 => 0,
        2 => 0,
      ),
      'delete_roles' => array(
        3 => '3',
        1 => 0,
        2 => 0,
      ),
    ),
    'content_type_extras_descriptions_required' => 0,
    'content_type_extras_title_hide' => 0,
    'content_type_extras_title_hide_css' => 0,
    'content_type_extras_title_hide_front' => 0,
    'content_type_extras_top_buttons' => array(
      'manage_fields' => 0,
      'node_edit' => 0,
    ),
    'content_type_extras__active_tab' => 'edit-extras',
  );
  $export['content_type_extras_default_settings'] = $strongarm;

  return $export;
}
