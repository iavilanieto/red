[INFOGROUP]
CAPTION=INFORMATION
NODETYPE=STRUCTURE
NODES=3
NODE1=DICGROUP
NODE2=PROGGROUP
NODE3=HELPGROUP

*---------------------------------------------------------------------------
[DICGROUP]
CAPTION=Information du Dictionnaire
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
CAPTION=Toutes les Variables
PAGETYPE=Dictionary

TITLE=Dictionnaire de la Base de Données
MODE=SHORT

[DICGEO]
CAPTION=Variables Géographiques
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=COMMUNE DISTRICT AIRE BLOCK ZONE90 SECTEUR AGROSEGM

[DICVIV]
CAPTION=Variables de Logement
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=LOGEM

[DICPOB]
CAPTION=Variables de Personnes
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=PERSON

[DICCATVIV]
CAPTION=Catégories de Logements
PAGETYPE=Dictionary

PROCESSTITLE=-- Choisir une ou plusieurs Variables (apuyer la touche Controle) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=LOGEM

[DICCATPOB]
CAPTION=Catégories de Personnes
PAGETYPE=Dictionary

DEFAULTVALUE=-- Choisir une ou plusieurs Variables (apuyer la touche Controle) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=PERSON

*---------------------------------------------------------------------------
[PROGGROUP]
NODETYPE=STRUCTURE
CAPTION=Programmation Redatam
NODES=3
NODE1=PROGRED
NODE2=DOWNDIC
NODE3=DOWNRPSP

[PROGRED]
CAPTION=Programme Process R+SP
PAGETYPE=CmdSet

TITLE=Ecrivez le Programme Redatam+SP

[DOWNDIC]
PAGETYPE=Download
CAPTION=Téléchargez le Dictionnaire R+SP
FILENAME=RpBases\NMIR\BaseR\NMirFra.dic

[DOWNRPSP]
PAGETYPE=DisplayHtml
CAPTION=Téléchargez le logiciel R+SP
FILENAME=http://www.cepal.org/redatam/
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
CAPTION=Page Principale Redatam
FILENAME=http://www.cepal.org/redatam/
NEWPAGE=YES

*---------------------------------------------------------------------------
