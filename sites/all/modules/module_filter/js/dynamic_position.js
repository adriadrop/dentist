(function($) {

Drupal.behaviors.moduleFilterDynamicPosition = {
  attach: function() {
    var $window = $(window);
    $window.scroll(function() {
      var $tabs = $('#module-filter-tabs');
      var $submit = $('#module-filter-submit');

      // Vertical movement.
      var top = $tabs.offset().top;
      var bottom = top + $tabs.height();
      var windowHeight = $window.height();
      var topOffset = Drupal.settings.tableHeaderOffset ? eval(Drupal.settings.tableHeaderOffset + '()') : 0;
      if (((bottom - windowHeight) > ($window.scrollTop() - $submit.height())) && $window.scrollTop() + windowHeight - $submit.height() - $('li:first', $tabs).height() > top) {
        $submit.css('margin-top', 0);
        $submit.removeClass('fixed-top').addClass('fixed fixed-bottom');
      }
      else if (bottom < ($window.scrollTop() + topOffset)) {
        $submit.css('margin-top', topOffset);
        $submit.removeClass('fixed-bottom').addClass('fixed fixed-top');
      }
      else {
        $submit.css('margin-top', 0);
        $submit.removeClass('fixed fixed-bottom fixed-top');
      }

      // Horizontal movement.
      if ($submit.hasClass('fixed-bottom') || $submit.hasClass('fixed-top')) {
        var left = $tabs.offset().left - $window.scrollLeft();
        if (left != $submit.offset().left - $window.scrollLeft()) {
          $submit.css('left', left);
        }
      }
    });
    $window.trigger('scroll');
    $window.resize(function() {
      $window.trigger('scroll');
    });
  }
};

})(jQuery);
