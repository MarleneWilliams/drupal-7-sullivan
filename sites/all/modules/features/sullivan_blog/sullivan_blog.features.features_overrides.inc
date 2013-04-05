<?php
/**
 * @file
 * sullivan_blog.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function sullivan_blog_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-blog_post-body.field_instance|fences_wrapper"] = 'div';
  $overrides["field.node-blog_post-body.field_instance|label"] = 'Body';
  $overrides["field.node-blog_post-body.field_instance|settings|display_summary"]["DELETED"] = TRUE;
  $overrides["field.node-blog_post-field_blog_category.field_instance|fences_wrapper"] = 'div';
  $overrides["field.node-blog_post-field_blog_category.field_instance|label"] = 'Blog category';
  $overrides["field.node-blog_post-title_field.field_instance|description"] = 'A field replacing node title.';

  // Exported overrides for: variable
  $overrides["variable.comment_blog_post.value"] = '1';
  $overrides["variable.comment_default_mode_blog_post.value"] = 0;
  $overrides["variable.comment_form_location_blog_post.value"] = 0;

  // Exported overrides for: views_view
  $overrides["views_view.blog.display|page|display_options|defaults|pager"] = FALSE;
  $overrides["views_view.blog.display|page|display_options|defaults|row_options"] = FALSE;
  $overrides["views_view.blog.display|page|display_options|defaults|row_plugin"] = FALSE;
  $overrides["views_view.blog.display|page|display_options|defaults|style_options"] = FALSE;
  $overrides["views_view.blog.display|page|display_options|defaults|style_plugin"] = FALSE;
  $overrides["views_view.blog.display|page|display_options|menu|context"] = 0;
  $overrides["views_view.blog.display|page|display_options|menu|type"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page|display_options|menu|weight"] = '0';
  $overrides["views_view.blog.display|page|display_options|pager"] = array(
    'type' => 'full',
    'options' => array(
      'items_per_page' => '1',
      'offset' => '0',
      'id' => '0',
      'quantity' => '9',
    ),
  );
  $overrides["views_view.blog.display|page|display_options|row_options"] = array(
    'view_mode' => 'full',
    'links' => FALSE,
  );
  $overrides["views_view.blog.display|page|display_options|row_plugin"] = 'node';
  $overrides["views_view.blog.display|page|display_options|style_plugin"] = 'default';
  $overrides["views_view.blog_category_list.display|block|display_options|style_options|fill_single_line"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|empty|area|empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|empty|area|tokenize"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|absolute"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|alter_text"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|ellipsis"] = FALSE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|external"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|html"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|make_link"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|more_link"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|nl2br"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|replace_spaces"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|strip_tags"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|trim"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|trim_whitespace"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|alter|word_boundary"] = FALSE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|convert_spaces"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|hide_alter_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|name|link_to_taxonomy"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|tid|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|tid|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|tid|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|tid|format_plural"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|tid|hide_alter_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|fields|tid|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|relationships|tid_representative|required"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|relationships|tid_representative|subquery_regenerate"] = TRUE;
  $overrides["views_view.blog_category_list.display|default|display_options|use_more_always"] = FALSE;

 return $overrides;
}
