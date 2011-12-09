<?php
/**
 * @file
 * frontpage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function frontpage_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'output_frontpage';
  $view->description = 'Output for Frontpages all VP\'s';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Output Frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Medien */
  $handler->display->display_options['fields']['field_media_1']['id'] = 'field_media_1';
  $handler->display->display_options['fields']['field_media_1']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media_1']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media_1']['label'] = '';
  $handler->display->display_options['fields']['field_media_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_1']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_1']['settings'] = array(
    'file_view_mode' => 'media_large',
  );
  $handler->display->display_options['fields']['field_media_1']['field_api_classes'] = 0;
  /* Field: Content: Medien */
  $handler->display->display_options['fields']['field_collection_media']['id'] = 'field_collection_media';
  $handler->display->display_options['fields']['field_collection_media']['table'] = 'field_data_field_collection_media';
  $handler->display->display_options['fields']['field_collection_media']['field'] = 'field_collection_media';
  $handler->display->display_options['fields']['field_collection_media']['label'] = '';
  $handler->display->display_options['fields']['field_collection_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_collection_media']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_collection_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_collection_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'mehr';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';

  /* Display: VP Slideshow */
  $handler = $view->new_display('panel_pane', 'VP Slideshow', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Medien */
  $handler->display->display_options['fields']['field_media_1']['id'] = 'field_media_1';
  $handler->display->display_options['fields']['field_media_1']['table'] = 'field_data_field_media';
  $handler->display->display_options['fields']['field_media_1']['field'] = 'field_media';
  $handler->display->display_options['fields']['field_media_1']['label'] = '';
  $handler->display->display_options['fields']['field_media_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_media_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_media_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_media_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_media_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_media_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_media_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_media_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_media_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_media_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_media_1']['type'] = 'media';
  $handler->display->display_options['fields']['field_media_1']['settings'] = array(
    'file_view_mode' => 'media_large',
  );
  $handler->display->display_options['fields']['field_media_1']['field_api_classes'] = 0;
  /* Field: Content: Medien */
  $handler->display->display_options['fields']['field_collection_media']['id'] = 'field_collection_media';
  $handler->display->display_options['fields']['field_collection_media']['table'] = 'field_data_field_collection_media';
  $handler->display->display_options['fields']['field_collection_media']['field'] = 'field_collection_media';
  $handler->display->display_options['fields']['field_collection_media']['label'] = '';
  $handler->display->display_options['fields']['field_collection_media']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_collection_media']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_collection_media']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_collection_media']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_collection_media']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_collection_media']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_collection_media']['field_api_classes'] = 0;

  /* Display: VP Big Teaser */
  $handler = $view->new_display('panel_pane', 'VP Big Teaser', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '4';

  /* Display: VP Small Teaser */
  $handler = $view->new_display('panel_pane', 'VP Small Teaser', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '6';

  /* Display: VP Small Teaser 2 */
  $handler = $view->new_display('panel_pane', 'VP Small Teaser 2', 'panel_pane_4');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '8';

  /* Display: VP Big Teaser 2 */
  $handler = $view->new_display('panel_pane', 'VP Big Teaser 2', 'panel_pane_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '10';
  $translatables['output_frontpage'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('mehr'),
    t('VP Slideshow'),
    t('View panes'),
    t('VP Big Teaser'),
    t('VP Small Teaser'),
    t('VP Small Teaser 2'),
    t('VP Big Teaser 2'),
  );
  $export['output_frontpage'] = $view;

  return $export;
}
