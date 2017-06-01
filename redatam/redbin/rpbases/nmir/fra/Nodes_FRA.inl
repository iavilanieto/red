****************** NODES ***************************************

/--------------------------------------------------------------
[POBYVIVIENDA]
CAPTION=POPULATION ET LOGEMENT
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=3
NODE1=BASIC1
NODE2=CRUZ1
NODE3=AREALIST1
//PAGE=2

/--------------------------------------------------------------
[BASIC1]
CAPTION=Caract�ristiques El�mentaires
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
CAPTION=Variables de Logement
NODETYPE=FREQUENCY
NODESTYLE=FREQUENCY.DEFAULT
NODESHOW=YES

ROW=ROW_VIV
ABK=ABK_1

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos_fra.htm

/--------------------------------------------------------------
[FREQPOB]
CAPTION=Variables de Personnes
NODETYPE=FREQUENCY
NODESTYLE=FREQUENCY.DEFAULT

ROW=ROW_PER1
ABK=ABK_1

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos_fra.htm

/--------------------------------------------------------------
[AVERAGE1]
CAPTION=Moyennes
NODETYPE=AVERAGE
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=Moyenne de:
AVG=AVG_1

ROW=ROW_PER2
COL=COL_PER1
ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos_fra.htm

/--------------------------------------------------------------
[MEDIAN1]
CAPTION=M�dianes
NODETYPE=MEDIAN
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=M�diane de:
AVG=AVG_1

ROW=ROW_PER2
COL=COL_PER1
ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_1

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos_fra.htm

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
CAPTION=Croisement de Variables
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=3
NODE1=CRUCVIV
NODE2=CRUCPOB
NODE3=CRUZCOMBI
//PAGE=9

/--------------------------------------------------------------
[CRUCVIV]
CAPTION=Variables de Logement
NODETYPE=CRUZ
NODESTYLE=CRUZ1.DEFAULT
NODESHOW=YES

ROW=ROW_VIV

COLN=13
COL1=LOGEM.EAUD
COL2=LOGEM.EAUO
COL3=LOGEM.EAUC
COL4=LOGEM.AUTO
COL5=LOGEM.BICICL
COL6=LOGEM.LITS
COL7=LOGEM.CUISINE
COL8=LOGEM.CONDOC
COL9=LOGEM.PROP
COL10=LOGEM.PARQ
COL11=LOGEM.TOIT
COL12=LOGEM.MUREX
COL13=LOGEM.TIPOLO
COLLAST=10

CTL=CTL_1
PCT=PERCENT_1

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla_fra.htm

/--------------------------------------------------------------
[CRUCPOB]
CAPTION=Variables de Personne
NODETYPE=CRUZ
NODESTYLE=CRUZ1.DEFAULT

ROW=ROW_PER1

COLN=16
COL1=PERSON.CATEOC
COL2=PERSON.ASISTE
COL3=PERSON.CURS
COL4=PERSON.AGEQUINQ
COL5=PERSON.ECIVIL
COL6=PERSON.AGE
COL7=PERSON.TYPEE
COL8=PERSON.NFILSS
COL9=PERSON.FILSS
COL10=PERSON.FILSU
COL11=PERSON.FILSV
COL12=PERSON.ALFAB
COL13=PERSON.PARENT
COL14=PERSON.AGEREC
COL15=PERSON.SEXE
COL16=PERSON.TYPEAC
COLLAST=4

CTL=CTL_1
PCTN=PERCENT_1

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla_fra.htm

/--------------------------------------------------------------
[CRUZCOMBI]
CAPTION=Combinaison
NODETYPE=CRUZ
NODESTYLE=CRUZ1.DEFAULT

ROWN=35
ROW1=() Person Variables
ROW2=() ---
ROW3=PERSON.CATEOC
ROW4=PERSON.ASISTE
ROW5=PERSON.CURS
ROW6=PERSON.AGE
ROW7=PERSON.ECIVIL
ROW8=PERSON.AGEQUINQ
ROW9=PERSON.OCUP
ROW10=PERSON.NFILSS
ROW11=PERSON.FILSS
ROW12=PERSON.FILSU
ROW13=PERSON.FILSV
ROW14=PERSON.ALFAB
ROW15=PERSON.PARENT
ROW16=PERSON.BRANCHE
ROW17=PERSON.SEXE
ROW18=PERSON.TYPEAC
ROW19=PERSON.TYPEE
ROW20=() ---
ROW21=() Household Variables
ROW22=() ---
ROW23=LOGEM.EAUD
ROW24=LOGEM.EAUO
ROW25=LOGEM.EAUC
ROW26=LOGEM.AUTO
ROW27=LOGEM.BICICL
ROW28=LOGEM.LITS
ROW29=LOGEM.CUISINE
ROW30=LOGEM.CONDOC
ROW31=LOGEM.NPERSS
ROW32=LOGEM.PARQ
ROW33=LOGEM.TOIT
ROW34=LOGEM.MUREX
ROW35=LOGEM.TIPOLO
ROWLAST=3

COLN=34
COL1=() Person Variables
COL2=() ---
COL3=PERSON.CATEOC
COL4=PERSON.ASISTE
COL5=PERSON.CURS
COL6=PERSON.AGE
COL7=PERSON.ECIVIL
COL8=PERSON.AGEQUINQ
COL9=PERSON.TYPEE
COL10=PERSON.NFILSS
COL11=PERSON.FILSS
COL12=PERSON.FILSU
COL13=PERSON.FILSV
COL14=PERSON.ALFAB
COL15=PERSON.PARENT
COL16=PERSON.AGEREC
COL17=PERSON.SEXE
COL18=PERSON.TYPEAC
COL19=() ---
COL20=() Household Variables
COL21=() ---
COL22=LOGEM.EAUD
COL23=LOGEM.EAUO
COL24=LOGEM.EAUC
COL25=LOGEM.AUTO
COL26=LOGEM.BICICL
COL27=LOGEM.LITS
COL28=LOGEM.CUISINE
COL29=LOGEM.CONDOC
COL30=LOGEM.NPERSS
COL31=LOGEM.PARQ
COL32=LOGEM.TOIT
COL33=LOGEM.MUREX
COL34=LOGEM.TIPOLO
COLLAST=33

CTL=CTL_1
PCT=PERCENT_1

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla_fra.htm

/--------------------------------------------------------------
[AREALIST1]
CAPTION=Liste d'Aires des Variables
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
CAPTION=Variables de Logement
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT
NODESHOW=YES

OPTNAME=Inclure Nom d'Aires
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Variables:
VARN=13
VAR1=LOGEM.EAUD
VAR2=LOGEM.EAUO
VAR3=LOGEM.EAUC
VAR4=LOGEM.AUTO
VAR5=LOGEM.BICICL
VAR6=LOGEM.LITS
VAR7=LOGEM.CUISINE
VAR8=LOGEM.CONDOC
VAR9=LOGEM.NPERSS
VAR10=LOGEM.PARQ
VAR11=LOGEM.TOIT
VAR12=LOGEM.MUREX
VAR13=LOGEM.TIPOLO
VARSEL1=YES

TOT=AREATOT_1

FILTER=FILTER_1
FORMAT=FORMAT_2

/PCT=PERCENT_1

GRAPHCROS=MULTIBARSERIE

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[AREAPOB]
CAPTION=Variables de Personne
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT

OPTNAME=Inclure Nom d'Aires
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Variables:
VARN=16
VAR1=PERSON.TYPEAC
VAR2=PERSON.ASISTE
VAR3=PERSON.CURS
VAR4=PERSON.AGE
VAR5=PERSON.ECIVIL
VAR6=PERSON.AGEQUINQ
VAR7=PERSON.TYPEE
VAR8=PERSON.NFILSS
VAR9=PERSON.FILSS
VAR10=PERSON.FILSU
VAR11=PERSON.FILSV
VAR12=PERSON.ALFAB
VAR13=PERSON.PARENT
VAR14=PERSON.AGEREC
VAR15=PERSON.SEXE
VAR16=PERSON.CATOEC
VARSEL1=YES

TOT=AREATOT_1

FILTER=FILTER_1
FORMAT=FORMAT_2

GRAPHCROS=MULTIBARSERIE

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[AREACOMBI]
CAPTION=Combinaison
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT

OPTNAME=Inclure Nom d'Aires
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Variables:
VARN=34
VAR1=() Person Variables
VAR2=() ---
VAR3=PERSON.CATEOC
VAR4=PERSON.ASISTE
VAR5=PERSON.CURS
VAR6=PERSON.AGE
VAR7=PERSON.ECIVIL
VAR8=PERSON.AGEQUINQ
VAR9=PERSON.TYPEE
VAR10=PERSON.NFILSS
VAR11=PERSON.FILSS
VAR12=PERSON.FILSU
VAR13=PERSON.FILSV
VAR14=PERSON.ALFAB
VAR15=PERSON.PARENT
VAR16=PERSON.AGEREC
VAR17=PERSON.SEXE
VAR18=PERSON.TYPEAC
VAR19=() ---
VAR20=() Household Variables
VAR21=() ---
VAR22=LOGEM.EAUD
VAR23=LOGEM.EAUO
VAR24=LOGEM.EAUC
VAR25=LOGEM.AUTO
VAR26=LOGEM.BICICL
VAR27=LOGEM.LITS
VAR28=LOGEM.CUISINE
VAR29=LOGEM.CONDOC
VAR30=LOGEM.PROP
VAR31=LOGEM.PARQ
VAR32=LOGEM.TOIT
VAR33=LOGEM.MUREX
VAR34=LOGEM.TIPOLO
VARSEL3=YES

TOT=AREATOT_1

FILTER=FILTER_1
FORMAT=FORMAT_2

GRAPHCROS=MULTIBARSERIE

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[COUNTS]
CAPTION=Counts
NODETYPE=COUNT

OPTNAME=Include Area Names
OPTNAMESEL=YES

OUT=OUT_1

VARCAPTION=Entiti(es) to Count
VARN=2
VAR1=LOGEM
VAR2=PERSON

TOT=AREATOT_2

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores.htm

/--------------------------------------------------------------
[ANDEMGROUP]
CAPTION=L'ANALYSE D�MOGRAPHIQUE
NODETYPE=STRUCTURE
NODES=4
NODE1=ESTRUCTURA
NODE2=ADULTOMAYOR
NODE3=FECUNDIDAD
NODE4=EDUCACION

/--------------------------------------------------------------
[ESTRUCTURA]
CAPTION=STRUCTURE DE LA POPULATION
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
CAPTION=Population par Sexe et Groupes d'Age
NODETYPE=CRUZ
NODESTYLE=CRUZ2.DEFAULT
NODESHOW=YES
INDICHEIGHT=158

ROWCAPTION=Variable Age:
ROWN=3
ROW1=PERSON.AGEREC
ROW2=PERSON.AGEQUINQ
ROW3=PERSON.AGE
ROWLAST=2

COLFIXED=PERSON.SEXE

ABK=ABK_1

GRAPHCROS=AGEPYRAMID
FIRSTOUTPUT=GRAPH

FILTER=FILTER_1

FMTCAPTION=Format de Sortie:
FMTN=4
FMT1=HTML Table
FMT2=GRAPH Age Pyramid
FMT3=HTMLGRAPH Table et Pyramid
FMT4=SPC R+ Program
FMTLAST=2

PERCENT=PERCENT_1

HTMLHELP=/redatam/RpHelp/obteniendotabulacionessencilla_fra.htm

/--------------------------------------------------------------
[RELDEPAM]
CAPTION=Taux de D�pendance (d�fini par l'usager)
NODETYPE=FRACTION
NODESTYLE=FRACTION.DEFAULT
INDICHEIGHT=210

OUT=OUT_2

OPTNAME=Inclure Nom d'Aires
OPTNAMESEL=YES

NUMCAPTION=Numerateur:
NUMN=2
NUM1=PERSON.AGEREC
NUM2=PERSON.AGEQUINQ
NUMLAST=1
NUM1.VLNUM3=YES

DENUMCAPTION=Denominateur:
DENUMN=2
DENUM1=PERSON.AGEREC
DENUM2=PERSON.AGEQUINQ
DENUMLAST=1
DENUM1.VLDENUM2=YES

SUBGROUP=NO
PERCENT=YES

OUTPUTCAPTION=Type de sortie:
OUTPUTN=2
OUTPUT1=OFF Indicateur
OUTPUT2=COUNTS Indicateur et Observations

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[TOTEDAD]
CAPTION=Distribution d'Age
NODETYPE=QTS
NODESTYLE=QTS.DEFAULT

OUT=OUT_2

OPT=OPT_1
OPTPCRSEL=NO

QTSN=2
QTS1=PERSON.AGEQUINQ
QTS2=PERSON.AGEREC
QTSLAST=1
QTS1.VL1=YES

GRAPHCROS=MULTIBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[RELDEP]
CAPTION=Quotient de D�pendance et/ou Quotient de Sexe
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT
INDICHEIGHT=150

OPTNAME=Inclure Nom d'Aires
OPTNAMESEL=YES

OUT=OUT_2

VARCAPTION=Indicateurs:
VARHEIGHT=40
VARN=2
VAR1=%OUTENT.INDEPR
VAR2=%OUTENT.INDMASC
VARSEL1=YES

GRAPHCROS=HORIZBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[ADULTOMAYOR]
CAPTION=PERSONNES AGEES
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=2
NODE1=PERSAM
NODE2=VIVAM
//PAGE=3

/--------------------------------------------------------------
[PERSAM]
CAPTION=Caract�ristiques des Personnes par Age (65+)
NODETYPE=QTS
NODESTYLE=QTS.DEFAULT
NODESHOW=YES

OUT=OUT_2

OPTCAPTION=Valeurs pour le tableau de sortie:
OPT=OPT_1

QTSN=6
QTS1=PERSON.ECIVIL
QTS2=PERSON.AGEQUINQ
QTS3=PERSON.TYPEE
QTS4=PERSON.ALFAB
QTS5=PERSON.PARENT
QTS6=PERSON.SEXE
QTSLAST=1
QTS1.VL5=YES

UNIVERSE=PERSON.AGEQUINQ > 13

GRAPHCROS=LINESERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[VIVAM]
CAPTION=Caract�ristiques des Logements (Personnes +65)
NODETYPE=QTS
NODESTYLE=QTS.DEFAULT

OUT=OUT_2

OPTCAPTION=Valeurs pour le tableau de sortie:
OPT=OPT_1

QTSN=13
QTS1=LOGEM.EAUD
QTS2=LOGEM.EAUO
QTS3=LOGEM.EAUC
QTS4=LOGEM.AUTO
QTS5=LOGEM.BICICL
QTS6=LOGEM.COMBUS
QTS7=LOGEM.CUISINE
QTS8=LOGEM.CONDOC
QTS9=LOGEM.PROP
QTS10=LOGEM.PARQ
QTS11=LOGEM.TOIT
QTS12=LOGEM.MUREX
QTS13=LOGEM.TIPOLO
QTSLAST=1
QTS1.VL3=YES

UNIVERSE=LOGEM.TOTELD > 0

GRAPHCROS=BARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[FECUNDIDAD]
CAPTION=FECONDITE - MORTALITE ENFANTINE
FONT=BOLD
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=2
NODE1=RELNIN
NODE2=FECUND
//PAGE=4

/--------------------------------------------------------------
[RELNIN]
CAPTION=Relation Enfants<5\Femmes
NODETYPE=AREALIST
NODESTYLE=AREALIST.DEFAULT
NODESHOW=YES
INDICHEIGHT=140

OPTNAME=Inclure Nom d'Aires
OPTNAMESEL=YES

OUT=OUT_2

VARFIXED=%OUTENT.INDMC

GRAPHCROS=HORIZBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[FECUND]
CAPTION=Moyenne de Fils
NODETYPE=AVERAGE
NODESTYLE=AVERAGE.DEFAULT

AVGCAPTION=Moyenne de:
AVGN=2
AVG1=PERSON.NFILSSOK
AVG2=PERSON.FILSVOK

ROWN=7
ROW1=(aucun)
ROW2=PERSON.PARENT
ROW3=PERSON.AGEQUINQ
ROW4=PERSON.ECIVIL
ROW5=PERSON.ASISTE
ROW6=PERSON.CURS
ROW7=PERSON.ALFAB
ROWLAST=2

COLN=4
COL1=(aucune)
COL2=PERSON.ECIVIL
COL3=PERSON.ALFAB
COL4=PERSON.AGEQUINQ

ABK=ABK_2

UNIVERSE=PERSON.SEXE=2 AND PERSON.AGE > 14 AND PERSON.AGE < 50

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos_fra.htm

/--------------------------------------------------------------
[EDUCACION]
CAPTION=EDUCATION
NODETYPE=STRUCTURE
NODESHOW=YES
NODES=2
NODE1=CANTIDAD
NODE2=INDICADO
//PAGE=5

/--------------------------------------------------------------
[CANTIDAD]
CAPTION=Population d�Age Scolaire
NODETYPE=QTS
NODESHOW=YES
NODESTYLE=QTS.DEFAULT

OUTN=OUT_2

OPTCAPTION=Donn�es � inclure en sortie:
OPT=OPT_1
OPTPCRSEL=NO

QTSN=1
QTS1=PERSON.AGEESC
QTS1.VL2=YES
QTS1.VL3=YES

GRAPHCROS=MULTIBARSERIE

FILTER=FILTER_1
FORMAT=FORMAT_2

HTMLHELP=/redatam/RpHelp/procesamientodeindicadores_fra.htm

/--------------------------------------------------------------
[INDICADO]
CAPTION=Tables de Variables d�Education
NODETYPE=CRUZ
NODESTYLE=CRUZ3.DEFAULT
INDICHEIGHT=180

ROWN=3
ROW1=PERSON.ALFAB
ROW2=PERSON.ASISTE
ROW3=PERSON.CURS

COLN=3
COL1=PERSON.AGEESC
COL2=PERSON.AGEQUINQ
COL3=PERSON.AGEREC

CTLN=4
CTL1=(Aucune)
CTL2=PERSON.PARENT
CTL3=PERSON.SEXE
CTL4=PERSON.ECIVIL

ABK=ABK_2

FILTER=FILTER_1
FORMAT=FORMAT_3

HTMLHELP=/redatam/RpHelp/recorriendolabasededatos_fra.htm

/---------------------------------------------------------------------------