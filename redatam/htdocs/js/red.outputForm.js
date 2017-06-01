jQuery.ajaxSetup(
{
  'beforeSend' : function( xhr )
  {
    try
    {
      if ( xhr.overrideMimeType )
      {
        //Para Google Chrome y Firefox
        xhr.overrideMimeType( 'text/html; charset=utf-8' );
      }
      else
      {
        //Para IE8
        xhr.setRequestHeader( 'Content-type', 'text/html; charset=utf-8' );
      }
    }
    catch( e )
    {

    }
  }
});

jQuery( document ).ajaxStart( function( )
{
  jQuery( "#redStatusDialog" ).dialog( "open" );
});

jQuery( document ).ajaxStop( function( )
{
  jQuery( "#redStatusDialog" ).dialog( "close" );
});

jQuery( document ).ready( function( )
{
  jQuery( "#redToolbar" ).hide( );

  jQuery( "#redTabs" ).tabs( );
  jQuery( "#redTabs" ).hide( );

  jQuery( "#redError" ).hide( );
  jQuery( "#redImage>img").hide( );

  jQuery( "#redStatusDialog").dialog(
  {
    autoOpen: false,
    modal: true,
    resizable: false,
    height: 100
  });

  $('#title_dummy').hide( );

  var title_d = $('#title_dummy').text( );

  if ( !isBlank( title_d ) )
  {
    //do something
	  $('#main_title').text( title_d );
  }

  $(':submit').button( );
  $(':button').button( );

  $( "#repeat" ).buttonset( );

  var options =
  {
    beforeSubmit:  showRequest,   // pre-submit callback
    success:       showResponse,   // post-submit callback
    error:         showError

    //error: function(xhr) { alert(xhr.responseText); }

    //contentType: "application/x-www-form-urlencoded;charset=ISO-8859-15"
    // other available options:
    //url:       url         // override for form's 'action' attribute
    //type:      type        // 'get' or 'post', override for form's 'method' attribute
    //dataType:  null        // 'xml', 'script', or 'json' (expected server response type)
    //clearForm: true        // clear all form fields after successful submit
    //resetForm: true        // reset the form after successful submit
    // $.ajax options can be used here too, for example:
    //timeout:   3000
  };

  $('div>form').ajaxForm( options );

  // toolbar
  $( "#redToolbar button:first" ).button(
  {
    icons:
    {
      primary: "ui-icon-arrowreturnthick-1-w"
    }
  });

  $('#btnRegresar').click( function( eventObject )
  {
    jQuery( '#redToolbar' ).hide( );
    jQuery( '#redTabs' ).hide( );
    jQuery( '#redInput' ).show( 'slide', {}, 1000 );
    jQuery( '#redError' ).hide( );
  });
});

// pre-submit callback
function showRequest( formData, jqForm, options )
{
  var formElement = jqForm[0];
  var queryString = $.param( formData );

  var txtBoton  = jQuery( '#Help' ).val();
  var indexHelp = queryString.indexOf( txtBoton );

  if( indexHelp >- 1 )
  {
    var url = formElement.action + '?' + queryString;

    // es ayuda
    // alert( url );

    window.location = url;

    return false;
  }

  return true;
}

function showError( xhr )
{
    jQuery( '#redInput').hide( );
    jQuery( '#redTabs' ).hide( );
    jQuery( '#redToolbar' ).hide( );
    jQuery( '#redError' ).show( );
    jQuery( '#redError' ).html( xhr.responseText );

    return;

		//alert( xhr.responseText );
}

// post-submit callback
function showResponse( responseText, statusText, xhr, $form )
{
  // alert( responseText );
  // iframe-->table
  // img   -->image

  jQuery( '#redInput' ).hide( 'slide',{}, 1000 );
  jQuery( '#redToolbar' ).hide( );
  jQuery( '#redTabs' ).show( );

  var hasError = false;

  if( responseText.indexOf('R+SP Error Page') > -1 )
  {
    hasError = true;
  }

  if( hasError )
  {
    jQuery( '#redTabs' ).hide( );
    jQuery( '#redError' ).show( );
    jQuery( '#redError' ).html( responseText );

    return;
  }

  var outputTypeGen = jQuery("select[name=FORMAT] :selected").val( );
  var outputTypeDic = jQuery("#DICTIONARY").val( );
  var outputProgram = jQuery("textarea[name=CMDSET]").val( );
  var outputType    = "NONE";

//  alert( outputTypeGen );

  if( outputTypeDic )
  {
    outputType = "DIC";
  }
  else if( outputProgram )
  {
    outputType = "HTML";
  }
  else if( outputTypeGen )
  {
  	if( outputTypeGen.indexOf( "PVL" ) != -1 )
  	{
    	outputType = "SPC";
  	}
  	else if( outputTypeGen.indexOf( "SUMMARY" ) != -1 )
    {
      outputType = outputTypeGen.replace( "SUMMARY", "HTML" );
    }
    else
    {
    	outputType = outputTypeGen;
    }
  }

//  alert( outputType );

  var outputHTML  = outputType.indexOf( 'HTML' )  != -1 ;
  var outputGRAPH = outputType.indexOf( 'GRAPH' ) != -1 ;
  var outputSPC   = outputType.indexOf( 'SPC' )   != -1 ;
  var outputMAP   = outputType.indexOf( 'MAP' )   != -1 ;
  var outputDIC   = outputType.indexOf( 'DIC' )   != -1 ;

//  alert( responseText );

  var ii1 = responseText.lastIndexOf( '<div id="title_dummy"' );
  var ii2 = responseText.lastIndexOf( '</body>' );

  var src1 = responseText.substring( ii1, ii2 );

//  alert( src1 );

  var newData = jQuery( src1 );

//  alert( newData );

  if( outputHTML )
  {
    // search the iframe object
    var urlFrame = '';

    jQuery('#tab-output').html( "" );

    newData.find('iframe').each( function( index )
    {
      urlFrame = $(this).attr('src');

//      alert( urlFrame );

      var prev = $(this).prev( ).prev();//.children(':first-child');

      jQuery.get( urlFrame, {}, function(response)
      {
        if ( isBlank( prev ) )
        {
        	jQuery('#tab-output').append( '<div>' + response + '</div>' );
        }
        else
        {
        	jQuery('#tab-output').append( '<div><b>' + prev.html( ) + '</b><hr/><br/><br/>' + response + '</div>' );
        }
      });
    });
  }

  // output image, search for img tag
  if( outputGRAPH )
  {
    jQuery('#tab-graphic').html( "" );

    newData.find('img[src^="http"]').each( function( index )
    {
      var src = $(this).attr('src');

      if( src.indexOf('http://') == 0 && src.indexOf('GRAPH') > 0 )
      {
        var img = jQuery('#tab-graphic').append( '<img src=' + src + '></img>' );
      }
    });
  }

  // output image, search for img tag
  if( outputMAP )
  {
    jQuery('#tab-map').html( "" );

    newData.find('img[src^="http"]').each( function( index )
    {
      var src = $(this).attr('src');

      if( src.indexOf('http://')==0 && src.indexOf('MAP')>0 )
      {
        var img = jQuery('#tab-map').append( '<img src=' + src + '></img>' );
      }
    });
  }

  if( outputSPC )
  {
    var ii1 = src1.lastIndexOf( '<div id=program >' );
    var ii2 = src1.lastIndexOf( '</div >' );

    var src2 = src1.substring( ii1, ii2 );

    jQuery('#tab-spc>div').html( src2 );
    // output image, search for img tag
    //var spcCode = jQuery( '<table', newData ).html( );

    //jQuery('#tab-spc>div').html( spcCode );
  }

  if( outputDIC )
  {
    var txt = jQuery( '#redInput', newData ).html( );

    jQuery('#tab-dic>div').html( txt );
  }

  //--------------------------------

  // remove not used tabs
  if( outputDIC == false )
  {
		//jQuery('#redTabs').tabs( "remove" , 4 );
		$( "#redTabs" ).find( ".ui-tabs-nav li:eq(4)" ).remove();
  }
  if( outputMAP == false )
  {
		//jQuery('#redTabs').tabs( "remove" , 3 );
		$( "#redTabs" ).find( ".ui-tabs-nav li:eq(3)" ).remove();

  }
  if( outputSPC == false )
  {
		//jQuery('#redTabs').tabs( "remove" , 2 );
		$( "#redTabs" ).find( ".ui-tabs-nav li:eq(2)" ).remove();
  }
  if( outputGRAPH == false )
  {
		//jQuery('#redTabs').tabs( "remove" , 1 );
		$( "#redTabs" ).find( ".ui-tabs-nav li:eq(1)" ).remove();
  }

  if( outputHTML == false )
  {
		//jQuery('#redTabs').tabs( "remove" , 0 );
		$( "#redTabs" ).find( ".ui-tabs-nav li:eq(0)" ).remove();
  }

	// Refresh the tabs widget
	$( "#redTabs" ).tabs( "refresh" );

	//Go top
	$('html, body').animate({ scrollTop: 0 }, 'fast');
}

function isBlank( pString )
{
    if ( !pString || pString.length == 0 )
    {
        return true;
    }
    // checks for a non-white space character
    // which I think [citation needed] is faster
    // than removing all the whitespace and checking
    // against an empty string
    return !/[^\s]+/.test( pString );
}