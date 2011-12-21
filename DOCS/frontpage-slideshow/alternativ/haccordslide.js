/**
 * ImageAccordion - jQuery plugin showing up a horizontal image-accordion.
 * @requires jQuery v1.4 or above
 *
 * Copyright (c) 2011 Felix Hofmann
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 * Version: 0.1.
 * 
 * @ToDo: - looping by time
 *        - ie-test
 *        - round widths Math.round()
 *        - make some things dynamic (eg maxwidth, heights, duration)
 *        - implement easing
 *        - scale images inside slides
 *        - chaining for teaser
 * 
 */

(function( $ ) {
  var methods = {
    init : function( o ) {
      // some default options
      var o = $.extend({
        maxWidth : 62,
        unit : 'px',
        slideEasing : 'swing',
        eDuration : 400,
        teaser : null
      }, o);
      
      return this.each(function(){
        var container = $(this);
        // All slides inside container.
        var slides = container.children();
        // Count all slides.
        var slidesAmount = slides.length;
        // Get containerwidth.
        var wrapperWidth = container.width();
        // medWidth is the slider-elements, when all of them are collapsed.
        var medWidth = container.width() / slidesAmount;
        // maxWidth is the maximum dimension a slider can grow.
        var maxWidth = 420;
        // minWidth is the width all sibling sliders have, if one is shown max/active.
        var minWidth = (wrapperWidth - maxWidth) / (slidesAmount - 1);
        // The index of the active slide.
        var currentIndex;
  
        var slideEasing = 'easeInSine';
  
        function test(obj) {
          $('.slide-teaser', obj).show('slow');
    
        }
  
        function test2(obj) {
          $('.slide-teaser', obj).hide('slow');
    
        }

        // All slides to be collapsed with specific css.
        slides.each(function( i ){
          $(this)
          .addClass('slide')
          .css({
            'width' : medWidth + 'px', 
            'left' : i*medWidth,
            'position' : 'absolute',
            'z-index': i+1
          });
        });
        // Mouseenter.
        slides.mouseenter(function(){
          currentIndex = $(this).index();
          // Add css-class 'active' and push active Slide to maximum and reduce
          // the left-attribute to the width of elements before.
          // eg. currentIndex = 2, minWidth=42 -> left=84px
          $(this)
          .toggleClass('active')
          .animate({
            width: maxWidth + 'px',
            left: minWidth * currentIndex + 'px'
          },{
            queue: false, 
            duration: 400,
            easing: slideEasing,
            complete: test($(this))
          });
          // Morph the siblings.
          $(this).siblings().each(function( i ){
            // Is sibling before acitve slide?
            if (i < currentIndex) {
              left = i * minWidth;
            }
            // If not, add maxWidth.
            else {
              left = maxWidth + (i * minWidth);
            }
            // Animate siblings.
            $(this).animate({
              width: minWidth + 'px',
              left: left + 'px'
            }, {
              queue: false, 
              duration: 400,
              easing : slideEasing
            });
          });
        });  
  
        // Mouseleave
        slides.mouseleave(function(){
          // Remove 'active'-class and shrink former active slide
          // to its ancestral size and position.
          $(this)
          .toggleClass('active')
          .animate({
            width: medWidth + 'px', 
            left: medWidth * currentIndex + 'px'
          }, {
            queue: false, 
            duration: 400,
            easing : slideEasing,
            complete: test2($(this))
          });
          // Move all siblings to their ancestral size and postion.  
          $(this).siblings().each(function( i ){
            // Check if former active slide is reached.
            if (i < currentIndex) {
              left= i * medWidth;
            }
            // If former active slide is passed, we have to 'jump' one slide ahead.
            else {
              left = (i+1) * medWidth;
            }
            // Animate siblings with proper values.
            $(this).animate({
              width: medWidth + 'px',
              left: left + 'px'
            }, {
              queue: false, 
              duration: 400,
              easing: slideEasing
            });
          });
        });        
      });
    } // end init
  };

  $.fn.ImageAccordion = function( method ) {
    // Method calling logic
    if ( methods[method] ) {
      return methods[ method ].apply( this, Array.prototype.slice.call( arguments, 1 ));
    } else if ( typeof method === 'object' || ! method ) {
      return methods.init.apply( this, arguments );
    } else {
      $.error( 'Method ' +  method + ' does not exist on jQuery.ImageAccordion' );
    } 
  };
})( jQuery );