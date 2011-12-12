/**
 * @ToDo: - looping by time
 *        - create jquery-plugin
 *        - ie-test
 *        - round widths Math.round()
 *        - make some things dynamic (eg maxwidth, heights, duration)
 *        - implement easing
 *        - scale images inside slides
 */

$(document).ready(function() {
  // All slides inside container.
  var slides = $("#slideshow").children();
  // Count all slides.
  var slideAmount = slides.length;
  // Get containerwidth.
  var wrapperWidth = $("#slideshow").width();
  // medWidth is the slider-elements, when all of them are collapsed.
  var medWidth = $("#slideshow").width() / slideAmount;
  // maxWidth is the maximum dimension a slider can grow.
  var maxWidth = 420;
  // minWidth is the width all sibling sliders have, if one is shown max/active.
  var minWidth = (wrapperWidth - maxWidth) / (slideAmount - 1);
  // The index of the active slide.
  var currentIndex;


  // All slides to be collapsed with specific css.
  slides.each(function( i ){
    $(this)
    .addClass('slide')
    .css({
      width: medWidth + 'px', 
      left: i*medWidth,
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
        duration: 400
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
        duration: 400
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
        duration: 400
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
        duration: 400
      });
    });
  });
});