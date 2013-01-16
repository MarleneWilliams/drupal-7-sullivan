/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  // Handle user toolbar when user is admin and have admin toolbar enabled.
  Drupal.behaviors.customToolbar = {
    attach: function(context, settings) {
      if ($('body').hasClass('toolbar')) {
        var toolbarHeight = $('div#toolbar').height();
        $('.region-user').css('top', toolbarHeight + 'px');
        // $(window, context).resize(function() {
        //   console.log('Testing console');
        //   $('.region-user').css('top', toolbarHeight + 'px');
        // });
      }
    }
  };

})(jQuery, Drupal, this, this.document);
