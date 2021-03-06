<?php
/**
 * @file
 * Template file for field_slideshow
 *
 *
 */
?>
<div id="field-slideshow-<?php print $id; ?>-wrapper" class="field-slideshow-wrapper">

  <div class="<?php print $classes; ?>"
       style="width:<?php print $slides_max_width; ?>px; height:<?php print $slides_max_height; ?>px">
    <?php foreach ($items as $num => $item) : ?>
    <div class="<?php print $item['classes']; ?>"<?php if ($num) : ?> style="display:none;"<?php endif; ?>>
      <?php print $item['image']; ?>
      <div class="field-slideshow-image-informations">
        <?php if (isset($item['caption']) && $item['caption'] != '') : ?>
        <div class="field-slideshow-caption-text"><?php print $item['caption']; ?></div>
        <?php endif; ?>
        <?php if (isset($item['copyright']) && !empty($item['copyright'])) : ?>
        <div class="field-slideshow-copyright"><?php print $item['copyright']; ?></div>
        <?php endif; ?>
      </div>
    </div>
    <?php endforeach; ?>
  </div>

  <?php if (!empty($controls)) : ?>
  <div id="field-slideshow-<?php print $id; ?>-controls" class="field-slideshow-controls">
    <a href="#" class="prev"><?php print t('Prev'); ?></a>
    <a href="#" class="next"><?php print t('Next'); ?></a>
  </div>
  <?php endif; ?>

  <?php if (isset($pager) && $pager != '') : ?>

  <?php if ($pager == 'number') : ?>

    <div id="field-slideshow-<?php print $id; ?>-pager"
         class="field-slideshow-pager slides-<?php print count($items); ?>"></div>

    <?php elseif ($pager == 'image' || $pager == 'carousel') : ?>

    <?php if ($pager == 'carousel') : ?>
        <div id="field-slideshow-<?php print $id; ?>-carousel-wrapper" class="field-slideshow-carousel-wrapper">
          <a href="#" class="carousel-prev">«</a>
          <div id="field-slideshow-<?php print $id; ?>-carousel" class="field-slideshow-carousel">
          <?php endif; ?>

    <?php print $thumbnails; ?>

    <?php if ($pager == 'carousel') : ?>
          </div>
          <a href="#" class="carousel-next">»</a>
        </div>
      <?php endif; ?>

    <?php endif; ?>

  <?php endif; ?>

</div>