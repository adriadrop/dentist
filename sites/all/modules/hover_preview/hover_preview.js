/**
 * @file
 * JavaScript for the Hover Preview module.
 */
(function ($) {

/**
 * Drupal Hover Preview behavior.
 */
Drupal.behaviors.hoverPreview = {
  attach: function (context, settings) {

    // Register the Image Preview action.
    $('img.hover-preview-imgpreview', context).once('hover-preview-imgpreview', function() {
      // Use the imgPreview jQuery plugin to preview the images.
      $(this).imgPreview({
        srcAttr: 'data-hover-preview',
        containerID: 'hover-preview-imgpreview'
      });
    });

    // Register the Image Replacement action.
    $('img.hover-preview-replace', context).once('hover-preview-replace', function() {
      // Use the imghover jQuery plugin to fade in the other image.
      $(this).imghover({
        src: $(this).attr('data-hover-preview'),
        fade: true,
        preload: true
      });
    });

  }
};

})(jQuery);
