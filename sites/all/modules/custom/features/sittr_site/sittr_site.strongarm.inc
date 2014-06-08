<?php
/**
 * @file
 * sittr_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sittr_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Sittr';
  $export['site_name'] = $strongarm;

  return $export;
}
