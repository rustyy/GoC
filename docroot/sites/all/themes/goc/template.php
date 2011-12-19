<?php
function goc_preprocess_html(&$variables) {
  // add Google Webfonts
  $fonts = 'http://fonts.googleapis.com/css?family=Arvo:400,700,400italic,700italic|Nobile:400,400italic,700italic,700';
  drupal_add_css($fonts);
}