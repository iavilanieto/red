jQuery( document ).ready( function()
{
		var level2Present = $('.level2').length > 0;

		var top = $( "#root" ).accordion( { autoHeight: false, autoWidth: false, heightStyle: "content" } );

		$( '#root' ).children().each( function( index )
  	{
  		var top = $(this);

  		var level2Present = $('.level2', top ).length>0;

  		if( level2Present )
  		{
  			$( ".level1", top ).accordion( {autoHeight: false, autoWidth: false, heightStyle: "content" } );
  		}
		
  	});
                
    $('#root a').click( function( eventObject )
  	{
  		  $('#root a').removeClass('selected');
		  	$(this).addClass('selected');
		});

	$('#root a').mouseover( function()
		{
	  $(this).addClass('active');
	});

	$('#root a').mouseout( function()
	{
	  $(this).removeClass('active');
	});
});

