****************** NODOS ***************************************

/--------------------------------------------------------------
[POBYVIVIENDA]
CAPTION=POPULA��O E DOMICILIOS
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=3
NODE1=BASIC1
NODE2=CRUZ1
NODE3=AREALIST1
//PAGE=2

/--------------------------------------------------------------
[BASIC1]
CAPTION=Caracter�sticas B�sicas
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=7
NODE1=FREQVIV
NODE2=FREQPOB
NODE3=AVERAGE1
NODE4=MEDIAN1
NODE5=MAX1
NODE6=MIN1
NODE7=STATS1
//PAGE=8

/--------------------------------------------------------------
[FREQVIV]
CAPTION=Vari�veis de Domic�lio
NODETYPE=FREQUENCY
NODESTYLE=FREQUENCY.DEFAULT
NODESHOW=YES

ROW=ROW_VIV
ABK=ABK_1

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos.htm

/--------------------------------------------------------------
[FREQPOB]
CAPTION=Vari�veis de Pessoas
NODETYPE=FREQUENCY
NODESTYLE=FREQUENCY.DEFAULT

ROW=ROW_PER1
ABK=ABK_1

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos.htm

/--------------------------------------------------------------
[AVERAGE1]
CAPTION=M�dias
NODETYPE=AVERAGE
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=M�dia de:
AVG=AVG_1

ROW=ROW_PER2
COL=COL_PER1
ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[MEDIAN1]
CAPTION=Medianas
NODETYPE=MEDIAN
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=Mediana de:
AVG=AVG_1

ROW=ROW_PER2
COL=COL_PER1
ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
//LA 2010.03.23 Get maximum and minimum values of continuous variables
[MAX1]
CAPTION=Maximum
NODETYPE=MAXIMUM
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=Maximum of:
AVG=AVG_1

ROW=ROW_PER2
COL=COL_PER1
ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[MIN1]
CAPTION=Minimum
NODETYPE=MINIMUM
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=Minimum of:
AVG=AVG_1

ROW=ROW_PER2
COL=COL_PER1
ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
//LA 2013.08.21 Get basic stats from continuous variables
[STATS1]
CAPTION=Basic Stats
NODETYPE=STATS
NODESTYLE=FREQUENCY.DEFAULT

ROWCAPTION=Stats of:
ROWN=11
ROW1=HOUSIN.BEDS
ROW2=HOUSIN.NPERSS
ROW3=HOUSIN.SLROOM
ROW4=HOUSIN.SOROOM
ROW5=HOUSIN.TROOMS
ROW6=HOUSIN.ROOMS
ROW7=HOUSIN.WROOMS
ROW8=() ---
ROW9=PERSON.AGE
ROW10=PERSON.NCHILDOK
ROW11=PERSON.CHILDAOK

FMTCAPTION=Output Format:
FMTN=2
FMT1=HTML Table
FMT2=SPC R+ Program

FILTER=FILTER_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[CRUZ1]
CAPTION=Cruzamento de Vari�veis
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=3
NODE1=CRUCVIV
NODE2=CRUCPOB
NODE3=CRUZCOMBI
//PAGE=9

/--------------------------------------------------------------
[CRUCVIV]
CAPTION=De Domic�lio
NODETYPE=CRUZ
NODESTYLE=CRUZ1.DEFAULT
NODESHOW=YES

ROW=ROW_VIV

COLN=13
COL1=DOMICIL.AGUA
COL2=DOMICIL.AGUAORIG
COL3=DOMICIL.AGUAENC
COL4=DOMICIL.CARRO
COL5=DOMICIL.BICICL
COL6=DOMICIL.COMBUST
COL7=DOMICIL.COZINHA
COL8=DOMICIL.OCUPACAO
COL9=DOMICIL.CONDICAO
COL10=DOMICIL.PISO
COL11=DOMICIL.TETO
COL12=DOMICIL.PAREDES
COL13=DOMICIL.TIPO
COLLAST=10

CTL=CTL_1
PCT=PERCENT_1

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[CRUCPOB]
CAPTION=De Pessoa
NODETYPE=CRUZ
NODESTYLE=CRUZ1.DEFAULT

ROW=ROW_PER1

COLN=16
COL1=PESSOA.CATEG
COL2=PESSOA.FREQUENTA
COL3=PESSOA.SERIE
COL4=PESSOA.GRUPOID
COL5=PESSOA.ECIVIL
COL6=PESSOA.IDADE
COL7=PESSOA.GRAU
COL8=PESSOA.FILHOSNV
COL9=PESSOA.FILHOSULT
COL10=PESSOA.FILHOSULQ
COL11=PESSOA.FILHOSV
COL12=PESSOA.ALFAB
COL13=PESSOA.PARENT
COL14=PESSOA.RAMA
COL15=PESSOA.SEXO
COL16=PESSOA.ATIVT
COLLAST=4

CTL=CTL_1
PCT=PERCENT_1

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[CRUZCOMBI]
CAPTION=Vari�veis Combinadas
NODETYPE=CRUZ
NODESTYLE=CRUZ1.DEFAULT

ROWN=35
ROW1=() Vari�veis de Pessoa
ROW2=() ---
ROW3=PESSOA.CATEG
ROW4=PESSOA.FREQUENTA
ROW5=PESSOA.SERIE
ROW6=PESSOA.IDADE
ROW7=PESSOA.ECIVIL
ROW8=PESSOA.GRUPOID
ROW9=PESSOA.OCUPACAO
ROW10=PESSOA.FILHOSNV
ROW11=PESSOA.FILHOSULT
ROW12=PESSOA.FILHOSULQ
ROW13=PESSOA.FILHOSV
ROW14=PESSOA.ALFAB
ROW15=PESSOA.PARENT
ROW16=PESSOA.RAMA
ROW17=PESSOA.SEXO
ROW18=PESSOA.CATEG
ROW19=PESSOA.GRAU
ROW20=() ---
ROW21=() Vari�veis de Domic�lio
ROW22=() ---
ROW23=DOMICIL.AGUA
ROW24=DOMICIL.AGUAORIG
ROW25=DOMICIL.AGUAENC
ROW26=DOMICIL.CARRO
ROW27=DOMICIL.BICICL
ROW28=DOMICIL.COMBUST
ROW29=DOMICIL.COZINHA
ROW30=DOMICIL.OCUPACAO
ROW31=DOMICIL.CONDICAO
ROW32=DOMICIL.PISO
ROW33=DOMICIL.TETO
ROW34=DOMICIL.PAREDES
ROW35=DOMICIL.TIPO
ROWLAST=3

COLN=34
COL1=() Vari�veis de Pessoa
COL2=() ---
COL3=PESSOA.CATEG
COL4=PESSOA.FREQUENTA
COL5=PESSOA.SERIE
COL6=PESSOA.IDADE
COL7=PESSOA.ECIVIL
COL8=PESSOA.GRUPOID
COL9=PESSOA.GRAU
COL10=PESSOA.FILHOSNV
COL11=PESSOA.FILHOSULT
COL12=PESSOA.FILHOSULQ
COL13=PESSOA.FILHOSV
COL14=PESSOA.ALFAB
COL15=PESSOA.PARENT
COL16=PESSOA.SEXO
COL17=PESSOA.CATEG
COL18=PESSOA.ATIVT
COL19=() ---
COL20=() Vari�veis de Domic�lio
COL21=() ---
COL22=DOMICIL.AGUA
COL23=DOMICIL.AGUAORIG
COL24=DOMICIL.AGUAENC
COL25=DOMICIL.CARRO
COL26=DOMICIL.BICICL
COL27=DOMICIL.COMBUST
COL28=DOMICIL.COZINHA
COL29=DOMICIL.OCUPACAO
COL30=DOMICIL.CONDICAO
COL31=DOMICIL.PISO
COL32=DOMICIL.TETO
COL33=DOMICIL.PAREDES
COL34=DOMICIL.TIPO
COLLAST=22

CTL=CTL_1
PCT=PERCENT_1

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[AREALIST1]
CAPTION=Lista de Vari�veis
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=4
NODE1=AREAVIV
NODE2=AREAPOB
NODE3=AREACOMBI
NODE4=COUNTS
//PAGE=10

/--------------------------------------------------------------
[AREAVIV]
CAPTION=De Domic�lio
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT
NODESHOW=YES

OPTNAME=Incluir Nomes de �rea
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Vari�veis a incluir:
VARN=13
VAR1=DOMICIL.AGUA
VAR2=DOMICIL.AGUAORIG
VAR3=DOMICIL.AGUAENC
VAR4=DOMICIL.CARRO
VAR5=DOMICIL.BICICL
VAR6=DOMICIL.COMBUST
VAR7=DOMICIL.COZINHA
VAR8=DOMICIL.OCUPACAO
VAR9=DOMICIL.CONDICAO
VAR10=DOMICIL.PISO
VAR11=DOMICIL.TETO
VAR12=DOMICIL.PAREDES
VAR13=DOMICIL.TIPO
VARSEL1=YES

TOT=AREATOT_1

FILTER=FILTER_1
FORMAT=FORMAT_2

/PCT=PERCENT_1

GRAPHCROS=MULTIBARSERIE

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[AREAPOB]
CAPTION=De Pessoa
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT

OPTNAME=Incluir Nomes de �rea
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Vari�veis a incluir:
VARN=16
VAR1=PESSOA.CATEG
VAR2=PESSOA.FREQUENTA
VAR3=PESSOA.SERIE
VAR4=PESSOA.IDADE
VAR5=PESSOA.ECIVIL
VAR6=PESSOA.GRUPOID
VAR7=PESSOA.GRAU
VAR8=PESSOA.FILHOSNV
VAR9=PESSOA.FILHOSULT
VAR10=PESSOA.FILHOSULQ
VAR11=PESSOA.FILHOSV
VAR12=PESSOA.ALFAB
VAR13=PESSOA.PARENT
VAR14=PESSOA.EDADGRA
VAR15=PESSOA.SEXO
VAR16=PESSOA.CATEG
VARSEL1=YES

TOT=AREATOT_1

FILTER=FILTER_1
FORMAT=FORMAT_2

GRAPHCROS=MULTIBARSERIE

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[AREACOMBI]
CAPTION=Combina��o
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT

OPTNAME=Incluir Nomes de �rea
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Vari�veis a incluir:
VARN=34
VAR1=() Person Variables
VAR2=() ---
VAR3=PESSOA.CATEG
VAR4=PESSOA.FREQUENTA
VAR5=PESSOA.SERIE
VAR6=PESSOA.IDADE
VAR7=PESSOA.ECIVIL
VAR8=PESSOA.GRUPOID
VAR9=PESSOA.GRAU
VAR10=PESSOA.FILHOSNV
VAR11=PESSOA.FILHOSULT
VAR12=PESSOA.FILHOSULQ
VAR13=PESSOA.FILHOSV
VAR14=PESSOA.ALFAB
VAR15=PESSOA.PARENT
VAR16=PESSOA.EDADGRA
VAR17=PESSOA.SEXO
VAR18=PESSOA.CATEG
VAR19=() ---
VAR20=() Household Variables
VAR21=() ---
VAR22=DOMICIL.AGUA
VAR23=DOMICIL.AGUAORIG
VAR24=DOMICIL.AGUAENC
VAR25=DOMICIL.CARRO
VAR26=DOMICIL.BICICL
VAR27=DOMICIL.COMBUST
VAR28=DOMICIL.COZINHA
VAR29=DOMICIL.OCUPACAO
VAR30=DOMICIL.CONDICAO
VAR31=DOMICIL.PISO
VAR32=DOMICIL.TETO
VAR33=DOMICIL.PAREDES
VAR34=DOMICIL.TIPO
VARSEL3=YES

TOT=AREATOT_1

FILTER=FILTER_1
FORMAT=FORMAT_2

GRAPHCROS=MULTIBARSERIE

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[COUNTS]
CAPTION=Counts
NODETYPE=COUNT

OPTNAME=Include Area Names
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Entiti(es) to Count
VARN=2
VAR1=DOMICIL
VAR2=PESSOA

TOT=AREATOT_2

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[ANDEMGROUP]
CAPTION=ANALISE DEMOGRAFICA
NODETYPE=STRUCTURE
NODES=4
NODE1=ESTRUCTURA
NODE2=ADULTOMAYOR
NODE3=FECUNDIDAD
NODE4=EDUCACION

/--------------------------------------------------------------
[ESTRUCTURA]
CAPTION=ESTRUTURA DA POPULA��O
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=4
NODE1=EDAD
NODE2=RELDEPAM
NODE3=TOTEDAD
NODE4=RELDEP
//PAGE=1

/--------------------------------------------------------------
[EDAD]
CAPTION=Popula��o por Sexo e Grupos de Idade
NODETYPE=CRUZ
NODESTYLE=CRUZ2.DEFAULT
NODESHOW=YES
INDICHEIGHT=158

ROWCAPTION=Vari�vel Idade:
ROWN=3
ROW1=PESSOA.EDADGRA
ROW2=PESSOA.GRUPOID
ROW3=PESSOA.IDADE
ROWLAST=2

COLFIXED=PESSOA.SEXO

ABK=ABK_1

GRAPHCROS=AGEPYRAMID
FIRSTOUTPUT=GRAPH

FILTER=FILTER_1

FMTCAPTION=Formato de sa�da
FMTN=4
FMT1=HTML Tabela
FMT2=GRAPH Pir�mide Idade
FMT3=HTMLGRAPH Tabela e Pir�mide
FMT4=SPC Programa R+
FMTLAST=2

PERCENT=PERCENT_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla.htm

/--------------------------------------------------------------
[RELDEPAM]
CAPTION=Rela��o de Depend�ncia (Definida pelo usu�rio)
NODETYPE=FRACTION
NODESTYLE=FRACTION.DEFAULT
INDICHEIGHT=210

OUT=OUT_2

OPTNAME=Nome de �reas
OPTNAMESEL=YES

NUMCAPTION=Numerador:
NUMN=2
NUM1=PESSOA.EDADGRA
NUM2=PESSOA.GRUPOID
NUMLAST=1
NUM1.VLNUM3=YES

DENUMCAPTION=Denominador:
DENUMN=2
DENUM1=PESSOA.EDADGRA
DENUM2=PESSOA.GRUPOID
DENUMLAST=1
DENUM1.VLDENUM2=YES

SUBGROUP=NO
PERCENT=YES

OUTPUTCAPTION=Tipo de Sa�da:
OUTPUTN=2
OUTPUT1=OFF Indicador
OUTPUT2=COUNTS Indicador e Casos

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[TOTEDAD]
CAPTION=Distribui��o por Idades
NODETYPE=QTS
NODESTYLE=QTS.DEFAULT

OUT=OUT_2

OPT=OPT_1
OPTPCRSEL=NO

QTSN=2
QTS1=PESSOA.GRUPOID
QTS2=PESSOA.EDADGRA
QTSLAST=1
QTS1.VL1=YES

GRAPHCROS=MULTIBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[RELDEP]
CAPTION=Rela��o de Depend�ncia e Indice de Masculinidade
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT
INDICHEIGHT=150

OPTNAME=Incluir Nomes de �rea
OPTNAMESEL=YES

OUT=OUT_2

VARCAPTION=Indicadores a incluir:
VARHEIGHT=40
VARN=2
VAR1=%OUTENT.INDEPR
VAR2=%OUTENT.INDMASC
VARSEL1=YES

GRAPHCROS=HORIZBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[ADULTOMAYOR]
CAPTION=ADULTO MAIOR
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=2
NODE1=PERSAM
NODE2=VIVAM
//PAGE=3

/--------------------------------------------------------------
[PERSAM]
CAPTION=Caracter�sticas das pessoas por idade (65+)
NODETYPE=QTS
NODESTYLE=QTS.DEFAULT
NODESHOW=YES

OUT=OUT_2

OPTCAPTION=Valores para a tabela de sa�da:
OPT=OPT_1

QTSN=6
QTS1=PESSOA.ECIVIL
QTS2=PESSOA.GRUPOID
QTS3=PESSOA.GRAU
QTS4=PESSOA.ALFAB
QTS5=PESSOA.PARENT
QTS6=PESSOA.SEXO
QTSLAST=1
QTS1.VL5=YES

UNIVERSE=PESSOA.GRUPOID > 13

GRAPHCROS=LINESERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[VIVAM]
CAPTION=Caracter�sticas dos domic�lios (pessoas 65+)
NODETYPE=QTS
NODESTYLE=QTS.DEFAULT

OUT=OUT_2

OPTCAPTION=Valores para a tabela de sa�da:
OPT=OPT_1

QTSN=13
QTS1=DOMICIL.AGUA
QTS2=DOMICIL.AGUAORIG
QTS3=DOMICIL.AGUAENC
QTS4=DOMICIL.CARRO
QTS5=DOMICIL.BICICL
QTS6=DOMICIL.COMBUST
QTS7=DOMICIL.COZINHA
QTS8=DOMICIL.CONDICAO
QTS9=DOMICIL.OCUPACAO
QTS10=DOMICIL.PISO
QTS11=DOMICIL.TETO
QTS12=DOMICIL.PAREDES
QTS13=DOMICIL.TIPO
QTSLAST=1
QTS1.VL3=YES

UNIVERSE=DOMICIL.TOTELD > 0

GRAPHCROS=BARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[FECUNDIDAD]
CAPTION=FECUNDIDADE - MORTALIDADE INFANTIL
FONT=BOLD
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=2
NODE1=RELNIN
NODE2=FECUND
//PAGE=4

/--------------------------------------------------------------
[RELNIN]
CAPTION=Rela��o Crian�as/Mulheres
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT
NODESHOW=YES
INDICHEIGHT=140

OPTNAME=Incluir Nomes de �rea
OPTNAMESEL=YES

OUT=OUT_2

VARFIXED=%OUTENT.INDMC

GRAPHCROS=HORIZBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[FECUND]
CAPTION=M�dia de Filhos
NODETYPE=AVERAGE
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=M�dia:
AVGN=2
AVG1=PESSOA.NCHILDOK
AVG2=PESSOA.CHILDAOK

ROWN=7
ROW1=(nenhuma)
ROW2=PESSOA.PARENT
ROW3=PESSOA.GRUPOID
ROW4=PESSOA.ECIVIL
ROW5=PESSOA.FREQUENTA
ROW6=PESSOA.SERIE
ROW7=PESSOA.ALFAB
ROWLAST=2

COLN=4
COL1=(nenhuma)
COL2=PESSOA.ECIVIL
COL3=PESSOA.ALFAB
COL4=PESSOA.GRUPOID

ABK=ABK_2

UNIVERSE=PESSOA.SEXO = 2 AND PESSOA.IDADE > 14 AND PESSOA.IDADE < 50

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos.htm

/--------------------------------------------------------------
[EDUCACION]
CAPTION=EDUCA��O
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=2
NODE1=CANTIDAD
NODE2=INDICADO
//PAGE=5

/--------------------------------------------------------------
[CANTIDAD]
CAPTION=Popula��o em Idade Escolar
NODETYPE=QTS
NODESHOW=YES
NODESTYLE=QTS.DEFAULT

OUT=OUT_2

OPTCAPTION=Valores a incluir na tabela de sa�da:
OPT=OPT_1
OPTPCRSEL=NO

QTSN=1
QTS1=PESSOA.EDADESC
QTS1.VL2=YES
QTS1.VL3=YES

GRAPHCROS=MULTIBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[INDICADO]
CAPTION=Tabelas de Vari�veis de Educa��o
NODETYPE=CRUZ
NODESTYLE=CRUZ3.DEFAULT
INDICHEIGHT=180

ROWN=3
ROW1=PESSOA.ALFAB
ROW2=PESSOA.FREQUENTA
ROW3=PESSOA.SERIE

COLN=3
COL1=PESSOA.EDADESC
COL2=PESSOA.GRUPOID
COL3=PESSOA.EDADGRA

CTLN=4
CTL1=(Nenhuma)
CTL2=PESSOA.PARENT
CTL3=PESSOA.SEXO
CTL4=PESSOA.ECIVIL

ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------