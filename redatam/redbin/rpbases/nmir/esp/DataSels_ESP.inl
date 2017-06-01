
*************** DATABASE(S) ********************

[DATASET1]
DATASETLABEL=Database
NODES=1
NODE1=DATABASE1
LASTDATABASE=1

[DATABASE1]
NODETYPE=DATABASE
NAME=%INLPATH\BaseR\NmirEsp.dic
CAPTION=Nueva Miranda
DATAPATH=%INLPATH\BaseR\


*************** SELECTIONS ********************

[SELSET1]
CAPTION=Area Geográfica:
SELN=8
SEL1=ALL Toda la base
SEL2=%INLPATH\SantaMaria.sel Santa Maria
SEL3=%INLPATH\Santiago.sel Santiago
SEL4=%INLPATH\Bolivar.sel Bolivar
SEL5=%INLPATH\Marbella.sel Marbella
SEL6=%INLPATH\PuertoNuevo.sel Puerto Nuevo
SEL7=%INLPATH\ESP\Custom1_ESP.slw 1a Selección de Usuario
SEL8=%INLPATH\ESP\Custom2_ESP.slw 2a Selección de Usuario

/----------------------------------------------------------------------
[UNIVSET1]
CAPTION=Universo
UNIVN=3
UNIV1=(Ninguno)
UNIV2=VIVIEN.TIPOVI<8 Viviendas Particulares
UNIV3=VIVIEN.TIPOVI>8 Viviendas Colectivas

[FILTER_1]
FILTERCAPTION=Filtro
FILTERN=3
FILTER1=(Ninguno)
FILTER2=VIVIEN.TIPOVI<8 Viviendas Particulares
FILTER3=VIVIEN.TIPOVI>8 Viviendas Colectivas
