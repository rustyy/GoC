(function ($) {
    Drupal.behaviors.goc = {
        attach: function (context, settings) {
            $('#navigation', context).stickyMenu();

            $('.view-display-id-vp_slideshow .view-content .views-row', context).addClass('slide');

            $('.view-display-id-vp_slideshow .view-content', context).imageAccordion({teaser: '.slide-teaser'});

            if ((navigator.userAgent.match(/iPhone/i))
                || (navigator.userAgent.match(/Android/i))
                || (navigator.userAgent.match(/Windows Phone/i))
                || (navigator.userAgent.match(/BlackBerry/i))) {
                window.location = "http://phone.dev.gamesoncampus.de";
            }
        }
    };

}(jQuery));