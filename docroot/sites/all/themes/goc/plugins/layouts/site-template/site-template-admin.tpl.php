<?php
/**
 * @file
 * Template for a 2 column panel layout.
 *
 * This template provides a two column panel display layout, with
 * additional areas for the header and the footer.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the header row.
 *   - $content['left']: Content in the left column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the footer row.
 */
?>

<div class="clearfix">

   <div id="sitetemplate">

      <?php print $content['adtop']; ?>
      <?php print $content['header']; ?>
      <?php print $content['messages']; ?>
      <div class="clearfix">
         <?php print $content['content']; ?>
         <?php print $content['sidebar']; ?>
      </div>

      <?php print $content['footer']; ?>

   </div>

   <?php print $content['skyscraper']; ?>

</div>