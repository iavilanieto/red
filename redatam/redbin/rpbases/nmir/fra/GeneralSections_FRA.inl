***************** GLOBAL SECTIONS *************************************

/----------------------------------------------------------------------
[ROW_VIV]
ROWCAPTION=Variable(s):
ROWN=13
ROW1=LOGEM.EAUD
ROW2=LOGEM.EAUO
ROW3=LOGEM.EAUC
ROW4=LOGEM.AUTO
ROW5=LOGEM.BICICL
ROW6=LOGEM.LITS
ROW7=LOGEM.CUISINE
ROW8=LOGEM.CONDOC
ROW9=LOGEM.NPERSS
ROW10=LOGEM.PARQ
ROW11=LOGEM.TOIT
ROW12=LOGEM.MUREX
ROW13=LOGEM.TIPOLO

[ROW_PER1]
ROWCAPTION=Variable(s):
ROWN=17
ROW1=PERSON.TYPEAC
ROW2=PERSON.ASISTE
ROW3=PERSON.CURS
ROW4=PERSON.AGE
ROW5=PERSON.ECIVIL
ROW6=PERSON.AGEQUINQ
ROW7=PERSON.OCUP
ROW8=PERSON.NFILSS
ROW9=PERSON.FILSS
ROW10=PERSON.FILSU
ROW11=PERSON.FILSV
ROW12=PERSON.ALFAB
ROW13=PERSON.PARENT
ROW14=PERSON.BRANCHE
ROW15=PERSON.SEXE
ROW16=PERSON.CATEOC
ROW17=PERSON.TYPEE

[ROW_PER2]
ROWCAPTION=Par (Ligne):
ROWN=18
ROW1=(aucune)
ROW2=PERSON.CATEOC
ROW3=PERSON.ASISTE
ROW4=PERSON.CURS
ROW5=PERSON.AGE
ROW6=PERSON.ECIVIL
ROW7=PERSON.AGEQUINQ
ROW8=PERSON.OCUP
ROW9=PERSON.NFILSS
ROW10=PERSON.FILSS
ROW11=PERSON.FILSU
ROW12=PERSON.FILSV
ROW13=PERSON.ALFAB
ROW14=PERSON.PARENT
ROW15=PERSON.BRANCHE
ROW16=PERSON.SEXE
ROW17=PERSON.TYPEAC
ROW18=PERSON.TYPEE

/----------------------------------------------------------------------
[COL_PER1]
COLCAPTION=Par (Colonne):
COLN=5
COL1=(aucune)
COL2=PERSON.SEXE
COL3=PERSON.ECIVIL
COL4=PERSON.PARENT
COL5=PERSON.CURS

/----------------------------------------------------------------------
[AVG_1]
AVGN=3
AVG1=PERSON.AGE
AVG2=PERSON.NFILSSOK
AVG3=PERSON.FILSVOK

/----------------------------------------------------------------------
[ABK_1]
ABKCAPTION=Niveau de Sortie:
ABKN=4
ABK1=(Tous)
ABK2=COMMUNE
ABK3=DISTRICT
ABK4=AIRE

[ABK_2]
ABKCAPTION=Definition de l'Areabreak:
ABKN=4
ABK1=(Tous)
ABK2=COMMUNE
ABK3=DISTRICT
ABK4=AIRE

/----------------------------------------------------------------------
[CTL_1]
CTLCAPTION=Niveau de Sortie:
CTLNVAR=3
CTL1=(Tous)
CTL2=COMMUNE.NCOMMUNE
CTL3=DISTRICT.NDISTRICT

/----------------------------------------------------------------------
[OUT_2]
OUTCAPTION=Niveau de Sortie:
OUTN=4
OUT1=NMIR
OUT2=COMMUNE
OUT3=DISTRICT
OUT4=AIRE

/----------------------------------------------------------------------
[OUT_1]
OUTCAPTION=Niveau de Sortie:
OUTN=3
OUT1=COMMUNE
OUT2=DISTRICT
OUT3=AIRE

/----------------------------------------------------------------------
[PERCENT_1]
PCTCAPTION=Options des Pourcentages:
PCTN=4
PCT1=OFF Absolut
PCT2=ROW % Ligne
PCT3=COLUMN % Colonne
PCT4=TOTAL % Total

/----------------------------------------------------------------------
[FILTER_1]
FILTERCAPTION=Filtre:
FILTERN=3
FILTER1=(none)
FILTER2=AREA.URBRUR=1 Urbain
FILTER3=AREA.URBRUR=2 Rural

/----------------------------------------------------------------------
[FORMAT_1]
FORMATCAPTION=Format de Sortie:
FORMATN=4
FORMAT1=HTML Table
FORMAT2=GRAPH Graphique
FORMAT3=SPC Programme R+
FORMAT4=GRAPHHTML Table et Graphique

/----------------------------------------------------------------------
[FORMAT_2]
FORMATCAPTION=Format de Sortie:
FORMATN=8
FORMAT1=HTML Table
FORMAT2=GRAPH Graphique
FORMAT3=MAP Carte
FORMAT4=SPC Programme R+
FORMAT5=GRAPHHTML Table et Graphique
FORMAT6=MAPHTML   Table et Carte
FORMAT7=GRAPHMAP  Carte et Graphique
FORMAT8=MAPGRAPHHTML Table, Graphique et Carte

/----------------------------------------------------------------------
[FORMAT_3]
FORMATCAPTION=Format de Sortie:
FORMATN=4
FORMAT1=HTML Table
FORMAT2=GRAPH Graphique (jusqu'a 2 variables)
FORMAT3=SPC R+ Program
FORMAT4=HTMLGRAPH Table et Graphique (jusqu'a 2 variables)

/----------------------------------------------------------------------
[OPT_1]
OPTCAPTION=Options:
OPTTOT=Total
OPTSEL=Selected Total
OPTPC=Percent
OPTPCR=Relative Percent
OPTSELSEL=YES
OPTTOTSEL=YES
OPTPCSEL=YES
OPTPCRSEL=YES

/----------------------------------------------------------------------
[AREATOT_1]
TOTCAPTION=Incluir Totales de:
TOTROW=Ligne
//TOTROWSEL=YES
/OMITTOTALROW=YES
TOTCOL=Colonne
//TOTCOLSEL=YES
/TOTAL=YES

/----------------------------------------------------------------------
[AREATOT_2]
TOTCAPTION=Incluir Totales de:
TOTCOL=Colonne
TOTCOLSEL=YES
