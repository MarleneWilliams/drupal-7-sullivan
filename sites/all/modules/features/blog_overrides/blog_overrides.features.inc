<?php
/**
 * @file
 * blog_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function blog_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-blog_post-field_image'])) {
    $data['node-blog_post-field_image']['widget']['settings']['filefield_sources'] = array(
      'filefield_sources' => array(),
      'source_attach' => array(
        'absolute' => 0,
        'attach_mode' => 'move',
        'path' => 'file_attach',
      ),
      'source_imce' => array(
        'imce_mode' => 0,
      ),
      'source_reference' => array(
        'autocomplete' => 0,
      ),
    ); /* WAS: '' */
  }
  if (isset($data['node-blog_post-field_tags'])) {
    unset($data['node-blog_post-field_tags']);
  }
}

/**
 * Implements hook_image_styles_alter().
 */
function blog_overrides_image_styles_alter(&$data) {
  if (isset($data['blog_medium'])) {

  if (!isset($data['blog_medium']['storage']) || $data['blog_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['blog_medium']['effects'][0]['data']['height'] = 600;
  }

  if (!isset($data['blog_medium']['storage']) || $data['blog_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['blog_medium']['effects'][0]['data']['upscale'] = 0;
  }

  if (!isset($data['blog_medium']['storage']) || $data['blog_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['blog_medium']['effects'][0]['data']['width'] = 800;
  }

  if (!isset($data['blog_medium']['storage']) || $data['blog_medium']['storage'] == IMAGE_STORAGE_DEFAULT) {
    $data['blog_medium']['effects'][0]['name'] = 'image_scale';
  }
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function blog_overrides_strongarm_alter(&$data) {
  if (isset($data['comment_blog_post'])) {
    $data['comment_blog_post']->value = 1; /* WAS: 2 */
  }
  if (isset($data['comment_default_mode_blog_post'])) {
    $data['comment_default_mode_blog_post']->value = 0; /* WAS: 1 */
  }
  if (isset($data['comment_form_location_blog_post'])) {
    $data['comment_form_location_blog_post']->value = 0; /* WAS: 1 */
  }
  if (isset($data['field_bundle_settings_node__blog_post'])) {
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__blog_post']->value['view_modes']['revision'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function blog_overrides_views_default_views_alter(&$data) {
  if (isset($data['blog'])) {
    $data['blog']->display['block_2'] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:12:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:11:{s:5:"title";b:0;s:9:"css_class";b:0;s:8:"use_more";b:0;s:15:"use_more_always";b:0;s:13:"use_more_text";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;}s:5:"title";s:8:"Our Blog";s:9:"css_class";s:25:"blog-title-list item-list";s:8:"use_more";b:1;s:15:"use_more_always";b:1;s:13:"use_more_text";s:18:"See all blog posts";s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:7:"default";s:10:"row_plugin";s:6:"fields";s:11:"row_options";a:2:{s:10:"hide_empty";b:1;s:22:"default_field_elements";b:0;}s:6:"fields";a:2:{s:5:"title";a:9:{s:2:"id";s:5:"title";s:5:"table";s:4:"node";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:12:"element_type";s:2:"h3";s:13:"element_class";s:10:"item-title";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:7:"created";a:10:{s:2:"id";s:7:"created";s:5:"table";s:4:"node";s:5:"field";s:7:"created";s:5:"label";s:0:"";s:12:"element_type";s:4:"span";s:13:"element_class";s:4:"date";s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:11:"date_format";s:6:"custom";s:18:"custom_date_format";s:13:"M j, Y - g:ia";}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:7:"block_2";s:13:"display_title";s:22:"Latest blog posts list";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}'); /* WAS: '' */
    $data['blog']->display['page_3']->display_options['defaults']['fields'] = FALSE; /* WAS: '' */
    $data['blog']->display['page_3']->display_options['defaults']['row_options'] = FALSE; /* WAS: '' */
    $data['blog']->display['page_3']->display_options['defaults']['row_plugin'] = FALSE; /* WAS: '' */
    $data['blog']->display['page_3']->display_options['defaults']['style_options'] = FALSE; /* WAS: '' */
    $data['blog']->display['page_3']->display_options['defaults']['style_plugin'] = FALSE; /* WAS: '' */
    $data['blog']->display['page_3']->display_options['fields'] = array(
      'title' => array(
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'label' => '',
        'alter' => array(
          'word_boundary' => FALSE,
          'ellipsis' => FALSE,
        ),
        'element_type' => 'h2',
        'element_label_colon' => FALSE,
      ),
      'created' => array(
        'id' => 'created',
        'table' => 'node',
        'field' => 'created',
        'date_format' => 'long',
        'second_date_format' => 'long',
      ),
      'body' => array(
        'id' => 'body',
        'table' => 'field_data_body',
        'field' => 'body',
        'label' => '',
        'alter' => array(
          'max_length' => 300,
          'more_link' => TRUE,
          'trim' => TRUE,
        ),
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'field_api_classes' => TRUE,
      ),
    ); /* WAS: '' */
    $data['blog']->display['page_3']->display_options['menu']['title'] = 'Blog'; /* WAS: 'Archives' */
    $data['blog']->display['page_3']->display_options['row_plugin'] = 'fields'; /* WAS: '' */
    $data['blog']->display['page_3']->display_options['style_plugin'] = 'default'; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['fields'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['row_options'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['row_plugin'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['style_options'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['style_plugin'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['fields'] = array(
      'title' => array(
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'label' => '',
        'alter' => array(
          'word_boundary' => FALSE,
          'ellipsis' => FALSE,
        ),
        'element_type' => 'h2',
        'element_label_colon' => FALSE,
      ),
      'created' => array(
        'id' => 'created',
        'table' => 'node',
        'field' => 'created',
        'label' => '',
        'element_label_colon' => FALSE,
        'date_format' => 'long',
        'second_date_format' => 'long',
      ),
      'field_image' => array(
        'id' => 'field_image',
        'table' => 'field_data_field_image',
        'field' => 'field_image',
        'label' => '',
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'click_sort_column' => 'fid',
        'settings' => array(
          'image_style' => 'blog_full',
          'image_link' => 'content',
        ),
        'field_api_classes' => TRUE,
      ),
      'body' => array(
        'id' => 'body',
        'table' => 'field_data_body',
        'field' => 'body',
        'label' => '',
        'element_type' => 0,
        'element_label_colon' => FALSE,
        'element_wrapper_type' => 0,
        'element_default_classes' => FALSE,
        'field_api_classes' => TRUE,
      ),
    ); /* WAS: '' */
    $data['blog']->display['page']->display_options['menu']['context'] = 0; /* WAS: '' */
    $data['blog']->display['page']->display_options['menu']['weight'] = 0; /* WAS: '' */
    $data['blog']->display['page']->display_options['pager'] = array(
      'type' => 'full',
      'options' => array(
        'items_per_page' => 5,
        'offset' => 0,
        'id' => 0,
        'quantity' => 9,
      ),
    ); /* WAS: '' */
    $data['blog']->display['page']->display_options['row_options'] = array(
      'hide_empty' => TRUE,
    ); /* WAS: '' */
    $data['blog']->display['page']->display_options['row_plugin'] = 'fields'; /* WAS: '' */
    $data['blog']->display['page']->display_options['style_plugin'] = 'default'; /* WAS: '' */
    unset($data['blog']->display['page_3']->display_options['arguments']['created_year_month']['breadcrumb']);
    unset($data['blog']->display['page_3']->display_options['arguments']['created_year_month']['breadcrumb_enable']);
    unset($data['blog']->display['page_3']->display_options['defaults']['title']);
    unset($data['blog']->display['page_3']->display_options['title']);
    unset($data['blog']->display['page']->display_options['menu']['type']);
  }
}
