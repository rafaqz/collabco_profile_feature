<?php
/**
 * @file
 * collabco_profile_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function collabco_profile_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_article';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_article'] = $strongarm;

  return $export;
}
