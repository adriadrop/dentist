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

//function to scroll to particula element on page
function scrollToElement(selector, time, verticalOffset) {
	time = typeof(time) != 'undefined' ? time : 1000;
	verticalOffset = typeof(verticalOffset) != 'undefined' ? verticalOffset : 0;
	element = $(selector);
	offset = element.offset();
	offsetTop = offset.top + verticalOffset;
	$('html, body').animate({
		scrollTop: offsetTop
	}, time);
}

//function to retrive GET parametars
function GetURLParameter(sParam)
{
	var sPageURL = window.location.search.substring(1);
	var sURLVariables = sPageURL.split('&');
	for (var i = 0; i < sURLVariables.length; i++) 
	{
		var sParameterName = sURLVariables[i].split('=');
		if (sParameterName[0] == sParam) 
		{
			return sParameterName[1];
		}
	}
}

//function to get current user location
function getLocation() {

	if (navigator.geolocation) {
		navigator.geolocation.getCurrentPosition(showPosition);
	} else {
		alert("Geolocation is not supported by this browser.");
	}
}


function showPosition(position) {
   // alert ("Latitude: " + position.coords.latitude + "<br>Longitude: " + position.coords.longitude); 
   var gglGeocoder = "https://maps.googleapis.com/maps/api/geocode/json?latlng=" + position.coords.latitude + "," + position.coords.longitude;
   //var gglGeocoder = "https://maps.googleapis.com/maps/api/geocode/json?latlng=34.0204989,-118.4117325";
   $.getJSON( gglGeocoder, function( json ) {

   	lat = position.coords.latitude
   	lon = position.coords.longitude
   	address = json.results[0].formatted_address;
   	$( ".views-exposed-widget-extra" ).show();

   });
   
}

var price = 0; 
var tid = 0; 
var lat = 0;
var lon = 0;
var address = "";


$(document).ready(function(){
	$("#button_rec").click(function() {
		scrollToElement('.group_reviews');
	});
	
	$("#button_cont").click(function() {
		scrollToElement('.group_contact');
	});

//added some tracking to links
$("a[rel*='nofollow']").click(function(){
	var url = $(this).attr("href");;
	_gaq.push(['_trackEvent', 'Outgoing', 'Click',url]); 
});

/*
//Hide location widget, preload location
$( ".views-exposed-widget-extra" ).hide();
getLocation();


// Find user location and make a search with it
$( ".views-exposed-widget-extra" ).click(function() {
//Get other widgets current values
tid = $('#edit-taxonomy-entity-index-tid-depth').val();
price = $('#edit-field-price-value').val();
//Load new page with proper variables 
window.location.href = "pretraga?distance[search_field]=" + address + "&distance[latitude]=" + lat + "&distance[longitude]=" + lon + "&taxonomy_entity_index_tid_depth=" + tid + "&field_price_value=" + price;
return false;
});
*/

});

})(jQuery, Drupal, this, this.document);
