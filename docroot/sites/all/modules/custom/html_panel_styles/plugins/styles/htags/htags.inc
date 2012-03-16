<?php

/**
 * Implementation of hook_panels_styles().
 */
$plugin = array(
    'htags' => array(
        'title' => t('H-Tags'),
        'description' => t('Wrap content with a selected h-tag'),
        'render pane' => 'htags_render_pane',
        'pane settings form' => 'htags_settings_form',
        'hook theme' => array(
            'htags_theme_pane' => array(
                'template' => 'htags-pane',
                'path' => drupal_get_path('module', 'html_panel_styles') . '/plugins/styles/htags',
                'variables' => array(
                    'content' => NULL,
                    'settings' => NULL,
                ),
            ),
        ),
    ),
);

function theme_htags_render_pane($vars) {
  $settings = $vars['settings'];
  $content = $vars['content'];

  return theme('htags_theme_pane', array('content' => $content, 'settings' => $settings));
}

function htags_settings_form($style_settings) {
  $form['htag'] = array(
      '#type' => 'select',
      '#title' => t('H-Tag'),
      '#options' => array(
          '1' => t('H1'),
          '2' => t('H2'),
          '3' => t('H3'),
          '4' => t('H4'),
          '5' => t('H5'),
          '6' => t('H6'),
      ),
      '#default_value' => (isset($style_settings['htag'])) ? $style_settings['htag'] : 1,
  );

  return $form;
}