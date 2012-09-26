<?php

/**
 * implementation of hook_panels_layouts
 */
$plugin = array(
  'title' => t('Template for Node-View-Panel'),
  'category' => t('GoC'),
  'icon' => 'node-view.png',
  'theme' => 'node-view',
  'css' => 'panel-node-view.css',
  'admin theme' => 'node-view_admin',
  'admin css' => 'node-view-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left sidebar'),
    'right' => t('Right sidebar'),
    'bottom' => t('Bottom'),
  ),
);

