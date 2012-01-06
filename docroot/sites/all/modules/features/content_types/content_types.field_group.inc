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
  $field_group->identifier = 'group_attachments|node|artikel|form';
  $field_group->group_name = 'group_attachments';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'artikel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Anhänge',
    'weight' => '4',
    'children' => array(
      0 => 'field_collection_media',
      1 => 'field_documents',
      2 => 'field_video',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_attachments|node|artikel|form'] = $field_group;

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
      0 => 'field_rubrik',
      1 => 'field_projects',
      2 => 'field_gamesspot',
      3 => 'field_gamesspot_haw',
      4 => 'field_gamesspot_previews',
      5 => 'field_gamesspot_reviews',
      6 => 'field_genre',
      7 => 'field_technews',
      8 => 'field_technews_hardware',
      9 => 'field_technews_software',
      10 => 'field_infopool',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_cat|node|artikel|form'] = $field_group;

  return $export;
}
