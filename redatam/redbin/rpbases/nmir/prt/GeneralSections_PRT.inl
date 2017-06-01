***************** GLOBAL SECTIONS *************************************

/----------------------------------------------------------------------
[ROW_VIV]
ROWCAPTION=Variáveis:
ROWN=13
ROW1=DOMICIL.AGUA
ROW2=DOMICIL.AGUAORIG
ROW3=DOMICIL.AGUAENC
ROW4=DOMICIL.CARRO
ROW5=DOMICIL.BICICL
ROW6=DOMICIL.COMBUST
ROW7=DOMICIL.COZINHA
ROW8=DOMICIL.CONDICAO
ROW9=DOMICIL.OCUPACAO
ROW10=DOMICIL.PISO
ROW11=DOMICIL.TETO
ROW12=DOMICIL.PAREDES
ROW13=DOMICIL.TIPO

[ROW_PER1]
ROWCAPTION=Variáveis:
ROWN=17
ROW1=PESSOA.ATIVT
ROW2=PESSOA.FREQUENTA
ROW3=PESSOA.SERIE
ROW4=PESSOA.IDADE
ROW5=PESSOA.ECIVIL
ROW6=PESSOA.GRUPOID
ROW7=PESSOA.OCUPACAO
ROW8=PESSOA.FILHOSNV
ROW9=PESSOA.FILHOSULT
ROW10=PESSOA.FILHOSULQ
ROW11=PESSOA.FILHOSV
ROW12=PESSOA.ALFAB
ROW13=PESSOA.PARENT
ROW14=PESSOA.RAMA
ROW15=PESSOA.SEXO
ROW16=PESSOA.CATEG
ROW17=PESSOA.GRAU

[ROW_PER2]
ROWCAPTION=Por (Linha):
ROWN=18
ROW1=(nenhuma)
ROW2=PESSOA.FREQUENTA
ROW3=PESSOA.SERIE
ROW4=PESSOA.IDADE
ROW5=PESSOA.ECIVIL
ROW6=PESSOA.GRUPOID
ROW7=PESSOA.OCUPACAO
ROW8=PESSOA.FILHOSNV
ROW9=PESSOA.FILHOSULT
ROW10=PESSOA.FILHOSULQ
ROW11=PESSOA.FILHOSV
ROW12=PESSOA.ALFAB
ROW13=PESSOA.PARENT
ROW14=PESSOA.RAMA
ROW15=PESSOA.SEXO
ROW16=PESSOA.CATEG
ROW17=PESSOA.GRAU
ROW18=PESSOA.ATIVT

/----------------------------------------------------------------------
[COL_PER1]
COLCAPTION=Por (Coluna):
COLN=5
COL1=(nenhuma)
COL2=PESSOA.SEXO
COL3=PESSOA.ECIVIL
COL4=PESSOA.PARENT
COL5=PESSOA.SERIE

/----------------------------------------------------------------------
[AVG_1]
AVGN=3
AVG1=PESSOA.IDADE
AVG2=PESSOA.NCHILDOK
AVG3=PESSOA.CHILDAOK

/----------------------------------------------------------------------
[ABK_1]
ABKCAPTION=Quebra de Area:
ABKN=4
ABK1=(Sem Quebra)
ABK2=MUNIC
ABK3=DISTRITO
ABK4=AREA

[ABK_2]
ABKCAPTION=Quebra de Area:
ABKN=4
ABK1=(Sem Quebra)
ABK2=MUNIC
ABK3=DISTRITO
ABK4=AREA

/----------------------------------------------------------------------
[CTL_1]
CTLCAPTION=Nível de Saída:
CTLN=3
CTL1=(País)
CTL2=MUNIC.CMUNIC
CTL3=DISTRITO.CDISTRI

/----------------------------------------------------------------------
[OUT_2]
OUTCAPTION=Nível de Saída:
OUTN=4
OUT1=NMIR
OUT2=MUNIC
OUT3=DISTRITO
OUT4=AREA

/----------------------------------------------------------------------
[OUT_1]
OUTCAPTION=Nível de Saída:
OUTN=3
OUT1=MUNIC
OUT2=DISTRITO
OUT3=AREA

/----------------------------------------------------------------------
[PERCENT_1]
PCTCAPTION=Opções de Percentagem:
PCTN=4
PCT1=OFF Absoluto
PCT2=ROW % Linha
PCT3=COLUMN % Coluna
PCT4=TOTAL % Total

/----------------------------------------------------------------------
[FILTER_1]
FILTERCAPTION=Filtro:
FILTERN=3
FILTER1=(nenhum)
FILTER2=AREA.URBRUR=1 Urbano
FILTER3=AREA.URBRUR=2 Rural

/----------------------------------------------------------------------
[FORMAT_1]
FORMATCAPTION=Formato de Saída:
FORMATN=4
FORMAT1=HTML Tabela
FORMAT2=GRAPH Gráfico
FORMAT3=SPC Programa R+
FORMAT4=GRAPHHTML Tabela e Gráfico

/----------------------------------------------------------------------
[FORMAT_2]
FORMATCAPTION=Formato de Saída:
FORMATN=8
FORMAT1=HTML Tabela
FORMAT2=GRAPH Gráfico
FORMAT3=MAP Mapa
FORMAT4=SPC Programa R+
FORMAT5=GRAPHHTML Tabela e Gráfico
FORMAT6=MAPHTML   Tabela e Map
FORMAT7=GRAPHMAP  Mapa and Gráfico
FORMAT8=MAPGRAPHHTML Tabela, Gráfico e Mapa

/----------------------------------------------------------------------
[FORMAT_3]
FORMATCAPTION=Formato de Saída:
FORMATN=4
FORMAT1=HTML Tabela
FORMAT2=GRAPH Gráfico (até 2 variáveis)
FORMAT3=SPC Programa R+
FORMAT4=HTMLGRAPH Tabela e Gráfico (até 2 variáveis)

/----------------------------------------------------------------------
[OPT_1]
OPTCAPTION=Opções:
OPTTOT=Total
OPTSEL=Selecionar Total
OPTPC=Percentagem
OPTPCR=Percentagem relativa
OPTSELSEL=YES
OPTTOTSEL=YES
OPTPCSEL=YES
OPTPCRSEL=YES

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
TOTCAPTION=Incluir Totals de:
TOTCOL=Columnas
TOTCOLSEL=YES
