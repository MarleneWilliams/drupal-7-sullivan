/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function(e,t,n,r,i){t.behaviors.customToolbar={attach:function(t,r){if(e("body").hasClass("toolbar")){console.log("Testing console");e(n,t).resize(function(){var t=e("div#toolbar").height();e(".region-user").css("top",t+"px")})}}}})(jQuery,Drupal,this,this.document);