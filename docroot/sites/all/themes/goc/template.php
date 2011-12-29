<?php
function goc_preprocess_html(&$variables) {
  // add Google Webfonts
  $fonts = 'http://fonts.googleapis.com/css?family=Arvo:400,700,400italic,700italic|Nobile:400,400italic,700italic,700';
  drupal_add_css($fonts);
}

function goc_preprocess_views_view(&$variables) {
  
  
  if ($variables['name'] === "output_frontpage" && $variables['display_id'] === "vp_slideshow") {
    $variables['classes_array'][] = 'image-accordion';
    
    /**
     * @Todo: Optimize js-integration.
     */
    drupal_add_js('sites/all/libraries/imageAccordion/imageAccordion.js', 'file');
    drupal_add_js('sites/all/themes/goc/js/goc.js', 'file');
  }
}