/**
 * @ToDo: - looping by time
 *        - create jquery-plugin
 *        - ie-test
 *        - round widths Math.round()
 *        - make some things dynamic (eg maxwidth, heights, duration)
 *        - implement easing
 */

$(document).ready(function() {
  
  // Get all slides available.
  var slideAmount = $("#slideshow").children().length;
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
  $("#slideshow .slide").each(function( i ){
    $(this).css({
      width: medWidth + 'px', 
      left: i*medWidth,
      'z-index': i+1
    });
  });

  // mouseenter
  $("#slideshow .slide").mouseenter(function(){
    currentIndex = $(this).index();
    // Push active Slide to maximum and reduce 
    // the left-attribute to the width of elements before.
    // eg. currentIndex = 2, minWidth=42 -> left=84px
    $(this).animate({
      width: maxWidth + 'px',
      left: minWidth * currentIndex + 'px'
    },{
      queue: false, 
      duration: 400
    });
    
    // Morph the siblings.
    $(this).siblings().each(function(i){
      // Is sibling before acitve slide?
      if (i < currentIndex) {
        left = i * minWidth;
      }
      // If not, add maxWidth.
      else {
        left = maxWidth + (i * minWidth);
      }
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
  $("#slideshow .slide").mouseleave(function(){

    $(this).animate({
      width: medWidth + 'px', 
      left: medWidth * currentIndex + 'px'
    }, {
      queue: false, 
      duration: 400
    });
    
    $(this).siblings().each(function(i){
      if (i < currentIndex) {
        left= i * medWidth;
      }
      else {
        left = (i+1) * medWidth;
      }
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