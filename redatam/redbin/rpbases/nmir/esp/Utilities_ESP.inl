[INFOGROUP]
CAPTION=INFORMACION
NODETYPE=STRUCTURE
NODES=3
NODE1=DICGROUP
NODE2=PROGGROUP
NODE3=HELPGROUP

*---------------------------------------------------------------------------
[DICGROUP]
CAPTION=Información del Diccionario
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
CAPTION=Todas las Variables
PAGETYPE=Dictionary

TITLE=Diccionario de la Base
MODE=SHORT

[DICGEO]
CAPTION=Variables Geográficas
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=COMUNA DISTRITO AREA MANZAN AGROSEGM

[DICVIV]
CAPTION=Variables de Vivienda
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=VIVIEN

[DICPOB]
CAPTION=Variables de Persona
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=PERSON

[DICCATVIV]
CAPTION=Categorías para variables de Vivienda
PAGETYPE=Dictionary

PROCESSTITLE=-- Seleccione una o más variables (Presione la tecla Ctrl) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=VIVIEN

[DICCATPOB]
CAPTION=Categorías para variables de Persona
PAGETYPE=Dictionary

DEFAULTVALUE=-- Seleccione una o más variables (Presione la tecla Ctrl) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=PERSON

*---------------------------------------------------------------------------
[PROGGROUP]
NODETYPE=STRUCTURE
CAPTION=Programación en Redatam
NODES=3
NODE1=PROGRED
NODE2=DOWNDIC
NODE3=DOWNRPSP

[PROGRED]
CAPTION=Procesador Estadístico R+SP
PAGETYPE=CmdSet

TITLE=Escribir Programa Redatam+SP

[DOWNDIC]
PAGETYPE=Download
CAPTION=Descargar diccionario R+SP
FILENAME=RpBases\NMIR\BaseR\NMirEsp.dic

[DOWNRPSP]
PAGETYPE=DisplayHtml
CAPTION=Descargar el software R+SP
FILENAME=http://www.cepal.org/redatam/
NEWPAGE=YES

*---------------------------------------------------------------------------
[HELPGROUP]
NODETYPE=STRUCTURE
CAPTION=Documentación
NODES=2
NODE1=HELPRPSP
NODE2=INICIO

[HELPRPSP]
PAGETYPE=DisplayHtml
CAPTION=Ayuda
FILENAME=/redatam/RpHelp/

[INICIO]
PAGETYPE=DisplayHtml
CAPTION=Página de Inicio Redatam
FILENAME=http://www.cepal.org/redatam/
NEWPAGE=YES

*---------------------------------------------------------------------------
