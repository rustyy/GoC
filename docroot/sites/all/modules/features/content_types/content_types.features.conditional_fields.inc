<?php
/**
 * @file
 * content_types.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function content_types_conditional_fields_default_fields() {
  $items = array();
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_projects',
    'dependee' => 'field_rubrik',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '10',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '10',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_gamesspot',
    'dependee' => 'field_rubrik',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '8',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '8',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_gamesspot_haw',
    'dependee' => 'field_gamesspot',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '3',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '3',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_gamesspot_previews',
    'dependee' => 'field_gamesspot',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '1',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '1',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_gamesspot_reviews',
    'dependee' => 'field_gamesspot',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '2',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '2',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_genre',
    'dependee' => 'field_gamesspot_previews',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'touched',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => 
        array (
        ),
        'values' => 
        array (
        ),
        'value_form' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_genre',
    'dependee' => 'field_gamesspot_reviews',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'touched',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => 
        array (
        ),
        'values' => 
        array (
        ),
        'value_form' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_genre',
    'dependee' => 'field_gamesspot_haw',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'touched',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => 1,
        'value' => 
        array (
        ),
        'values' => 
        array (
        ),
        'value_form' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_technews',
    'dependee' => 'field_rubrik',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '14',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '14',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_technews_hardware',
    'dependee' => 'field_technews',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '13',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '13',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_technews_software',
    'dependee' => 'field_technews',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '12',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '12',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );
  $items[] = array(
    'entity' => 'node',
    'bundle' => 'artikel',
    'dependent' => 'field_infopool',
    'dependee' => 'field_rubrik',
    'options' => 
      array (
        'state' => 'visible',
        'condition' => 'value',
        'effect' => 'show',
        'effect_options' => 
        array (
        ),
        'element_view' => 
        array (
          1 => '1',
          2 => '2',
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'element_view_per_role' => 0,
        'element_view_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          2 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
          3 => 
          array (
            1 => '1',
            2 => '2',
            5 => 0,
            3 => 0,
            4 => 0,
          ),
        ),
        'element_edit' => 
        array (
          1 => '1',
          3 => 0,
          2 => 0,
        ),
        'element_edit_per_role' => 0,
        'element_edit_roles' => 
        array (
          1 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          2 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
          3 => 
          array (
            1 => '1',
            3 => 0,
            2 => 0,
          ),
        ),
        'selector' => '',
        'values_set' => '1',
        'value_form' => '9',
        'value' => 
        array (
          0 => 
          array (
            'tid' => '9',
          ),
        ),
        'values' => 
        array (
        ),
      )
  );

  return $items;
}
