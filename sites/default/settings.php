<?
/**
 * This settings.php file was created by the Acquia Cloud ah-site-archive-import
 * Drush command. The imported archive did not contain a settings.php file, so
 * the import process created this file by default. You can replace this file 
 * with the standard default settings.php file for your version of Drupal. 
 * However, be sure to keep the last line that loads the "Acquia Cloud settings
 * include file", which provides the correct database credentials for your site.
 */
$update_free_access = FALSE;
$drupal_hash_salt = '';
ini_set('arg_separator.output',     '&amp;');
ini_set('magic_quotes_runtime',     0);
ini_set('magic_quotes_sybase',      0);
ini_set('session.cache_expire',     200000);
ini_set('session.cache_limiter',    'none');
ini_set('session.cookie_lifetime',  2000000);
ini_set('session.gc_divisor',       100);
ini_set('session.gc_maxlifetime',   200000);
ini_set('session.gc_probability',   1);
ini_set('session.save_handler',     'user');
ini_set('session.use_cookies',      1);
ini_set('session.use_only_cookies', 1);
ini_set('session.use_trans_sid',    0);
ini_set('url_rewriter.tags',        '');


/**
 * Include settings.php from private folder.
 */
if (file_exists(DRUPAL_ROOT . '/../private/settings.php')) {
  include(DRUPAL_ROOT . '/../private/settings.php');
}

/**
 * Include local.settings.php from private folder.
 */
if (file_exists(DRUPAL_ROOT . '/../private/local.settings.php')) {
  include(DRUPAL_ROOT . '/../private/local.settings.php');
}

