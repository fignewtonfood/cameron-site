<?php
/**
 * @file
 * site_slogan.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function site_slogan_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'The second finest coffee in town.';
  $export['site_slogan'] = $strongarm;

  return $export;
}
