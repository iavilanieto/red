function crearSeleccion(n, agrupado){
    var arr=[];
    var i = 0;
    for (i; i < n; i++) {
        arr[i]={
          "name": "Columna"+(i+1),
          "value": agrupado,
          "bind": {
            "input": "select",
            "options": ["col1","col2","col3","col4","col5","col6"]
          }
        };    
        }
        return arr;
}
function dominio(n){
    dom =[];
    for (var i = 0; i < n/2; i++) {dom.push(i);};
    return dom;
}
function crearBarras(n){
    var arr=[];
    for (var i = 0; i < n; i++) {
        cad='#'+Math.random().toString(16).substr(-6);
        arr[i]={
                        "name": "barra"+(i+1),
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "update":{
                                "x": {"scale": "pos","band": i/2},
                                "y": {"scale": "y", "field": {"signal":"Columna"+(i+1)}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": cad}
                        }
                      }
                    };
    };
    return arr;
}
function generarBarras(nVariables,ejeX, ejeY, agrupamiento){
    return {
        "$schema": esquema,
        "height": datosPersonas.length+100,
        "width": (datosPersonas.length)*10+380,
        "padding": 5,
        "data": [
            {
                "name": "personas",
                "values": datosPersonas
            },
            {
                "name": "valores",
                "source": "personas",
                "transform": [
                    {
                        "type": "fold", 
                        "fields": ["col2","col3","col4","col5"]
                    }
                ]
            },
            ,
            {
                "name": "cabecera",
                "values": d2
            },
            {
                "name": "titulos",
                "source": "cabecera",
                "transform": [
                        {
                        "type": "fold", 
                        "fields": ["col2","col3","col4","col5"]
                        }   
                ]
            }
        ],
        "signals": crearSeleccion(nVariables, agrupamiento),
        "scales": [
        {
            "name": "color",
            "type": "ordinal",
            "domain": {"data": "cabecera","fields": [
                "col3",
                "col4"
              ]
        },
            "range": [
              "#1f77b4",
              "grey"
            ]
          },
            {
                "name": "x",
                "type":  "band",
                "range": "width",
                "domain": {"data": "personas", "field": ejeX},
                "padding": 0.1
            },
            {
                "name": "y",
                "type": "linear",
                "range": "height",
                "round": true,
                "zero": true,
                "nice": true,
                "domain": {"data": "personas", "field": ejeY},
            }
        ],
     "legends": [
          {
            "fill": "color",
            "orient": "top-right",
            "encode": {
              "symbols": {
                "update": {
                  "shape": {
                    "value": "square"
                  }
                }
              }
            }
          }
        ],
        "axes": [
            {"orient": "bottom", "scale": "x", "zindex": 1, "title":"Grupos Quinquenales de edad"},
            {"orient": "left", "scale": "y", "zindex": 1,"title":"Total"}
        ],

        "marks": [
            {
                "type": "group",
                "from": {
                    "facet": {
                        "data": "personas",
                        "name": "facet",
                        "groupby": ejeX
                    }
                },
                "encode": {
                    "enter": {
                        "x": {"scale": "x", "field": ejeX}
                    }
                },
                "signals": [
                    {"name": "height", "update": "bandwidth('x')"}
                ],

                "scales": [
                    {
                        "name": "pos",
                        "type": "band",
                        "range": "height",
                        "domain": dominio(nVariables)
                    }
                ],
                "marks": crearBarras(nVariables)
            }
        ]
    }}
