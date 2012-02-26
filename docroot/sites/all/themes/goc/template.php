<?php

/**
 * Implements template_preprocess_html.
 * 
 * @param type $vars 
 */
function goc_preprocess_html(&$vars) {
  drupal_add_js('sites/all/libraries/jquery.stickyMenu/jquery.stickyMenu-0.1.js', 'file');
}

/**
 * Implements template_preprocess_views_view.
 * 
 * @param string $vars 
 */
function goc_preprocess_views_view(&$vars) {
  $display = $vars['display_id'];
  // If the front-view is used, we set a theme-suggestions, so standard tpl can be used.
  if ($display === 'vp_big_teaser_home') {
    $vars['theme_hook_suggestions'][] = 'views_view__vp_big_teaser';
  }

  if ($display === 'vp_small_teaser_home') {
    $vars['theme_hook_suggestions'][] = 'views_view__vp_small_teaser';
  }

  if ($display === 'vp_line_teaser_home') {
    $vars['theme_hook_suggestions'][] = 'views_view__vp_line_teaser';
  }
}

/**
 * Implements template_preprocess_views_view_unformatted.
 * 
 * @param string $vars 
 */
function goc_preprocess_views_view_unformatted(&$vars) {
  $display = $vars['view']->current_display;
  $classes = $vars['classes_array'];

  // Add grid classes to big-teaser.
  if ($display === 'vp_big_teaser' || $display === 'vp_big_teaser_home') {
    foreach ($classes as $id => $v) {
      if ($id % 2 === 0) {
        $classes[$id] = $v . ' alpha grid-8';
      } else {
        $classes[$id] = $v . ' omega grid-8';
      }
    }
    $vars['classes_array'] = $classes;
  }
  if ($display === 'vp_small_teaser' || $display === 'vp_small_teaser_home') {
    foreach ($classes as $id => $v) {
      $classes[$id] .= ' alpha grid-16';
    }
    $vars['classes_array'] = $classes;
  }

  if ($display === 'vp_line_teaser' || $display === 'vp_line_teaser_home') {
    foreach ($classes as $id => $v) {
      $classes[$id] .= ' alpha grid-16';
    }
    $vars['classes_array'] = $classes;
  }
}

/**
 * Implements template_preprocess_views_view_fields.
 * 
 * @param string $vars 
 */
function goc_preprocess_views_view_fields(&$vars) {
  $display = $vars['view']->current_display;

  // We use the standard fields-tpl-file if front-view is used.
  if ($display === 'vp_big_teaser_home') {
    $vars['theme_hook_suggestions'][] = 'views_view_fields__vp_big_teaser';
  }

  if ($display === 'vp_small_teaser_home') {
    $vars['theme_hook_suggestions'][] = 'views_view_fields__vp_small_teaser';
  }

  if ($display === 'vp_line_teaser_home') {
    $vars['theme_hook_suggestions'][] = 'views_view_fields__vp_line_teaser';
  }
}

/**
 * Implements template_preprocess_views_view_field.
 * 
 * @param type $vars 
 */
function goc_preprocess_views_view_field(&$vars) {
  // Wrap all field_fc_image fields with a link to a node, when displayed in a teaser.
  if (($vars['view']->name === "teaser" || $vars['view']->name === "homepage") && $vars['field']->field === "field_fc_image") {
    $nid = $vars['row']->nid;
    $image_content = $vars['output'];
    $image_content = l($image_content, 'node/' . $nid, array('attributes' => array('class' => array('teaser-image-link')), 'html' => TRUE));
    $vars['output'] = $image_content;
  }
}