<div class="node-view">
  <div class="grid-16 alpha omega">
    <?php print $content['top']; ?>
  </div>
  <?php if (!empty($content['left'])): ?>
    <div class="grid-4 alpha">
      <?php print $content['left']; ?>
    </div>
  <?php endif; ?>
  <div class="grid-12 omega <?php if (empty($content['left'])) print 'push-4 alpha'; ?>">
<?php print $content['right']; ?>
  </div>
  <div class="grid-16 alpha omega">
<?php print $content['bottom']; ?>
  </div>
</div> 