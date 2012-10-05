/**
 * ImageAccordion - jQuery plugin showing up a horizontal image-accordion.
 * @requires jQuery v1.4 or above
 *
 * Copyright (c) 2011 Felix Hofmann
 * Dual licensed under the MIT and GPL licenses:
 * http://www.opensource.org/licenses/mit-license.php
 * http://www.gnu.org/licenses/gpl.html
 *
 * Version: 0.2a
 *
 * @ToDo: - looping by time
 *        - ie-test
 *        - round widths Math.round()
 *        - scale images inside slides
 *        - chaining for teaser
 *        - maybe find a better solutions for Mouseover/-enter code?
 *        - show accordion vertical
 *
 */

;
(function ($) {
    jQuery.fn.imageAccordion = function (options) {
        // Create some defaults, extending them with any options that were provided
        var o = $.extend({
            slidesMaxRatio:0.618, // Range from 0.1 to 0.9
            sliderEasing:'swing',
            duration:500,
            teaser:null,
            accordionWidth:null,
            accordionHeight:null
        }, options);

        return this.each(function () {
            var accordion = $(this);
            var initCount = 0;

            // Initialization.
            var init;
            init = function () {
                // Just init the accordion once,
                // we need this due to possibility of multiple images.
                if (initCount) {
                    return false;
                }

                var accCss = {};
                var accHeight, accWidth;
                var slides = $('.slide', accordion);
                var slidesAmount = slides.length;
                var smallestSlide = function () {
                    var h = 5000;
                    $('img', slides).each(function () {
                        if ($(this).height() <= h) {
                            h = $(this).height();
                        }
                    });
                    return h;
                }

                // Set accordions width.
                if (o.accordionWidth) {
                    accWidth = o.accordionWidth;
                }
                else {
                    accWidth = accordion.width();
                }
                // Set accordions height.
                if (o.accordionHeight) {
                    accHeight = o.accordionHeight;
                }
                // If not set by options, we calculate height by the smallest image.
                else {
                    accHeight = smallestSlide();
                }

                accCss = $.extend(accCss, {'width':accWidth + 'px', 'height':accHeight + 'px', 'overflow':'hidden', 'position':'relative'});

                var slideMed = accWidth / slidesAmount;
                var slideMax = accWidth * o.slidesMaxRatio;
                var slideMin = (accWidth - slideMax) / (slidesAmount - 1);

                // General css definitions to be added to each slide.
                var slideCss = {'position':'absolute', 'width':slideMed + 'px', 'overflow':'hidden', 'height':accHeight + 'px'};
                // Add CSS to the slides an show them collapsed.
                slides.each(function (i) {
                    var $this = $(this);
                    // Specific slide css.
                    var thisCss = {'z-index':i + 1, 'left':i * slideMed + 'px'};
                    // Merge general and specific css definitions.
                    $.extend(thisCss, slideCss);
                    // Add a unique class and css to each slide.
                    $this.addClass('slide-' + i).css(thisCss);
                });

                //console.log(o);
                // Mouseenter.
                slides.stop(true, true).mouseenter(function () {
                    slideCurrentIndex = $(this).index();
                    // Add css-class 'active' and push active Slide to maximum and reduce
                    // the left-attribute to the width of elements before.
                    // eg. currentIndex = 2, minWidth=42 -> left=84px

                    $(this)
                        .animate({
                            width:slideMax + 'px',
                            left:slideMin * slideCurrentIndex + 'px'
                        }, {
                            queue:false,
                            duration:o.duration,
                            easing:o.sliderEasing,
                            complete:animateTeaser($(this), "mouseenter")
                        })
                        .toggleClass('active');
                    // Morph the siblings.
                    $(this).siblings().each(function (i) {
                        // Is sibling before active slide?
                        if (i < slideCurrentIndex) {
                            left = i * slideMin;
                        }
                        // If not, add maxWidth.
                        else {
                            left = slideMax + (i * slideMin);
                        }
                        // Animate siblings.
                        $(this).animate({
                            width:slideMin + 'px',
                            left:left + 'px'
                        }, {
                            queue:false,
                            duration:o.duration,
                            easing:o.sliderEasing
                        });
                    });
                });

                // Mouseleave
                slides.stop(true, true).mouseleave(function () {
                    // Remove 'active'-class and shrink former active slide
                    // to its ancestral size and position.
                    $(this)
                        .animate({
                            width:slideMed + 'px',
                            left:slideMed * slideCurrentIndex + 'px'
                        }, {
                            queue:false,
                            duration:o.duration,
                            easing:o.sliderEasing,
                            complete:animateTeaser($(this), "mouseleave")
                        })
                        .toggleClass('active');
                    // Move all siblings to their ancestral size and postion.
                    $(this).siblings().each(function (i) {
                        // Check if former active slide is reached.
                        if (i < slideCurrentIndex) {
                            left = i * slideMed;
                        }
                        // If former active slide is passed, we have to 'jump' one slide ahead.
                        else {
                            left = (i + 1) * slideMed;
                        }
                        // Animate siblings with proper values.
                        $(this).animate({
                            width:slideMed + 'px',
                            left:left + 'px'
                        }, {
                            queue:false,
                            duration:o.duration,
                            easing:o.sliderEasing
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

                // Add css to accordion-container.
                accordion.css(accCss);

                // Accordion has been initialized, so initCount set to 1.
                initCount = 1;
                return true;
            };

            // If accordion contains images, we are waiting until they are fully loaded.
            if (accordion.find('img')) {
                $('img', accordion).load(init());
            }
            // Otherwise we go ahead.
            else {
                init();
            }
        });
    };
})(jQuery);