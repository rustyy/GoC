<?php
/**
 * Implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('site-template layout for GoC'),
    'category' => t('GoC'),
    'icon' => 'site-template.png',
    'theme' => 'site-template',
    //'css' => 'site-template.css',
    'admin theme' => 'site-template_admin',
    'admin css' => 'site-template-admin.css',
    'regions' => array(
        'header' => t('Header'),
        'navigation' => t('Navigation'),
        'messages' => t('Messages'),
        'content' => t('Content'),
        'sidebar' => t('Sidebar'),
        'footer' => t('Footer'),
    ),
);