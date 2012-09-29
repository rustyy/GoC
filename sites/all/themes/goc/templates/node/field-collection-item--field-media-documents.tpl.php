<div class="field-collection-documents-item clearfix">
  <div class="document-file">
    <?php print render($variables['content']['field_fc_document']); ?>
  </div>
  <div class="document-autor">
    <?php print render($variables['content']['field_fc_author']); ?>
  </div>
  <?php if (!empty($link_to_file)) : ?>
  <a href="<?php print $link_to_file; ?>" class="documents-download-button"></a>
  <?php endif; ?>
</div>