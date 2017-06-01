[STRUCTURE]
USERCONTROL=YES
GROUPALIGN=LEFT

SERVERTIMEOUT=1800

HTMLPATH=RpSite\

//PORTALLEFTIMAGE=Redatam7_80.png
PORTALTITLE=UNECLAC / CELADE
PORTALSUBTITLE=REDATAM On-Line Process

//PORTALCENTERIMAGE=/redatam/images/LogoRedatam7Prt_520x390.png

//PORTALBACKGROUNDHEADERIMAGE=
//PORTALBACKGROUNDINDEXIMAGE=
//PORTALBACKGROUNDOUTPUTIMAGE=

//Default skeleton pages
HTMLSITEMAIN=RpSiteMain.htm
HTMLHEADER=RpHeader.htm
HTMLINDEX=RpIndex.htm
HTMLOUTPUTEMPTY=RpOutput.htm

//Output Pages
HTMLOUTPUT=RpOutputForm.htm
HTMLDICFILE=RpDictionaryOutputForm.htm

//Input Pages

//Dictionary
HTMLDICQUERY=RpDicQueryInputForm.htm

//Easies
HTMLEASYCROSS=RpEasyCrossInputForm.htm
HTMLEASYLIST=RpEasyListInputForm.htm
//LA 2006.06.28 Multiple Frequencies, previous version included in DictionaryForm
HTMLEASYFREQ=RpEasyFreqInputForm.htm

//Indicators
HTMLFRACTION=RpFractionInputForm.htm
//LA 2006.03.13 QTS Page
HTMLQTS=RpQtsInputForm.htm

//LA 2013.08.21 Deprecated, use RpEasyCrossInputForm
//HTMLSEXRATIO=RpSexRatioInputForm.htm

//LA 2013.08.21 Deprecated, use RpFractionInputForm
//HTMLDEPRATIO=RpDepRatioInputForm.htm

//Aggregated Indicators
HTMLMULTIFILTER=RpMultiFilterInputForm.htm
//LA 2013.08.21 Deprecated, use RpMultiFilterInputForm
//HTMLTRIRECODE=RpTriRecodeInputForm.htm

//Parameters
HTMLINPUTSPC=RpInputSPCForm.htm

///Expression Builder Page, use in Filter Seccion
HTMLEXPBLDER=RpExpBlder.htm

//Redatam+SP Programming
HTMLCMDSET=RpCmdSetInputForm.htm

//Password Access
HTMLLOGIN=RpLogin.html

//LA 2010.03.18
//Show full path of files. Default value is APPLICATION, fixed Redatam+SP WebServer Cross-Site Scripting and Path Disclosure (Secunia Advisory SA38170)
//MODE=DEVELOPMENT

//LA 2010.04.22
//Separate Input/Output pages
HTMLINPUT=RpInputForm.htm

//LA 2013.08.20 Basic Stats of continuous variables, previos versions in EasyFreqInputForm
HTMLSTATS=RpStatsInputForm.htm

//LA 2014.03.21 Multi Crosstabs
HTMLMULTICROSS=RpMultiCrossInputForm.htm

//LA 2014.04.11 Table Style
HTMLOUTPUTTABLE=RpOutputTable.htm

PAGES=1

NODES=1
NODE1=NMIRGROUP

//LA 2011.08.12 Thematic index in other include

#include WebNodes.inl

#include Preferences.inl
#include Panels.inl
#include Pages.inl
