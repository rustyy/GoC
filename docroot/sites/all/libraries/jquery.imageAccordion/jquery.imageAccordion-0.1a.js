/**
 * ImageAccordion - jQuery plugin showing up a horizontal image-accordion.
 * @requires jQuery v1.4 or above
 *
 * Copyright (c) 2011 Felix Hofmann
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 * Version: 0.1a
 *
 * @ToDo: - looping by time
 *        - ie-test
 *        - round widths Math.round()
 *        - scale images inside slides
 *        - chaining for teaser
 *
 */

;
(function($) {
  jQuery.fn.imageAccordion = function(arg) {
    var o = $.extend({},$.fn.imageAccordion.defaults,arg);
    return this.each(function() {
      var accordion,
      accordionWidth,
      accordionCss = {},
      slides,             // All slides inside container.
      slidesAmount,       // Count all slides.
      slidesCss = {},
      slidesMed,          // medWidth is the slider-elements width, when all are collapsed.
      slidesMax,          // maxWidth is the maximum dimension a slider can grow.
      slidesMin,          // minWidth is the width all sibling sliders have, if one is shown max/active.
      slidesImages,
      slidesCurrentIndex, // The index of the active slide.
      imgHeight;

      /**
       * INIT
       */
      accordion = $(this);
      slides = accordion.children();
      slidesAmount = slides.length;
      slidesImages = slides.find('img');

      if (o.accordionWidth !== null) {
        accordionWidth = o.accordionWidth;
      }
      else {
        accordionWidth = accordion.width();
      }

      slidesMed = accordionWidth / slidesAmount;
      slidesMax = accordionWidth * o.slidesMaxRatio;
      slidesMin = (accordionWidth - slidesMax) / (slidesAmount - 1);

      slidesCss.height = slidesImages.eq(0).height() + 'px';
      accordionCss.height = slidesCss.height

      accordionCss.overflow = 'hidden';
      accordionCss.position = 'relative';
      accordionCss.width = accordionWidth + 'px';
      accordion.css(accordionCss);

      slidesCss.width = slidesMed + 'px';
      slidesCss.position = 'absolute';
      // All slides to be collapsed with specific css.
      slides.each(function( i ){
        $(this)
        .addClass('slide slide-' + i)
        .css({
          'width' : slidesCss.width,
          'height' : slidesCss.height + 'px',
          'position' : slidesCss.position,
          'left' : i * slidesMed,
          'z-index': i + 1,
          'overflow' : 'hidden'
        });
      });





















      // Mouseenter.
      slides.stop(true,true).mouseenter(function(){
        slidesCurrentIndex = $(this).index();
        // Add css-class 'active' and push active Slide to maximum and reduce
        // the left-attribute to the width of elements before.
        // eg. currentIndex = 2, minWidth=42 -> left=84px
        $(this)
        .animate({
          width: slidesMax + 'px',
          left: slidesMin * slidesCurrentIndex + 'px'
        },{
          queue: false,
          duration: o.duration,
          easing: o.sliderEasing,
          complete: animateTeaser($(this), "mouseenter")
        })
        .toggleClass('active');
        // Morph the siblings.
        $(this).siblings().each(function( i ){
          // Is sibling before active slide?
          if (i < slidesCurrentIndex) {
            left = i * slidesMin;
          }
          // If not, add maxWidth.
          else {
            left = slidesMax + (i * slidesMin);
          }
          // Animate siblings.
          $(this).animate({
            width: slidesMin + 'px',
            left: left + 'px'
          }, {
            queue: false,
            duration: o.duration,
            easing : o.sliderEasing
          });
        });
      });
      // Mouseleave
      slides.stop(true, true).mouseleave(function(){
        // Remove 'active'-class and shrink former active slide
        // to its ancestral size and position.
        $(this)
        .animate({
          width: slidesMed + 'px',
          left: slidesMed * slidesCurrentIndex + 'px'
        }, {
          queue: false,
          duration: o.duration,
          easing : o.sliderEasing,
          complete: animateTeaser($(this), "mouseleave")
        })
        .toggleClass('active');
        // Move all siblings to their ancestral size and postion.
        $(this).siblings().each(function( i ){
          // Check if former active slide is reached.
          if (i < slidesCurrentIndex) {
            left= i * slidesMed;
          }
          // If former active slide is passed, we have to 'jump' one slide ahead.
          else {
            left = (i+1) * slidesMed;
          }
          // Animate siblings with proper values.
          $(this).animate({
            width: slidesMed + 'px',
            left: left + 'px'
          }, {
            queue: false,
            duration: o.duration,
            easing: o.sliderEasing
          });
        });
      });

      function animateTeaser(obj, e) {
        if (e === "mouseenter" && o.teaser != null) {
          $(o.teaser, obj).stop(true, true).fadeIn('slow');
        }
        if (e === "mouseleave" && o.teaser != null) {
          $(o.teaser, obj).stop(true, true).fadeOut('slow');
        }
      }
    });
  };

  // Default values.
  $.fn.imageAccordion.defaults = {
    slidesMaxRatio : 0.618, // Range from 0.1 to 0.9
    sliderEasing : 'swing',
    duration : 500,
    teaser : null,
    accordionWidth: null
  };
})(jQuery);