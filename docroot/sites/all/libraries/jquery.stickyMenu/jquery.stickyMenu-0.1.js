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
    var o = $.extend({},$.fn.stickyMenu.defaults,arg);
    
    return this.each(function() {

      var stickyMenu = $(this);
      var stickyMenuCSS = {};
      var stickyMenuOffset;

      // Wait until all images are loaded,
      // otherwise we get some strange behaviour on webkit-browsers.
      $(window).load(function() {
        stickyMenuOffset= stickyMenu.offset()
      });

      stickyMenuCSS.height = stickyMenu.height();
      stickyMenuCSS.width = stickyMenu.width();
      stickyMenu.css(stickyMenuCSS);
      stickyMenu.wrap('<div class="sticky-menu-wrapper" />');

      $(document).scroll(function(){
        var docScrollTop = $(this).scrollTop();
        
        //console.log(stickyMenuOffset.top);
        if (docScrollTop >= stickyMenuOffset.top) {
          $('.sticky-menu-wrapper').css({
            'width' : stickyMenuCSS.width + 'px',
            'height' : stickyMenuCSS.height + 'px',
            'overflow' : 'hidden'
          });
          stickyMenu.css({
            'width' : stickyMenuCSS.width + 'px',
            'height' : stickyMenuCSS.height + 'px',
            'position' : 'fixed',
            'top' : 0,
            'z-index' : 1000,
            'overflow' : 'hidden'
          });
        }
        else {
          stickyMenu.attr('style', '');
        }
      });

    });
    
  };

  $.fn.stickyMenu.defaults = {
    shadow : true
  };
})(jQuery);