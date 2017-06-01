[INFOGROUP]
CAPTION=INFORMAÇÃO
NODETYPE=STRUCTURE
NODES=3
NODE1=DICGROUP
NODE2=PROGGROUP
NODE3=HELPGROUP

*---------------------------------------------------------------------------
[DICGROUP]
CAPTION=Informação do Dicionário
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
CAPTION=Todas as Variáveis
PAGETYPE=Dictionary

TITLE=Dicionário da Base de Dados
MODE=SHORT

[DICGEO]
CAPTION=Variáveis Geográficas
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=MUNIC DISTRITO AREA BLOCO ZONA90 SETOR90 AGRISEG

[DICVIV]
CAPTION=Variáveis de Domicílio
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=DOMICIL

[DICPOB]
CAPTION=Variáveis de Pessoa
PAGETYPE=Dictionary

MODE=SHORT
ENTITY=PESSOA

[DICCATVIV]
CAPTION=Categorias de Domicílio
PAGETYPE=Dictionary

PROCESSTITLE=-- Selecione uma ou mais Variáveis (aperte tecla Control ) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=DOMICIL

[DICCATPOB]
CAPTION=Categorias de Pessoa
PAGETYPE=Dictionary

DEFAULTVALUE=-- Selecione uma ou mais Variáveis (aperte tecla Control ) --

BUTTONFREQUENCY=*
MODE=VARIABLE
ENTITY=PESSOA

*---------------------------------------------------------------------------
[PROGGROUP]
NODETYPE=STRUCTURE
CAPTION=Programa Redatam
NODES=3
NODE1=PROGRED
NODE2=DOWNDIC
NODE3=DOWNRPSP

[PROGRED]
CAPTION=Processar Programa R+SP
PAGETYPE=CmdSet

TITLE=Escrever Programa R+SP

[DOWNDIC]
PAGETYPE=Download
CAPTION=Download  Dicionário R+SP
FILENAME=RpBases\NMIR\BaseR\NMirPRT.dic

[DOWNRPSP]
PAGETYPE=DisplayHtml
CAPTION=Download software R+SP
FILENAME=http://www.cepal.org/redatam/
NEWPAGE=YES

*---------------------------------------------------------------------------
[HELPGROUP]
NODETYPE=STRUCTURE
CAPTION=Documentação
NODES=5
NODE1=HELPRPSP
NODE2=INICIO

[HELPRPSP]
PAGETYPE=DisplayHtml
CAPTION=Ajuda
FILENAME=/redatam/RpHelp/

[INICIO]
PAGETYPE=DisplayHtml
CAPTION=Página Inicial Redatam
FILENAME=http://www.cepal.org/redatam/
NEWPAGE=YES

*---------------------------------------------------------------------------
