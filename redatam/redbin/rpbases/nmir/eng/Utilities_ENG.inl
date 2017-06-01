[INFOGROUP]
CAPTION=INFORMATION
NODETYPE=STRUCTURE
NODES=3
NODE1=DICGROUP
NODE2=PROGGROUP
NODE3=HELPGROUP

*---------------------------------------------------------------------------
[DICGROUP]
CAPTION=Dictionary Information
NODETYPE=STRUCTURE
NODES=7
NODE1=DICALL
NODE2=DICGEO
NODE3=DICVIV
NODE4=DICPOB
NODE5=*
NODE6=DICCATVIV
NODE7=DICCATPOB

[DICALL]
CAPTION=All Variables
PAGETYPE=Dictionary

TITLE=Database Dictionary
MODE=SHORT

[DICGEO]
CAPTION=Geographic Variables
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=COUNTY DISTRICT AREA BLOCK ZONE SECTOR AGRISEG

[DICVIV]
CAPTION=Household Variables
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=HOUSIN

[DICPOB]
CAPTION=Person Variables
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=PERSON

[DICCATVIV]
CAPTION=Household Categories
PAGETYPE=Dictionary

PROCESSTITLE=-- Select one or more Variables (press Control key ) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=HOUSIN

[DICCATPOB]
CAPTION=Person Categories
PAGETYPE=Dictionary

DEFAULTVALUE=-- Select one or more Variables (press Control key ) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=PERSON

*---------------------------------------------------------------------------
[PROGGROUP]
NODETYPE=STRUCTURE
CAPTION=Redatam Programming
NODES=3
NODE1=PROGRED
NODE2=DOWNDIC
NODE3=DOWNRPSP

[PROGRED]
CAPTION=Process R+SP Program
PAGETYPE=CmdSet

TITLE=Write Redatam+SP Program

[DOWNDIC]
PAGETYPE=Download
CAPTION=Download  R+SP Dictionary
FILENAME=RpBases\NMIR\BaseR\NMirEng.dic

[DOWNRPSP]
PAGETYPE=DisplayHtml
CAPTION=Download R+SP software
FILENAME=http://www.eclac.org/redatam/
NEWPAGE=YES

*---------------------------------------------------------------------------
[HELPGROUP]
NODETYPE=STRUCTURE
CAPTION=Documentation
NODES=2
NODE1=HELPRPSP
NODE2=INICIO

[HELPRPSP]
PAGETYPE=DisplayHtml
CAPTION=Help
FILENAME=/redatam/RpHelp/

[INICIO]
PAGETYPE=DisplayHtml
CAPTION=Redatam HomePage
FILENAME=http://www.eclac.org/redatam/default.asp?idioma=IN
NEWPAGE=YES

*---------------------------------------------------------------------------
