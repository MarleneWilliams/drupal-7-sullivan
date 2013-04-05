<?php
/**
 * @file
 * sullivan_blog.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function sullivan_blog_field_default_fields_alter(&$data) {
  if (isset($data['node-blog_post-body'])) {
    $data['node-blog_post-body']['field_instance']['fences_wrapper'] = 'div'; /* WAS: '' */
    $data['node-blog_post-body']['field_instance']['label'] = 'Body'; /* WAS: 'Description' */
    unset($data['node-blog_post-body']['field_instance']['settings']['display_summary']);
  }
  if (isset($data['node-blog_post-field_blog_category'])) {
    $data['node-blog_post-field_blog_category']['field_instance']['fences_wrapper'] = 'div'; /* WAS: '' */
    $data['node-blog_post-field_blog_category']['field_instance']['label'] = 'Blog category'; /* WAS: 'Category' */
  }
  if (isset($data['node-blog_post-title_field'])) {
    $data['node-blog_post-title_field']['field_instance']['description'] = 'A field replacing node title.'; /* WAS: '' */
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function sullivan_blog_strongarm_alter(&$data) {
  if (isset($data['comment_blog_post'])) {
    $data['comment_blog_post']->value = '1'; /* WAS: '2' */
  }
  if (isset($data['comment_default_mode_blog_post'])) {
    $data['comment_default_mode_blog_post']->value = 0; /* WAS: 1 */
  }
  if (isset($data['comment_form_location_blog_post'])) {
    $data['comment_form_location_blog_post']->value = 0; /* WAS: 1 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function sullivan_blog_views_default_views_alter(&$data) {
  if (isset($data['blog'])) {
    $data['blog']->display['page']->display_options['defaults']['pager'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['row_options'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['row_plugin'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['style_options'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['defaults']['style_plugin'] = FALSE; /* WAS: '' */
    $data['blog']->display['page']->display_options['menu']['context'] = 0; /* WAS: '' */
    $data['blog']->display['page']->display_options['menu']['weight'] = '0'; /* WAS: '' */
    $data['blog']->display['page']->display_options['pager'] = array(
      'type' => 'full',
      'options' => array(
        'items_per_page' => '1',
        'offset' => '0',
        'id' => '0',
        'quantity' => '9',
      ),
    ); /* WAS: '' */
    $data['blog']->display['page']->display_options['row_options'] = array(
      'view_mode' => 'full',
      'links' => FALSE,
    ); /* WAS: '' */
    $data['blog']->display['page']->display_options['row_plugin'] = 'node'; /* WAS: '' */
    $data['blog']->display['page']->display_options['style_plugin'] = 'default'; /* WAS: '' */
    unset($data['blog']->display['page']->display_options['menu']['type']);
  }
  if (isset($data['blog_category_list'])) {
    $data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['ellipsis'] = FALSE; /* WAS: 0 */
    $data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['make_link'] = TRUE; /* WAS: 1 */
    $data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['word_boundary'] = FALSE; /* WAS: 0 */
    $data['blog_category_list']->display['default']->display_options['relationships']['tid_representative']['required'] = TRUE; /* WAS: 1 */
    $data['blog_category_list']->display['default']->display_options['relationships']['tid_representative']['subquery_regenerate'] = TRUE; /* WAS: 1 */
    $data['blog_category_list']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['blog_category_list']->display['block']->display_options['style_options']['fill_single_line']);
    unset($data['blog_category_list']->display['default']->display_options['empty']['area']['empty']);
    unset($data['blog_category_list']->display['default']->display_options['empty']['area']['tokenize']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['absolute']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['alter_text']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['external']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['html']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['more_link']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['nl2br']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['replace_spaces']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['strip_tags']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['trim']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['alter']['trim_whitespace']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['convert_spaces']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['element_default_classes']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['empty_zero']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['hide_alter_empty']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['hide_empty']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['name']['link_to_taxonomy']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['tid']['alter']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['tid']['element_default_classes']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['tid']['empty_zero']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['tid']['format_plural']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['tid']['hide_alter_empty']);
    unset($data['blog_category_list']->display['default']->display_options['fields']['tid']['hide_empty']);
  }
}
