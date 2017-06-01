***************** GLOBAL SECTIONS *************************************

/----------------------------------------------------------------------
[ROW_VIV]
ROWCAPTION=Variable(s)
ROWN=13
ROW1=HOUSIN.TYPHOU
ROW2=HOUSIN.FLOOR
ROW3=HOUSIN.ROOF
ROW4=HOUSIN.WALLS
ROW5=HOUSIN.WATER
ROW6=HOUSIN.WATERO
ROW7=HOUSIN.WATERP
ROW8=HOUSIN.CAR
ROW9=HOUSIN.BICYCL
ROW10=HOUSIN.BEDS
ROW11=HOUSIN.KITCH
ROW12=HOUSIN.CONDIT
ROW13=HOUSIN.NPERSS

[ROW_PER1]
ROWCAPTION=Variable(s)
ROWN=17
ROW1=PERSON.RELAT
ROW2=PERSON.SEX
ROW3=PERSON.AGE
ROW4=PERSON.EDQUINQ
ROW5=PERSON.LITER
ROW6=PERSON.COURSE
ROW7=PERSON.EDTYPE
ROW8=PERSON.ATTEND
ROW9=PERSON.MARSTA
ROW10=PERSON.ACTYPE
ROW11=PERSON.INDUST
ROW12=PERSON.CATOCC
ROW13=PERSON.OCCUP
ROW14=PERSON.NCHILD
ROW15=PERSON.CHILDL
ROW16=PERSON.CHILDY
ROW17=PERSON.CHILDA
ROWLAST=1

[ROW_PER2]
ROWCAPTION=By (Row)
ROWN=18
ROW1=(none)
ROW2=PERSON.CATOCC
ROW3=PERSON.ATTEND
ROW4=PERSON.COURSE
ROW5=PERSON.AGE
ROW6=PERSON.MARSTA
ROW7=PERSON.EDQUINQ
ROW8=PERSON.OCCUP
ROW9=PERSON.NCHILD
ROW10=PERSON.CHILDL
ROW11=PERSON.CHILDY
ROW12=PERSON.CHILDA
ROW13=PERSON.LITER
ROW14=PERSON.RELAT
ROW15=PERSON.INDUST
ROW16=PERSON.SEX
ROW17=PERSON.ACTYPE
ROW18=PERSON.EDTYPE

/----------------------------------------------------------------------
[COL_PER1]
COLCAPTION=By (Column)
COLN=5
COL1=(none)
COL2=PERSON.SEX
COL3=PERSON.MARSTA
COL4=PERSON.RELAT
COL5=PERSON.COURSE

/----------------------------------------------------------------------
[AVG_1]
AVGN=3
AVG1=PERSON.AGE
AVG2=PERSON.NCHILDOK
AVG3=PERSON.CHILDAOK

/----------------------------------------------------------------------
[ABK_1]
ABKCAPTION=Areabreak Level
ABKN=4
ABK1=(None)
ABK2=COUNTY
ABK3=DISTRICT
ABK4=AREA

/----------------------------------------------------------------------
[CTL_1]
CTLCAPTION=Output Level
CTLN=3
CTL1=(None)
CTL2=COUNTY.CTY
CTL3=DISTRICT.DIST

/----------------------------------------------------------------------
[OUT_2]
OUTCAPTION=Output Level
OUTN=4
OUT1=NMIR
OUT2=COUNTY
OUT3=DISTRICT
OUT4=AREA

/----------------------------------------------------------------------
[OUT_1]
OUTCAPTION=Output Level
OUTN=3
OUT1=COUNTY
OUT2=DISTRICT
OUT3=AREA

/----------------------------------------------------------------------
[PERCENT_1]
PCTCAPTION=Percent Options
PCTN=4
PCT1=OFF Absolute
PCT2=ROW % Row
PCT3=COLUMN % Column
PCT4=TOTAL % Total

/----------------------------------------------------------------------
[PERCENT_2]
PCTCAPTION=Percent Options
PCTN=2
PCT1=OFF Absolute
PCT2=TOTAL % Total

/----------------------------------------------------------------------
[PERCENT_3]
PCTCAPTION=Graph Options
PCTN=2
PCT1=OFF Cases
PCT2=TOTAL Percentaje

/----------------------------------------------------------------------
[FILTER_1]
FILTERCAPTION=Filter
FILTERN=3
FILTER1=; None
FILTER2=AREA.URBRUR=1; Urban
FILTER3=AREA.URBRUR=2; Rural

/----------------------------------------------------------------------
[FORMAT_1]
FORMATCAPTION=Output Format
FORMATN=4
FORMAT1=HTML Table
FORMAT2=GRAPH Graph
FORMAT3=SPC R+ Program
FORMAT4=GRAPHHTML Table and Graph
FORMATLAST=4

/----------------------------------------------------------------------
[FORMAT_2]
FORMATCAPTION=Output Format
FORMATN=8
FORMAT1=HTML Table
FORMAT2=GRAPH Graph
FORMAT3=MAP Map
FORMAT4=SPC R+ Program
FORMAT5=GRAPHHTML Table and Graph
FORMAT6=MAPHTML   Table and Map
FORMAT7=GRAPHMAP  Map and Graph
FORMAT8=MAPGRAPHHTML Table, Graph and Map

/----------------------------------------------------------------------
[FORMAT_3]
FMTCAPTION=Output Format
FMTN=2
FMT1=HTML Table
FMT2=SPC R+ Program

/----------------------------------------------------------------------
[OPT_1]
OPTCAPTION=Options
OPTTOT=Total
OPTSEL=Selected Total
OPTPC=Percent
OPTPCR=Relative Percent
OPTSELSEL=YES
OPTTOTSEL=YES
OPTPCSEL=YES
OPTPCRSEL=YES

[OPTLF]
OPTN=2
OPT1=OFF Indicator
OPT2=COUNTS Indicator and Cases

/----------------------------------------------------------------------
[AREATOT_1]
TOTCAPTION=Include Totals of
TOTROW=Rows
//TOTROWSEL=YES
/OMITTOTALROW=YES
TOTCOL=Columns
//TOTCOLSEL=YES
/TOTAL=YES

/----------------------------------------------------------------------
[AREATOT_2]
TOTCAPTION=Include Totals of
TOTCOL=Columns
TOTCOLSEL=YES
