
*************** DATABASE(S) ********************

[DATASET1]
DATASETLABEL=Database
NODES=1
NODE1=DATABASE1
LASTDATABASE=1

[DATABASE1]
NODETYPE=DATABASE
NAME=%INLPATH\BaseR\NmirEng.dic
CAPTION=New Miranda
DATAPATH=%INLPATH\BaseR\


*************** SELECTIONS ********************

[SELSET1]
CAPTION=Geographic Area
SELECTIONS=8
SELNAME1=ALL
SELCAPTION1=All
SELNAME2=%INLPATH\SantaMaria.sel
SELCAPTION2=Santa Maria
SELNAME3=%INLPATH\Santiago.sel
SELCAPTION3=Santiago
SELNAME4=%INLPATH\Bolivar.sel
SELCAPTION4=Bolivar
SELNAME5=%INLPATH\Marbella.sel
SELCAPTION5=Marbella
SELNAME6=%INLPATH\PuertoNuevo.sel
SELCAPTION6=Puerto Nuevo
SELNAME7=%INLPATH\ENG\Custom1_ENG.SLW
SELCAPTION7=1st User's Selection
SELNAME8=%INLPATH\ENG\Custom2_ENG.SLW
SELCAPTION8=2nd User's Selection

/----------------------------------------------------------------------
[UNIVSET1]
CAPTION=Universe
UNIVN=3
UNIV1=(None)
UNIV2=HOUSIN.TYPHOU <= 8; Private Household
UNIV3=HOUSIN.TYPHOU > 8; Collective Household
