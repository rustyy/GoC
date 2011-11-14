<?php
/**
 * @file
 *
 * Theme implementation to display the header block on a Drupal page.
 *
 * This utilizes the following variables thata re normally found in
 * page.tpl.php:
 * - $logo
 * - $front_page
 * - $site_name
 * - $front_page
 * - $site_slogan
 * - $search_box
 *
 * Additional items can be added via theme_preprocess_pane_header(). See
 * template_preprocess_pane_header() for examples.
 */
?>

<?php if (!empty($logo)): ?>
  <?php if ($is_front): ?><h1><?php endif; ?>
    <a href="<?php print $front_page; ?>" title="<?php print t('Go to Frontpage of') . ' ' . $site_name; ?>" rel="home" id="logo">
      <img src="<?php print $logo; ?>" alt="<?php print $site_name; ?>" />
    </a>
  <?php if ($is_front): ?></h1><?php endif; ?>
<?php endif; ?>