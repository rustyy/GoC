<?php
<<<<<<< HEAD
function goc_preprocess_html(&$variables) {
  // add Google Webfonts
  $fonts = 'http://fonts.googleapis.com/css?family=Arvo:400,700,400italic,700italic|Nobile:400,400italic,700italic,700';
  drupal_add_css($fonts);
=======

function goc_name_preprocess_page(&$vars) {
  kpr($vars);
>>>>>>> d2e7df09e6c4ce2d076ebe7bf3ab9c66f34d35e4
}