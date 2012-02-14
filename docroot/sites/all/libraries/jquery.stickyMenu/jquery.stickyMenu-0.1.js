/**
 * stickyMenu - jQuery plugin that sticks menu at the top of the page while scrolling.
 * @requires jQuery v1.4 or above
 *
 * Copyright (c) 2012 Felix Hofmann
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 * Version: 0.1
 * 
 * 
 */

;
(function($) {
  jQuery.fn.stickyMenu = function(arg) {
    var options = $.extend({},$.fn.stickyMenu.defaults,arg);
    return this.each(function() {
      var stickyMenu = $(this);
      var stickyMenuCSS = {};
      var stickyMenuOffset = stickyMenu.offset();

      stickyMenuCSS.height = stickyMenu.height();
      stickyMenuCSS.width = stickyMenu.width();

      stickyMenu.css(stickyMenuCSS);
      stickyMenu.wrap('<div class="sticky-menu-wrapper" />');

      $(document).scroll(function(){
        var docScrollTop = $(this).scrollTop();
        if (docScrollTop >= stickyMenuOffset.top) {
          $('body .sticky-menu-wrapper').css({
            'position' : 'fixed',
            'top' : 0
          });
        }
        else {
          $('body .sticky-menu-wrapper').attr('style', '');
        }
      });

    });
  };

  $.fn.stickyMenu.defaults = {};
})(jQuery);