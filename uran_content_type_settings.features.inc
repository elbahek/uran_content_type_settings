<?php
/**
 * @file
 * uran_content_type_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uran_content_type_settings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
