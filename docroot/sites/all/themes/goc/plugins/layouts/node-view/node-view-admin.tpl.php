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

<div class="node-view">
  <div>
    <?php print $content['top']; ?>
  </div>  
  <div id="node-view-left">
    <?php print $content['left']; ?>
  </div>
  <div id="node-view-right">
    <?php print $content['right']; ?>
  </div>
  <div>
    <?php print $content['bottom']; ?>
  </div>
</div> 