[STRUCTURE]
USERCONTROL=YES
GROUPALIGN=LEFT

SERVERTIMEOUT=1800

HTMLPATH=RpSite\

//PORTALLEFTIMAGE=Redatam7_80.png
PORTALTITLE=CELADE/CEPAL, Naciones Unidas
PORTALSUBTITLE=Procesamiento En-Línea con REDATAM

//PORTALCENTERIMAGE=/redatam/images/LogoRedatam7Esp_520x390.png

//PORTALBACKGROUNDHEADERIMAGE=
//PORTALBACKGROUNDINDEXIMAGE=
//PORTALBACKGROUNDOUTPUTIMAGE=

//Default skeleton pages
HTMLSITEMAIN=RpSiteMain.htm
HTMLHEADER=RpHeader.htm
HTMLINDEX=RpIndex.htm
HTMLOUTPUTEMPTY=RpOutput.htm

//Páginas de Salida
HTMLOUTPUT=RpOutputForm.htm
HTMLDICFILE=RpDictionaryOutputForm.htm

//Páginas de Entrada

//Diccionario
HTMLDICQUERY=RpDicQueryInputForm.htm

//Easies
HTMLEASYCROSS=RpEasyCrossInputForm.htm
HTMLEASYLIST=RpEasyListInputForm.htm
//LA 2006.06.28 Frecuencias Múltiples, versiones previas en página DictionaryForm
HTMLEASYFREQ=RpEasyFreqInputForm.htm

//Indicadores
HTMLFRACTION=RpFractionInputForm.htm
//LA 2006.03.13 Página para QTS
HTMLQTS=RpQtsInputForm.htm

//LA 2013.08.21 Utilizar RpEasyCrossInputForm
//HTMLSEXRATIO=RpSexRatioInputForm.htm

//LA 2013.08.21 Utilizar RpFractionInputForm
//HTMLDEPRATIO=RpDepRatioInputForm.htm

//Indicadores Agregados
HTMLMULTIFILTER=RpMultiFilterInputForm.htm

//LA 2013.08.21 Utilizar RpMultiFilterInputForm
//HTMLTRIRECODE=RpTriRecodeInputForm.htm

//Parámetros
HTMLINPUTSPC=RpInputSPCForm.htm

//Constructor de Expresiones, utilizada en la sección de Filtros
HTMLEXPBLDER=RpExpBlder.htm

//Programación Redatam+SP
HTMLCMDSET=RpCmdSetInputForm.htm

//Password
HTMLLOGIN=RpLogin.html

//LA 2010.03.18
//Show full path of files. Default value is APPLICATION, fixed Redatam+SP WebServer Cross-Site Scripting and Path Disclosure (Secunia Advisory SA38170)
//MODE=DEVELOPMENT

//LA 2010.04.22
//Separate Input/Output pages
HTMLINPUT=RpInputForm.htm

//LA 2013.08.20 Estadísticas Básicas de variables contínuas, previamente en EasyFreqInputForm
HTMLSTATS=RpStatsInputForm.htm

//LA 2014.03.21 Multi Crosstabs
HTMLMULTICROSS=RpMultiCrossInputForm.htm

//LA 2014.04.11 Estilo para Tablas
HTMLOUTPUTTABLE=RpOutputTable.htm

PAGES=1

NODES=1
NODE1=NMIRGROUP

//LA 2011.08.12 Indice temático en otro include

#include WebNodes.inl

//Configuraciones globales de páginas

#include Preferences.inl
#include Panels.inl
#include Pages.inl
