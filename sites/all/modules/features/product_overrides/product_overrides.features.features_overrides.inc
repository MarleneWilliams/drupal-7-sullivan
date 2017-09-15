<?php
/**
 * @file
 * product_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function product_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.commerce_product-product-field_images.display|default|module"] = 'cloud_zoom';
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|gallery_filedset"] = array(
    'gallery_mode' => 1,
    'thumb_style' => 'product_thumbnail',
  );
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|image_link"]["DELETED"] = TRUE;
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|image_style"]["DELETED"] = TRUE;
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|slide_style"] = 'large';
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|zoom_position_fieldset"] = array(
    'adjust_x' => 20,
    'adjust_y' => 0,
    'position' => 'right',
    'zoom_height' => 'auto',
    'zoom_width' => 'auto',
  );
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|zoom_style"] = 0;
  $overrides["field_instance.commerce_product-product-field_images.display|default|settings|zoom_style_fieldset"] = array(
    'Show title' => 1,
    'lens_opacity' => 0.5,
    'smooth_move' => 3,
    'soft_focus' => 0,
    'tint' => '#878787',
    'tint_opacity' => 0.5,
    'title_opacity' => 0.5,
  );
  $overrides["field_instance.commerce_product-product-field_images.display|default|type"] = 'cloud_zoom';
  $overrides["field_instance.commerce_product-product-field_images.settings|file_directory"] = 'coins';
  $overrides["field_instance.commerce_product-product-field_images.widget|settings|filefield_sources"] = array(
    'filefield_sources' => array(
      'attach' => 0,
      'clipboard' => 0,
      'imce' => 0,
      'plupload' => 'plupload',
      'reference' => 0,
      'remote' => 0,
      'upload' => 'upload',
    ),
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
  );
  $overrides["field_instance.node-product_display-body.display|default|weight"] = 3;
  $overrides["field_instance.node-product_display-field_product.display|default|settings|combine"] = TRUE;
  $overrides["field_instance.node-product_display-field_product.display|default|settings|show_quantity"] = FALSE;
  $overrides["field_instance.node-product_display-field_product.display|default|settings|show_single_product_attributes"] = FALSE;
  $overrides["field_instance.node-product_display-field_product.display|default|weight"] = 6;
  $overrides["field_instance.node-product_display-field_product_category.node-product_display-field_product_category"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.comment_product_display.value"] = 0;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|sku|add_to_cart_confirmation_view|visible"] = FALSE;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|sku|add_to_cart_confirmation_view|weight"] = 2;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|sku|default|weight"] = 3;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|sku|line_item"] = array(
    'weight' => 1,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|sku|product_in_cart"] = array(
    'weight' => 2,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|status|add_to_cart_confirmation_view|weight"] = 5;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|status|default|weight"] = 5;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|status|line_item"] = array(
    'weight' => 6,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|display|status|product_in_cart"] = array(
    'weight' => 4,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|form|sku|weight"] = 0;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|extra_fields|form|status|weight"] = 3;
  $overrides["variable.field_bundle_settings_commerce_product__product.value|view_modes|add_to_cart_confirmation_view"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|view_modes|commerce_discount_offer_token"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|view_modes|commerce_line_item_diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|view_modes|node_diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_commerce_product__product.value|view_modes|node_revision"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:commerce_price|default|weight"] = 5;
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:commerce_price|teaser"] = array(
    'weight' => 3,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:commerce_stock"] = array(
    'default' => array(
      'weight' => 4,
      'visible' => TRUE,
    ),
    'teaser' => array(
      'weight' => 7,
      'visible' => FALSE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:field_images|default|weight"] = 1;
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:field_images|teaser"] = array(
    'weight' => 0,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:field_pt_year"] = array(
    'teaser' => array(
      'weight' => 6,
      'visible' => FALSE,
    ),
    'default' => array(
      'weight' => 2,
      'visible' => TRUE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:sku|default|weight"] = 15;
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:sku|teaser"] = array(
    'weight' => 8,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:status|default|weight"] = 19;
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:status|teaser"] = array(
    'weight' => 12,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:title_field|default|weight"] = 16;
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:title_field|teaser"] = array(
    'weight' => 5,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:title|default|weight"] = 14;
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|display|product:title|teaser"] = array(
    'weight' => 9,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|form|metatags"] = array(
    'weight' => 40,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|form|path"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|form|redirect"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|extra_fields|form|xmlsitemap"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|view_modes|diff_standard"] = array(
    'custom_settings' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__product_display.value|view_modes|revision"] = array(
    'custom_settings' => FALSE,
  );

 return $overrides;
}
