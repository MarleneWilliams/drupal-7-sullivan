<?php
/**
 * @file
 * product_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function product_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['commerce_product-product-field_images'])) {
    $data['commerce_product-product-field_images']['display']['default']['module'] = 'cloud_zoom'; /* WAS: 'image' */
    $data['commerce_product-product-field_images']['display']['default']['settings']['gallery_filedset'] = array(
      'gallery_mode' => 1,
      'thumb_style' => 'product_thumbnail',
    ); /* WAS: '' */
    $data['commerce_product-product-field_images']['display']['default']['settings']['slide_style'] = 'large'; /* WAS: '' */
    $data['commerce_product-product-field_images']['display']['default']['settings']['zoom_position_fieldset'] = array(
      'adjust_x' => 20,
      'adjust_y' => 0,
      'position' => 'right',
      'zoom_height' => 'auto',
      'zoom_width' => 'auto',
    ); /* WAS: '' */
    $data['commerce_product-product-field_images']['display']['default']['settings']['zoom_style'] = 0; /* WAS: '' */
    $data['commerce_product-product-field_images']['display']['default']['settings']['zoom_style_fieldset'] = array(
      'Show title' => 1,
      'lens_opacity' => 0.5,
      'smooth_move' => 3,
      'soft_focus' => 0,
      'tint' => '#878787',
      'tint_opacity' => 0.5,
      'title_opacity' => 0.5,
    ); /* WAS: '' */
    $data['commerce_product-product-field_images']['display']['default']['type'] = 'cloud_zoom'; /* WAS: 'image' */
    $data['commerce_product-product-field_images']['settings']['file_directory'] = 'coins'; /* WAS: '' */
    $data['commerce_product-product-field_images']['widget']['settings']['filefield_sources'] = array(
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
    ); /* WAS: '' */
    unset($data['commerce_product-product-field_images']['display']['default']['settings']['image_link']);
    unset($data['commerce_product-product-field_images']['display']['default']['settings']['image_style']);
  }
  if (isset($data['node-product_display-body'])) {
    $data['node-product_display-body']['display']['default']['weight'] = 3; /* WAS: 2 */
  }
  if (isset($data['node-product_display-field_product'])) {
    $data['node-product_display-field_product']['display']['default']['settings']['combine'] = TRUE; /* WAS: 1 */
    $data['node-product_display-field_product']['display']['default']['settings']['show_quantity'] = FALSE; /* WAS: 1 */
    $data['node-product_display-field_product']['display']['default']['settings']['show_single_product_attributes'] = FALSE; /* WAS: 0 */
    $data['node-product_display-field_product']['display']['default']['weight'] = 6; /* WAS: 3 */
  }
  if (isset($data['node-product_display-field_product_category'])) {
    unset($data['node-product_display-field_product_category']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function product_overrides_strongarm_alter(&$data) {
  if (isset($data['comment_product_display'])) {
    $data['comment_product_display']->value = 0; /* WAS: 2 */
  }
  if (isset($data['field_bundle_settings_commerce_product__product'])) {
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['sku']['add_to_cart_confirmation_view']['visible'] = FALSE; /* WAS: TRUE */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['sku']['add_to_cart_confirmation_view']['weight'] = 2; /* WAS: 1 */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['sku']['default']['weight'] = 3; /* WAS: 0 */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['sku']['line_item'] = array(
      'weight' => 1,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['sku']['product_in_cart'] = array(
      'weight' => 2,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['status']['add_to_cart_confirmation_view']['weight'] = 5; /* WAS: 2 */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['status']['default']['weight'] = 5; /* WAS: 6 */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['status']['line_item'] = array(
      'weight' => 6,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['display']['status']['product_in_cart'] = array(
      'weight' => 4,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['form']['sku']['weight'] = 0; /* WAS: -10 */
    $data['field_bundle_settings_commerce_product__product']->value['extra_fields']['form']['status']['weight'] = 3; /* WAS: 35 */
    $data['field_bundle_settings_commerce_product__product']->value['view_modes']['add_to_cart_confirmation_view'] = array(
      'custom_settings' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['view_modes']['commerce_discount_offer_token'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['view_modes']['commerce_line_item_diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['view_modes']['node_diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_commerce_product__product']->value['view_modes']['node_revision'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
  if (isset($data['field_bundle_settings_node__product_display'])) {
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:commerce_price']['default']['weight'] = 5; /* WAS: 1 */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:commerce_price']['teaser'] = array(
      'weight' => 3,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:commerce_stock'] = array(
      'default' => array(
        'weight' => 4,
        'visible' => TRUE,
      ),
      'teaser' => array(
        'weight' => 7,
        'visible' => FALSE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:field_images']['default']['weight'] = 1; /* WAS: 4 */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:field_images']['teaser'] = array(
      'weight' => 0,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:field_pt_year'] = array(
      'teaser' => array(
        'weight' => 6,
        'visible' => FALSE,
      ),
      'default' => array(
        'weight' => 2,
        'visible' => TRUE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:sku']['default']['weight'] = 15; /* WAS: 7 */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:sku']['teaser'] = array(
      'weight' => 8,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:status']['default']['weight'] = 19; /* WAS: 8 */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:status']['teaser'] = array(
      'weight' => 12,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:title_field']['default']['weight'] = 16; /* WAS: 5 */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:title_field']['teaser'] = array(
      'weight' => 5,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:title']['default']['weight'] = 14; /* WAS: 6 */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['display']['product:title']['teaser'] = array(
      'weight' => 9,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['form']['metatags'] = array(
      'weight' => 40,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['form']['path'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['form']['redirect'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['extra_fields']['form']['xmlsitemap'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['view_modes']['diff_standard'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__product_display']->value['view_modes']['revision'] = array(
      'custom_settings' => FALSE,
    ); /* WAS: '' */
  }
}
