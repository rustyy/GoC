(function ($) {
  Drupal.behaviors.goc = {
    attach: function (context, settings) {
      $('#navigation', context).stickyMenu();
      $('.view-display-id-vp_slideshow .view-content', context).imageAccordion({teaser : '.slide-teaser'});
    }
  };

}(jQuery));