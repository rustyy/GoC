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
(function ($) {
    jQuery.fn.stickyMenu = function (arg) {
        var o = $.extend({}, $.fn.stickyMenu.defaults, arg);

        return this.each(function () {
            var menu = $(this);
            var baseCSS = {};
            var menuOffset;

            // Add some CSS for menu-wrapper.
            $.extend(baseCSS, {'height':menu.height() + 'px'});
            $.extend(baseCSS, {'width':menu.width() + 'px'});

            // Wrap the menu to deal with scrolling later on.
            menu.wrap('<div class="sticky-menu-wrapper" />');
            var wrapper = menu.parent('.sticky-menu-wrapper');

            // Add basic css defintions to menu and its wrapper.
            wrapper.css(baseCSS);
            menu.css(baseCSS);

            // Get the offset of the menu to the top of the page.
            var offset = wrapper.offset();

            // Add Dropshadow if set.
            if (o.shadow) {
                var shadowCSS = {
                    'top':baseCSS.height,
                    'width':baseCSS.width
                }

                menu.after('<div class="sticky-menu-shadow" />');
                var shadow = menu.parent().find('.sticky-menu-shadow');
                shadow.css(shadowCSS);
                shadow.hide();
            }
            // If document is scrolled.
            $(document).scroll(function () {
                var document = $(this);
                // If document is is scrolled more than the menus offset, we need to set it fixed.
                if (document.scrollTop() >= offset.top) {
                    menu.css($.extend({}, baseCSS, {'position':'fixed', 'z-index':'400', 'top':'0'}));
                    // Show shadow if set in options.
                    if (o.shadow) {
                        shadow.show();
                    }
                }
                // Otherwise, reset style-attribute, because menu is already visible.
                else {
                    menu.attr({'style':''});
                    // Hide shadow, if set in options.
                    if (o.shadow) {
                        shadow.hide();
                    }
                }
            });
        });
    };

    $.fn.stickyMenu.defaults = {
        shadow:true
    };
})(jQuery);