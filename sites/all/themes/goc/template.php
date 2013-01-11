<?php

/**
 * Implements template_preprocess_html.
 *
 * @param type $vars
 */
function goc_preprocess_html(&$vars) {
  drupal_add_js('sites/all/libraries/jquery.imageAccordion/jquery.imageAccordion-0.1a.js', 'file');
  drupal_add_css('sites/all/libraries/jquery.imageAccordion/themes/standard/standard.css', 'file');

  // Add Touch Icons.
  $elements = array(
    '#tag' => 'link',
    '#attributes' => array(
      'rel' => 'apple-touch-icon',
      'sizes' => '57x57',
      'href' => drupal_get_path('theme', 'goc') . '/apple-touch-icons/apple-touch-icon-57x57-precomposed.png',
    ),
  );
  drupal_add_html_head($elements, 'touch_icon_57');

  $elements = array(
    '#tag' => 'link',
    '#attributes' => array(
      'rel' => 'apple-touch-icon',
      'sizes' => '72x72',
      'href' => drupal_get_path('theme', 'goc') . '/apple-touch-icons/apple-touch-icon-72x72-precomposed.png',
    ),
  );
  drupal_add_html_head($elements, 'touch_icon_72');

  $elements = array(
    '#tag' => 'link',
    '#attributes' => array(
      'rel' => 'apple-touch-icon',
      'sizes' => '114x114',
      'href' => drupal_get_path('theme', 'goc') . '/apple-touch-icons/apple-touch-icon-114x114-precomposed.png',
    ),
  );
  drupal_add_html_head($elements, 'touch_icon_114');

  $elements = array(
    '#tag' => 'link',
    '#attributes' => array(
      'rel' => 'apple-touch-icon',
      'sizes' => '144x144',
      'href' => drupal_get_path('theme', 'goc') . '/apple-touch-icons/apple-touch-icon-144x144-precomposed.png',
    ),
  );
  drupal_add_html_head($elements, 'touch_icon_144');
}

/***
 * Implements template_preprocess_panels_pane().
 *
 * @param $vars
 */
function goc_preprocess_panels_pane(&$vars) {
  // Add a fallback css-class if no image is set.
  // So we can change the node-titles style.
  if (arg(0) === 'node') {
    $node = node_load(arg(1));
    if (empty($node->field_media_image)) {
      if ($vars['pane']->type === 'page_content') {
        $vars['classes_array'][] = 'no-img';
      }
      if ($vars['pane']->subtype === 'node_header') {
        $vars['classes_array'][] = 'grid-12';
        $vars['classes_array'][] = 'push-4';
        $vars['classes_array'][] = 'alpha omega';
      }
    }
  }
}

/**
 * Implements template_preprocess_views_view.
 *
 * @param string $vars
 */
function goc_preprocess_views_view(&$vars) {
  $display = $vars['display_id'];
  // If the front-view is used, we set a specific class.
  if ($display === 'vp_big_teaser_home' || $display === 'vp_big_teaser') {
    $vars['classes_array'][] = 'big-teaser-group';
  }

  if ($display === 'vp_small_teaser_home' || $display === 'vp_small_teaser' || $display === 'small_teaser_related_content') {
    $vars['classes_array'][] = 'small-teaser-group';
  }

  if ($display === 'vp_line_teaser_home' || $display === 'vp_line_teaser' || $display === 'line_teaser_related_content') {
    $vars['classes_array'][] = 'line-teaser-group';
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
    $vars['classes_array'] = _helper_extend_teaser_css_classes($classes, array(
      'alpha grid-8',
      'omega grid-8'
    ), $vars['view'], TRUE);
  }
  // Add grid classes to other teaser variants.
  if ($display === 'vp_small_teaser' || $display === 'vp_small_teaser_home' || $display === 'vp_line_teaser' || $display === 'vp_line_teaser_home' || $display === 'small_teaser_related_content' || $display === 'line_teaser_related_content') {
    $vars['classes_array'] = _helper_extend_teaser_css_classes($classes, array('alpha omega grid-16'), $vars['view'], TRUE);
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

  if ($display === 'vp_small_teaser_home' || $display === 'small_teaser_related_content') {
    $vars['theme_hook_suggestions'][] = 'views_view_fields__vp_small_teaser';
  }

  if ($display === 'vp_line_teaser_home' || $display === 'line_teaser_related_content') {
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
  if (($vars['view']->name === "teaser" || $vars['view']->name === "homepage" || $vars['view']->name === "node_view") && $vars['field']->field === "field_fc_image") {
    // $link_classes is used to define certain classes for the wrapping anchor.
    $link_classes = array();
    $link_classes[] = 'teaser-image-link';
    // Set grid-classes for images on small teaser.
    if (preg_match('|small_teaser|', $vars['view']->current_display)) {
      $link_classes[] = 'grid-5';
      $link_classes[] = 'alpha';
    }
    // Rewrite origin row output.
    $nid = $vars['row']->nid;
    if (!empty($vars['output'])) {
      $image_content = $vars['output'];
      $image_content = l($image_content, 'node/' . $nid, array(
        'attributes' => array('class' => $link_classes),
        'html' => TRUE
      ));
      $vars['output'] = $image_content;
    }
  }
}

/***
 * Helper function to extend the classes_array of a view.
 *
 * @param $classes_array
 * @param $further_classes
 * @param $view
 * @param bool $check_image
 * @return mixed
 */
function _helper_extend_teaser_css_classes($classes_array, $further_classes, $view, $check_image = FALSE) {
  foreach ($classes_array as $id => $v) {
    if (count($further_classes) === 2) {
      if ($id % 2 === 0) {
        $classes_array[$id] .= ' ' . $further_classes[0];
      }
      else {
        $classes_array[$id] .= ' ' . $further_classes[1];
      }
    }
    else {
      $classes_array[$id] .= ' ' . $further_classes[0];
    }

    if ($check_image) {
      if (empty($view->result[$id]->field_field_fc_image)) {
        $classes_array[$id] .= ' no-img';
      }
    }
  }
  return $classes_array;
}

function goc_preprocess_entity(&$variables) {


  if (!empty($variables['field_fc_document'])) {
    //dpm($variables);
    $uri = $variables['field_fc_document'][0]['uri'];
    $url = file_create_url($uri);

    $variables['link_to_file'] = $url;
    //dpm($url);
  }

}