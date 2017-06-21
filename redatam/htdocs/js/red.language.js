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
	document.location.href = '/redatam/es/index.html';
}
else if ( language.indexOf( 'fr' ) > -1 )
{
	document.location.href = '/redatam/fr/index.html';
}
else if ( language.indexOf( 'pt' ) > -1 )
{
	document.location.href = '/redatam/pt-br/index.html';
}
else
{
	document.location.href = '/redatam/en/index.html';
}

