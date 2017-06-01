***************** DEFINES *************************************

/--------------------------------------------------------------
[DEFINE1]
NAME=COUNTFILTER2TOTAL
ENTITY=COUNTFILTER2
CAPTION=Total

[DEFINE2]
NAME=COUNTFILTER2SEL
ENTITY=COUNTFILTER2
CAPTION=Total Selecionado

[DEFINE3]
NAME=COUNTFILTER2PC
ENTITY=COUNTFILTER2
CAPTION=Porcentagem

[DEFINE4]
NAME=COUNTFILTER2PCREL
ENTITY=COUNTFILTER2
CAPTION=Raz�o

/--------------------------------------------------------------
[DEFINE5]
NAME=NBITOTAL
ENTITY=NBI
CAPTION=Total

[DEFINE6]
NAME=NBISEL
ENTITY=NBI
CAPTION=Total Selecionado

[DEFINE7]
NAME=NBIPC
ENTITY=NBI
CAPTION=Porcentagem

[DEFINE8]
NAME=NBIPCREL
ENTITY=NBI
CAPTION=Raz�o

/--------------------------------------------------------------
[DEFINE9]
NAME=EDADGRA
ENTITY=PESSOA
CAPTION=Idade por Grandes Grupos
AS=RECODE
EXPRESSION=PESSOA.IDADE
RECODEITEMS=3
RECODEVALUE1=1
RECODEMIN1=0
RECODEMAX1=14
RECODETYPE1=CC
RECODEVALUE2=2
RECODEMIN2=15
RECODEMAX2=64
RECODETYPE2=CC
RECODEVALUE3=3
RECODEMIN3=65
RECODEMAX3=101
RECODETYPE3=CC
TYPE=INTEGER
RANGES=1
RANGEMIN1=1
RANGEMAX1=3
VALUELABELS=3
VL1=1 0 - 14
VL2=2 15 - 64
VL3=3 65 e mais
LABEL=Idade por Grandes Grupos

[DEFINE10]
NAME=EDADESC
ENTITY=PESSOA
CAPTION=Idades Escolares
AS=RECODE
EXPRESSION=PESSOA.IDADE
RECODEITEMS=5
RECODEVALUE1=1
RECODEMIN1=0
RECODEMAX1=5
RECODETYPE1=CC
RECODEVALUE2=2
RECODEMIN2=6
RECODEMAX2=12
RECODETYPE2=CC
RECODEVALUE3=3
RECODEMIN3=13
RECODEMAX3=18
RECODETYPE3=CC
RECODEVALUE4=4
RECODEMIN4=19
RECODEMAX4=25
RECODETYPE4=CC
RECODEVALUE5=5
RECODEMIN5=26
RECODEMAX5=101
RECODETYPE5=CC
TYPE=INTEGER
RANGES=1
RANGEMIN1=1
RANGEMAX1=5
VALUELABELS=5
VL1=1 0 - 5
VL2=2 6 - 12
VL3=3 13 -18
VL4=4 19 - 25
VL5=5 26 +
LABEL=Idades Escolares

/--------------------------------------------------------------
[DEFINE11]
NAME=CTY
ENTITY=MUNIC
TYPE=INTEGER
LINE=4
AS=EXPRESSION
EXPRESSION=VAL( MUNIC.CMUNIC )
LABEL=Munic�pio
RANGES=1
RANGEMIN1=5
RANGEMAX1=9
VL1=5 Santa Mar�a
VL2=6 Santiago
VL3=7 Bolivar
VL4=8 Marbella
VL5=9 Puerto Nuevo
VALUELABELS=5

[DEFINE12]
NAME=DISTC
ENTITY=DISTRITO
TYPE=INTEGER
LINE=22
AS=EXPRESSION
EXPRESSION=VAL( CMPCODE ( CDISTRI ) )

[DEFINE13]
NAME=DIST
ENTITY=DISTRITO
TYPE=INTEGER
LINE=26
AS=SWITCH
SWITEMS=5
SWLOGIC1=DISTRITO.DISTC < 600
SWVALUE1=DISTRITO.DISTC - 500
SWLOGIC2=DISTRITO.DISTC < 700
SWVALUE2=( DISTRITO.DISTC - 600 ) + 20
SWLOGIC3=DISTRITO.DISTC < 800
SWVALUE3=( DISTRITO.DISTC - 700 ) + 30
SWLOGIC4=DISTRITO.DISTC < 900
SWVALUE4=( DISTRITO.DISTC - 800 ) + 50
SWLOGIC5=DISTRITO.DISTC < 1000
SWVALUE5=( DISTRITO.DISTC - 900 ) + 60
ELSE=0
LABEL=Distrito
RANGES=1
RANGEMIN1=1
RANGEMAX1=62
VL1=1 El Convento
VL2=2 Ciudad Nueva
VL3=3 Guadalupe
VL4=4 Las Palmas
VL5=5 Buenaventura
VL6=6 Manizales
VL7=7 El Bosque
VL8=8 Meza
VL9=9 Arenales
VL10=10 Trujillo
VL11=11 El Paso
VL12=12 Valdivia
VL13=13 Santo Domingo
VL14=21 Rio Seco
VL15=22 Barcelona
VL16=23 El Condor
VL17=24 San Francisco
VL18=25 Nacimiento
VL19=26 Entre Rios
VL20=27 Molinos
VL21=28 Cartagena
VL22=29 San Miguel
VL23=31 San Luis
VL24=32 El Toro
VL25=33 Esmeralda
VL26=34 Escalona
VL27=35 General Morales
VL28=36 San Bernardo
VL29=37 Merida
VL30=38 Sommerville
VL31=39 Petersburg
VL32=40 Cruces
VL33=41 Nada es Peor
VL34=42 Cordova
VL35=43 Los Heroes
VL36=44 Bahia Escondida
VL37=51 Volantines
VL38=52 Colorado
VL39=53 Margarita
VL40=54 Palomares
VL41=55 Las Salinas
VL42=61 San Antonio
VL43=62 Concepcion
VALUELABELS=43
DEPENDENCIES=1
DEPENDENCY1=DISTRITO.DISTC

/--------------------------------------------------------------
[DEFINE14]
NAME=EDADNUMER
ENTITY=%OUTENT
AS=COUNT
EXPRESSION=PESSOA
FOR=(PESSOA.EDADGRA=1 OR PESSOA.EDADGRA=3) AND %FOREXPR
TYPE=INTEGER
DEPENDENCIES=1
DEPENDENCY1=PESSOA.EDADGRA

[DEFINE15]
NAME=EDADDENOM
ENTITY=%OUTENT
AS=COUNT
EXPRESSION=PESSOA
FOR=PESSOA.EDADGRA = 2 AND %FOREXPR
TYPE=INTEGER
DEPENDENCIES=1
DEPENDENCY1=PESSOA.EDADGRA

[DEFINE16]
NAME=INDEPR
CAPTION=Raz�o de Depend�ncia
ENTITY=%OUTENT
AS=EXPRESSION
EXPRESSION=( %OUTENT.EDADNUMER / %OUTENT.EDADDENOM )
FOR=%OUTENT.EDADDENOM > 0
TYPE=REAL
DECIMALS=2
DEPENDENCIES=2
DEPENDENCY1=%OUTENT.EDADNUMER
DEPENDENCY2=%OUTENT.EDADDENOM

/--------------------------------------------------------------
[DEFINE17]
NAME=INMNUMEC
ENTITY=%OUTENT
AS=COUNT
EXPRESSION=PESSOA
FOR=PESSOA.IDADE < 5 AND %FOREXPR
TYPE=INTEGER

[DEFINE18]
NAME=INMDENOC
ENTITY=%OUTENT
AS=COUNT
EXPRESSION=PESSOA
FOR=( PESSOA.IDADE>=15 AND PESSOA.IDADE<=49 AND PESSOA.SEXO=2 ) AND %FOREXPR
TYPE=INTEGER

[DEFINE19]
NAME=INDMC
CAPTION=Raz�o de Crian�as < 5 anos/Mulheres em Idade F�rtil
ENTITY=%OUTENT
AS=EXPRESSION
EXPRESSION=( %OUTENT.INMNUMEC / %OUTENT.INMDENOC )
FOR=%OUTENT.INMDENOC > 0
TYPE=REAL
DECIMALS=2
DEPENDENCIES=2
DEPENDENCY1=%OUTENT.INMNUMEC
DEPENDENCY2=%OUTENT.INMDENOC

/--------------------------------------------------------------
[DEFINE20]
NAME=MASCNUMER
ENTITY=%OUTENT
AS=COUNT
EXPRESSION=PESSOA
FOR=PESSOA.SEXO = 1 AND %FOREXPR
TYPE=INTEGER

[DEFINE21]
NAME=MASCDENOM
ENTITY=%OUTENT
AS=COUNT
EXPRESSION=PESSOA
FOR=PESSOA.SEXO = 2 AND %FOREXPR
TYPE=INTEGER

[DEFINE22]
NAME=INDMASC
CAPTION=Raz�o de Sexo
ENTITY=%OUTENT
AS=EXPRESSION
EXPRESSION=( %OUTENT.MASCNUMER / %OUTENT.MASCDENOM ) * 100
FOR=%OUTENT.MASCDENOM > 0
TYPE=REAL
DECIMALS=2
DEPENDENCIES=2
DEPENDENCY1=%OUTENT.MASCNUMER
DEPENDENCY2=%OUTENT.MASCDENOM
/--------------------------------------------------------------
[DEFINE23]
NAME=CHILDAOK
ENTITY=PESSOA
TYPE=INTEGER
LINE=4
AS=EXPRESSION
FOR=( PESSOA.SEXO = 2 AND PESSOA.IDADE > 14 )
LIKE=PESSOA.FILHOSV
EXPRESSION=PESSOA.FILHOSV
DEFAULT=98
RANGES=1
RANGEMIN1=0
RANGEMAX1=14

[DEFINE24]
NAME=NCHILDOK
ENTITY=PESSOA
TYPE=INTEGER
LINE=18
AS=EXPRESSION
FOR=( PESSOA.SEXO = 2 AND PESSOA.IDADE > 14 )
LIKE=PESSOA.FILHOSNV
EXPRESSION=PESSOA.FILHOSNV
DEFAULT=98
RANGES=1
RANGEMIN1=1
RANGEMAX1=14

/--------------------------------------------------------------
[DEFINE25]
NAME=URBRUR
ENTITY=AREA
AS=EXPRESSION
EXPRESSION=VAL( AREA.CAREA )
TYPE=INTEGER
LABEL=Urbana/Rural
RANGES=1
RANGEMIN1=1
RANGEMAX1=2
VALUELABELS=2
VL1=1 Urbana
VL2=2 Rural