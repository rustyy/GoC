<?php
/**
 * @file
 * content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cat|node|artikel|form';
  $field_group->group_name = 'group_cat';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorie',
    'weight' => '1',
    'children' => array(
      0 => 'field_gamespot',
      1 => 'field_infopool',
      2 => 'field_projects',
      3 => 'field_rubrik',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'label' => 'Kategorie',
      'instance_settings' => array(
        'classes' => '',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_cat|node|artikel|form'] = $field_group;

  return $export;
}
