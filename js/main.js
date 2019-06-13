$(document).ready(function() {

	$('.site-title a').smoothScroll({
		offset: -160,
		afterScroll: function() {
			$("li").removeClass("active");
			$(this).parent().addClass('active');
		}
	});

	$('.nav a').smoothScroll({
		afterScroll: function() {
			$("li").removeClass("active");
			$(this).parent().addClass('active');
		}
	});

	// $('.site-title a').click(function() {
	// 	$.smoothScroll({
	//     	offset: -160
	//   	});
	//   return false;
	// });

});

