$(document).ready(function() {
  
  var slideAmount = $("#slideshow").children().length;
  var wrapperWidth = $("#slideshow").width();
  var minWidth = $("#slideshow").width() / slideAmount;
  var maxWidth = 420;
  var currentIndex;

  // all slides to be collapsed with specific css
  $("#slideshow .slide").each(function( i ){
    $(this).css({
      width: minWidth + 'px', 
      left: i*minWidth,
      'z-index': i+1
    });
  });
  // mouseenter
  $("#slideshow .slide").mouseenter(function(){
    currentIndex = $(this).index();
    $(this).animate({
      width: maxWidth + 'px', 
      left: ((wrapperWidth - maxWidth)/slideAmount) * $(this).index() + 'px'
    },{
      queue: false, 
      duration: 300
    });

    $(this).siblings().each(function(i){
      //console.log('siblingi: ' + i + '/// currentI: ' + currentIndex);
      if (i <= currentIndex) {
        left = i*((wrapperWidth - maxWidth)/slideAmount);
      }
      else{
      // ...
      }
      
      console.log(left);
      
      $(this).animate({
        width: (wrapperWidth - maxWidth)/slideAmount + 'px'
        
      }, {
        queue: false, 
        duration: 300
      });
    });

  // Mouseleave
  }).mouseleave(function(){
    
    i = $(this).index();
    $(this).animate({
      width: minWidth + 'px', 
      left: minWidth * i + 'px'
    }, {
      queue: false, 
      duration: 300
    });
    $(this).siblings().each(function(){
      $(this).animate({
        width: minWidth + 'px'
      }, {
        queue: false, 
        duration: 300
      });
    });
  });
  
  
  

});