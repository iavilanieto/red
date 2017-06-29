function crearSeleccionLineas(n, agrupamiento){
    var arr=[];
    var i = 0;
    for (i; i < n; i++) {
        arr[i]={
          "name": "Columna"+(i+1),
          "value": agrupamiento,
          "bind": {
            "input": "select",
            "options": ["col3","col4","col5"]
          }
        };    
        }
       arr[i++]={
       "name": "interpolate",
       "value": "linear",
       "bind": {
                    "input": "select",
                    "options": [
                        "basis",
                        "cardinal",
                        "catmull-rom",
                        "linear",
                        "monotone",
                        "natural",
                        "step",
                        "step-after",
                        "step-before"
                    ]
       }
      };
        return arr;
}
function crearLineas(lineas, ejeX, ejeY){
    arr=[];
    for (var i = 0; i < lineas; i++) {
        cad='#'+Math.random().toString(16).substr(-6);
        arr[i]={
                        "type": "line",
                        "from": {"data": "table"},
                        "encode": {
                            "enter": {
                                "stroke": {"value": cad},
                                "strokeWidth": {"value": 2}
                            },
                            "update": {
                                "x": {"scale": "x", "field": ejeX},
                                "y": {"scale": "y", "field": {"signal":"Columna"+(i+1)}},
                                "interpolate": {"signal": "interpolate"},
                                "fillOpacity": {"value": 1}
                            },
                            "hover": {
                                "fillOpacity": {"value": 0.5}
                            }
                        }
                    };
    };
    return arr;    
}
function generarLineas(nVariables,ejeX, ejeY, agrupamiento){
    return {
        "$schema": esquema,
        "height": datosPersonas.length+100,
        "width": (datosPersonas.length)*10+380,
        "padding": 5,
        "signals": crearSeleccionLineas(nVariables,agrupamiento),
        "data": [
          {
            "name": "personas",
            "values": datosPersonas
          },
          {
            "name": "table",
            "source": "personas",
            "transform": [
              {
                "type": "fold",
                "fields": [
                  "col2",
                  "col3",
                  "col4"
                ]
              }
            ]
          },
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
                "fields": [
                  "col2",
                  "col3",
                  "col4",
                  "col5"
                ]
              }
            ]
          }
        ],
        "scales": [
          {
            "name": "color",
            "type": "ordinal",
            "domain": {
              "data": "cabecera",
              "fields": [
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
            "type": "point",
            "range": "width",
            "domain": {
              "data": "table",
              "field": ejeX
            }
          },
          {
            "name": "y",
            "type": "linear",
            "range": "height",
            "nice": true,
            "zero": true,
            "domain": {
              "data": "table",
              "field": ejeY
            }
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
          {
            "orient": "bottom",
            "scale": "x",
            "title":"Grupos Quinquenales de edad"
          },
          {
            "orient": "left",
            "scale": "y",
            "title":"Total"
          }
        ],
        "marks": [
          {
            "type": "group",
            "marks": crearLineas(nVariables, ejeX, ejeY)
          }
        ]}
        }
