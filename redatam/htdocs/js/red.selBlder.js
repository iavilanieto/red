function detail( number )
{
  document.SELECTION.action='Selection';
  document.SELECTION.NODE.value=number;
  document.SELECTION.submit( );

  return false;
}

function check( obj, num )
{
  document.SELECTION.CURCHECK.value=num;
  document.SELECTION.CURCHECKVALUE.value=obj.checked?'SEL':'UNSEL';
  document.SELECTION.action='Selection';
  document.SELECTION.submit( );
}

function validar( )
{
  var output = document.SELECTION.seltext.value;
  opener.document.forms[0].INLINESELECTION.value = output;
  opener.focus( );
  window.close( );
}

