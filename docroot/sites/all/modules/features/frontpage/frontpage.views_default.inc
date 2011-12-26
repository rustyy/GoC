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
  /* Relationship: Content: Medien (field_collection_media) */
  $handler->display->display_options['relationships']['field_collection_media_value']['id'] = 'field_collection_media_value';
  $handler->display->display_options['relationships']['field_collection_media_value']['table'] = 'field_data_field_collection_media';
  $handler->display->display_options['relationships']['field_collection_media_value']['field'] = 'field_collection_media_value';
  /* Field: Field collection item: Medium */
  $handler->display->display_options['fields']['field_mediafile']['id'] = 'field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['table'] = 'field_data_field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['field'] = 'field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_mediafile']['label'] = '';
  $handler->display->display_options['fields']['field_mediafile']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mediafile']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_mediafile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediafile']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mediafile']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mediafile']['settings'] = array(
    'image_style' => 'size-310x209',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_mediafile']['field_api_classes'] = 0;
  /* Field: Field collection item: Bildunterschrift */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_caption']['field_api_classes'] = 0;
  /* Field: Field collection item: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_credit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_credit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_credit']['element_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_credit']['field_api_classes'] = 0;
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
  $handler = $view->new_display('panel_pane', 'VP Slideshow', 'vp_slideshow');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Medien (field_collection_media) */
  $handler->display->display_options['relationships']['field_collection_media_value']['id'] = 'field_collection_media_value';
  $handler->display->display_options['relationships']['field_collection_media_value']['table'] = 'field_data_field_collection_media';
  $handler->display->display_options['relationships']['field_collection_media_value']['field'] = 'field_collection_media_value';
  $handler->display->display_options['relationships']['field_collection_media_value']['required'] = 1;
  $handler->display->display_options['relationships']['field_collection_media_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Medium */
  $handler->display->display_options['fields']['field_mediafile']['id'] = 'field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['table'] = 'field_data_field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['field'] = 'field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_mediafile']['label'] = '';
  $handler->display->display_options['fields']['field_mediafile']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediafile']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mediafile']['settings'] = array(
    'image_style' => 'size-433x289',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_mediafile']['field_api_classes'] = 0;
  /* Field: Field collection item: Bildunterschrift */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_caption']['field_api_classes'] = 0;
  /* Field: Field collection item: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_credit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_credit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_credit']['field_api_classes'] = 0;
  $handler->display->display_options['pane_title'] = 'VP Slideshow';
  $handler->display->display_options['pane_description'] = 'VP Slideshow shows only 4 pictures of all flagged articles';

  /* Display: VP Big Teaser */
  $handler = $view->new_display('panel_pane', 'VP Big Teaser', 'panel_pane_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '4';
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: VP Small Teaser */
  $handler = $view->new_display('panel_pane', 'VP Small Teaser', 'panel_pane_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '6';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Medium */
  $handler->display->display_options['fields']['field_mediafile']['id'] = 'field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['table'] = 'field_data_field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['field'] = 'field_mediafile';
  $handler->display->display_options['fields']['field_mediafile']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_mediafile']['label'] = '';
  $handler->display->display_options['fields']['field_mediafile']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mediafile']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_mediafile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mediafile']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mediafile']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mediafile']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mediafile']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_mediafile']['settings'] = array(
    'image_style' => 'size-190x128',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_mediafile']['field_api_classes'] = 0;
  /* Field: Field collection item: Bildunterschrift */
  $handler->display->display_options['fields']['field_caption']['id'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['table'] = 'field_data_field_caption';
  $handler->display->display_options['fields']['field_caption']['field'] = 'field_caption';
  $handler->display->display_options['fields']['field_caption']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_caption']['label'] = '';
  $handler->display->display_options['fields']['field_caption']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_caption']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_caption']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_caption']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_caption']['element_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_caption']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_caption']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_caption']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_caption']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_caption']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_caption']['field_api_classes'] = 0;
  /* Field: Field collection item: Credit */
  $handler->display->display_options['fields']['field_credit']['id'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['table'] = 'field_data_field_credit';
  $handler->display->display_options['fields']['field_credit']['field'] = 'field_credit';
  $handler->display->display_options['fields']['field_credit']['relationship'] = 'field_collection_media_value';
  $handler->display->display_options['fields']['field_credit']['label'] = '';
  $handler->display->display_options['fields']['field_credit']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_credit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_credit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_credit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_credit']['element_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_credit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_credit']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_credit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_credit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_credit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_credit']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
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
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
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
    t('field collection item from field_collection_media'),
    t('mehr'),
    t('VP Slideshow'),
    t('VP Slideshow shows only 4 pictures of all flagged articles'),
    t('View panes'),
    t('VP Big Teaser'),
    t('VP Small Teaser'),
    t('VP Small Teaser 2'),
    t('VP Big Teaser 2'),
  );
  $export['output_frontpage'] = $view;

  return $export;
}
