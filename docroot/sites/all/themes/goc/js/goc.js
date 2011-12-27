(function ($) {
  Drupal.behaviors.myTab = {
    attach: function (context, settings) {
      $('.image-accordion').ImageAccordion();
    }
  };

  

}(jQuery));