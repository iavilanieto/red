function trim( inputString )
{
  // Removes leading and trailing spaces from the passed string. Also removes
  // consecutive spaces and replaces it with one space. If something besides
  // a string is passed in (null, custom object, etc.) then return the input.
  if ( typeof inputString != "string" )
  {
 	   return inputString;
  }

	var retValue = inputString;
  var ch       = retValue.substring( 0, 1 );

  while ( ch == " " )
  { // Check for spaces at the beginning of the string
   	retValue = retValue.substring( 1, retValue.length );
   	ch       = retValue.substring( 0, 1 );
	}

  ch = retValue.substring( retValue.length-1, retValue.length );
  while ( ch == " " )
  { // Check for spaces at the end of the string
		retValue = retValue.substring( 0, retValue.length-1 );
    ch       = retValue.substring( retValue.length-1, retValue.length );
	}

  while ( retValue.indexOf("  ") != -1 )
  { // Note that there are two spaces in the string - look for multiple spaces within the string
   	retValue = retValue.substring( 0, retValue.indexOf("  ") ) + retValue.substring( retValue.indexOf("  ") + 1, retValue.length ); // Again, there are two spaces in each of the strings
  }

  return retValue; // Return the trimmed string back to the user
} // Ends the "trim" function

function update( )
{
  var output = document.forma.FILTER_TXT.value;
  opener.document.forms[0].TEXT_FILTER.value = trim( output );
  opener.focus( );
  window.close( );
}

function storeCaret( textEl )
{
  if( textEl.createTextRange )
  {
    textEl.caretPos = document.selection.createRange( ).duplicate( );
  }
}

function insertAtCaret( textEl, text )
{
  if (textEl.createTextRange && textEl.caretPos)
  {
  	var caretPos = textEl.caretPos;
    caretPos.text = caretPos.text.charAt( caretPos.text.length-1 ) == ' ' ? text + ' ' : text;
  }
  else
  {
  	textEl.value  = textEl.value + text;
  }
}

function DetalleEntidad( )
{
  var forma = document.forma;

  var ent = forma.SEL_ENTITY.options[ forma.SEL_ENTITY.selectedIndex ].value;
  forma.submit( );
}

function Operacion( btn,simbolo )
{
  var txt = simbolo+' ';
  insertAtCaret( document.forma.FILTER_TXT,txt );
}

function AddLabel( )
{
  var forma = document.forma;

  if( forma.SEL_LABELS.options[ forma.SEL_LABELS.selectedIndex ].value=='-XL' )
  {
  	return ;
  }

  var txt = forma.SEL_LABELS.options[ forma.SEL_LABELS.selectedIndex ].value + ' ';

  insertAtCaret( document.forma.FILTER_TXT,txt );
}

function AddEntity( )
{
  var forma = document.forma;

  if( forma.SEL_ENTITY.options[ forma.SEL_ENTITY.selectedIndex ].value=='-XE' )
  {
    return ;
  }

  var txt = forma.SEL_ENTITY.options[ forma.SEL_ENTITY.selectedIndex ].value + ' ';

  insertAtCaret( forma.FILTER_TXT,txt );
}

function AddVariable( )
{
  var ent;

  var forma = document.forma;

  if( forma.SEL_VARIABLE.options[ forma.SEL_VARIABLE.selectedIndex ].value=='-XV' )
  {
    return ;
  }

	if( forma .SEL_ENTITY.options[ forma.SEL_ENTITY.selectedIndex ].value=='-XE' )
  {
  	ent = '';
  }
  else
  {
  	ent = forma.SEL_ENTITY.options[ forma.SEL_ENTITY.selectedIndex ].value+'.';
  }

  var txt = ent + forma .SEL_VARIABLE.options[ forma.SEL_VARIABLE.selectedIndex ].value + ' ';

  insertAtCaret( document.forma.FILTER_TXT,txt );
}
