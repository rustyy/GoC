<?php

/**
 * implementation of hook_panels_layouts
 */
$plugin = array(
    'title' => t('site-template Layout for GoC'),
    'category' => t('GoC'),
    'icon' => 'site-template.png',
    'theme' => 'site-template',
    'css' => 'panel-site-template.css',
    'admin theme' => 'site-template_admin',
    'admin css' => 'site-template-admin.css',
    'regions' => array(
        'header' => t('Header'),
        'adtop' => t('Advertisment Top'),
        'skyscraper' => t('Skyscraper'),
        'messages' => t('Messages'),
        'content' => t('Content'),
        'sidebar' => t('Sidebar'),
        'footer' => t('Footer'),
    ),
);