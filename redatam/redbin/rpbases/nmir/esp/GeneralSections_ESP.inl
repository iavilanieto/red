***************** GLOBAL SECTIONS *************************************

/----------------------------------------------------------------------
[ROW_VIV]
ROWCAPTION=Variable(s):
ROWN=13
ROW1=VIVIEN.TIPOVI
ROW2=VIVIEN.PISO
ROW3=VIVIEN.TECHO
ROW4=VIVIEN.PARED
ROW5=VIVIEN.AGUAD
ROW6=VIVIEN.AGUAO
ROW7=VIVIEN.AGUASN
ROW8=VIVIEN.AUTO
ROW9=VIVIEN.BICICL
ROW10=VIVIEN.CAMAS
ROW11=VIVIEN.COCINA
ROW12=VIVIEN.CONDOC
ROW13=VIVIEN.NPERSS

[ROW_PER1]
ROWCAPTION=Variable(s):
ROWN=17
ROW1=PERSON.PARENT
ROW2=PERSON.SEXO
ROW3=PERSON.EDAD
ROW4=PERSON.EDQUINQ
ROW5=PERSON.ALFAB
ROW6=PERSON.CURSO
ROW7=PERSON.TIPOE
ROW8=PERSON.ASISTE
ROW9=PERSON.ECIVIL
ROW10=PERSON.TIPOAC
ROW11=PERSON.RAMA
ROW12=PERSON.CATEOC
ROW13=PERSON.OCUP
ROW14=PERSON.NHIJOS
ROW15=PERSON.HIJOSS
ROW16=PERSON.HIJOSU
ROW17=PERSON.HIJOSV

[ROW_PER2]
ROWCAPTION=Por (Fila):
ROWN=18
ROW1=(ninguna)
ROW2=PERSON.CATEOC
ROW3=PERSON.ASISTE
ROW4=PERSON.CURSO
ROW5=PERSON.EDAD
ROW6=PERSON.ECIVIL
ROW7=PERSON.EDQUINQ
ROW8=PERSON.OCUP
ROW9=PERSON.NHIJOS
ROW10=PERSON.HIJOSS
ROW11=PERSON.HIJOSU
ROW12=PERSON.HIJOSV
ROW13=PERSON.ALFAB
ROW14=PERSON.PARENT
ROW15=PERSON.RAMA
ROW16=PERSON.SEXO
ROW17=PERSON.CATEOC
ROW18=PERSON.TIPOE

/----------------------------------------------------------------------
[COL_PER1]
COLCAPTION=Por (Columna):
COLN=5
COL1=(Ninguna)
COL2=PERSON.SEXO
COL3=PERSON.ECIVIL
COL4=PERSON.PARENT
COL5=PERSON.CURSO

/----------------------------------------------------------------------
[AVG_1]
AVGN=3
AVG1=PERSON.EDAD
AVG2=PERSON.NCHILDOK
AVG3=PERSON.CHILDAOK

/----------------------------------------------------------------------
[ABK_1]
ABKCAPTION=Quiebre de Area:
ABKN=4
ABK1=(Ninguno)
ABK2=COMUNA
ABK3=DISTRITO
ABK4=AREA

[ABK_2]
ABKCAPTION=Quiebre de Area:
ABKN=4
ABK1=(Ninguno)
ABK2=COMUNA
ABK3=DISTRITO
ABK4=AREA

/----------------------------------------------------------------------
[CTL_1]
CTLCAPTION=Nivel de Salida:
CTLN=3
CTL1=(Ninguno)
CTL2=COMUNA.COMUNA
CTL3=DISTRITO.DISTRIT

/----------------------------------------------------------------------
[OUT_2]
OUTCAPTION=Nivel de Salida:
OUTN=4
OUT1=NMIR
OUT2=COMUNA
OUT3=DISTRITO
OUT4=AREA

/----------------------------------------------------------------------
[OUT_1]
OUTCAPTION=Nivel de Salida:
OUTN=3
OUT1=COMUNA
OUT2=DISTRITO
OUT3=AREA

/----------------------------------------------------------------------
[PERCENT_1]
PCTCAPTION=Opciones de Porcentaje:
PCTN=4
PCT1=OFF Absoluto
PCT2=ROW % Fila
PCT3=COLUMN % Columna
PCT4=TOTAL % Total

/----------------------------------------------------------------------
[PERCENT_2]
PCTCAPTION=Opciones de Porcentaje:
PCTN=2
PCT1=OFF Absoluto
PCT2=TOTAL % Total

/----------------------------------------------------------------------
[PERCENT_3]
PCTCAPTION=Opciones de Gráfico
PCTN=2
PCT1=OFF Casos
PCT2=TOTAL Porcentajes

/----------------------------------------------------------------------
[FILTER_1]
FILTERCAPTION=Filtro:
FILTERN=3
FILTER1=(Ninguno)
FILTER2=AREA.URBRUR=1 Urbano
FILTER3=AREA.URBRUR=2 Rural

/----------------------------------------------------------------------
[FORMAT_1]
FORMATCAPTION=Formato de Salida:
FORMATN=4
FORMAT1=HTML Tabla
FORMAT2=GRAPH Gráfico
FORMAT3=SPC Programa R+
FORMAT4=GRAPHHTML Tabla y Gráfico
FORMATLAST=4

/----------------------------------------------------------------------
[FORMAT_2]
FORMATCAPTION=Formato de Salida:
FORMATN=8
FORMAT1=HTML Tabla
FORMAT2=GRAPH Gráfico
FORMAT3=MAP Mapa
FORMAT4=PVL Programa R+
FORMAT5=GRAPHHTML Tabla y Gráfico
FORMAT6=MAPHTML   Tabla y Mapa
FORMAT7=GRAPHMAP  Mapa y Gráfico
FORMAT8=MAPGRAPHHTML Tabla, Gráfico y Mapa

/----------------------------------------------------------------------
[FORMAT_3]
FORMATCAPTION=Formato de Salida:
FORMATN=4
FORMAT1=HTML Tabla
FORMAT2=GRAPH Gráfico (hasta 2 variables)
FORMAT3=SPC Programa R+
FORMAT4=HTMLGRAPH Tabla y Gráfico (hasta 2 variables)

/----------------------------------------------------------------------
[FORMAT_4]
FORMATCAPTION=Formato de Salida:
FORMATN=2
FORMAT1=HTML Tabla
FORMAT2=SPC Programa R+

/----------------------------------------------------------------------
[OPT_1]
OPTCAPTION=Options:
OPTTOT=Total
OPTSEL=Total Seleccionado
OPTPC=Porcentaje
OPTPCR=Porcentaje Relativo
OPTSELSEL=YES
OPTTOTSEL=YES
OPTPCSEL=YES
OPTPCRSEL=YES

[OPTLF]
OPTN=2
OPT1=OFF Indicador
OPT2=COUNTS Indicador y Casos

/----------------------------------------------------------------------
[AREATOT_1]
TOTCAPTION=Incluir Totales de:
TOTROW=Filas
//TOTROWSEL=YES
/OMITTOTALROW=YES
TOTCOL=Columnas
//TOTCOLSEL=YES
/TOTAL=YES

/----------------------------------------------------------------------
[AREATOT_2]
TOTCAPTION=Incluir Totales de:
TOTCOL=Columnas
TOTCOLSEL=YES
