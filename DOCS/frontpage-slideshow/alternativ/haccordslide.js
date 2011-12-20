/**
 * haccordslide - jQuery plugin showing up a horizontal image-accordion.
 * @requires jQuery v1.4 or above
 *
 * Copyright (c) 2011 Felix Hofmann
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 * Version: 0.1.
 */

(function( $ ) {
  var methods = {
    init : function( options ) {
      // some default options
      var options = $.extend({
        maxWidth :    '62%',
        slideEasing : 'easInSine',
        eDuration : 400,
        teaser : null
      }, options);
      
      return this.each(function(){
        var container = $(this);
        var slides = container.children();
        var wrapperWidth;
        var medWidth;
        var minWidth;
        var currentIndex;        
        
        // All slides to be collapsed with specific css-class.
        slides.each(function( i ){
          $(this)
          .addClass('slide')
          .css({
            //width: medWidth + 'px', 
            //left: i*medWidth,
            'z-index': i+1
          })
          .bind('mouseenter.haccordslide', methods.animateSlides)
          .bind('mouseleave.haccordslide', methods.animateSlides);
        });
      });
    }, // end init
    animateSlides : function( e ) {
      var currentIndex = $(this).index();
      // e.type
      $(this).toggleClass('active');
      
    } // end animateSlides
   
      
   
  };






















  $.fn.haccordslide = function( method ) {
    // Method calling logic
    if ( methods[method] ) {
      return methods[ method ].apply( this, Array.prototype.slice.call( arguments, 1 ));
    } else if ( typeof method === 'object' || ! method ) {
      return methods.init.apply( this, arguments );
    } else {
      $.error( 'Method ' +  method + ' does not exist on jQuery.haccordslide' );
    } 
  };
})( jQuery );