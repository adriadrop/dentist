(function($) {
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {

var savings = 0, temp1 = 0, temp2 = 0, var1 = 0, var2 = 0;



$( "#edit-field-prices-all-und-0-field-price-und-0-value" ).focusout(function() {
	var1 = $("#edit-field-prices-all-und-0-field-price-und-0-value").val();
var2 = $("#edit-field-field-price-2-und-0-value").val();
temp1 = var2 - var1;
savings  = Math.round(temp1/var2*100);

    $( "#edit-field-savings-und-0-value" ).val(savings);
  });

  }
};
})(jQuery);