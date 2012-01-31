<?php

/*
 * page callback to provide 'my-research' editing page
 */
function research_views_view_myresearch () {
  global $user;
  $page = '<h1>'.drupal_ucfirst($user->name).'\'s research</h1>';
  // set_context()?
  $page .= views_embed_view('my_research', 'page', $user->uid);
  
  return $page;

}

