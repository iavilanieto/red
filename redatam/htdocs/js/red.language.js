if ( navigator.appName == 'Microsoft Internet Explorer' ) 
{
	var language = navigator.browserLanguage; 
}
else 
{
	var language = navigator.language; 
}

if ( language.indexOf( 'es' ) > -1 )
{
	document.location.href = '/redatam/index.es.html'; 
}	
else if ( language.indexOf( 'fr' ) > -1 )
{
	document.location.href = '/redatam/index.fr.html'; 
}
else if ( language.indexOf( 'pt' ) > -1 )
{
	document.location.href = '/redatam/index.pt.html'; 
}	
else
{
	document.location.href = '/redatam/index.en.html'; 
}	

