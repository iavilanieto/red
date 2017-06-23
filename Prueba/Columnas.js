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
function generarColumnas(nVariables,ejeX, ejeY, agrupamiento){
    return {
        "$schema": esquema,
        "width": personas2.length+500,
        "height": personas2.length+200,
        "padding": 5,
         "data": [
            {
                "name": "personas",
                "values": personas2
            },
            {
                "name": "valores",
                "source": "personas",
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

  "signals": crearSeleccion(nVariables, agrupamiento),
        "scales": [
            {
                "name": "x",
                "type":  "band",
                "range": "width",
                "nice": true,
                "domain": {"data": "valores", "field": ejeX},//"col2"},
                "padding": 0.6
            },
            {
                "name": "y",
                "type": "linear",
                "range": "height",
                 "round": true,
                "zero": true,
                "nice": true,
                "domain": {"data": "valores", "field": ejeY} //{"signal":"EjeY"}},
            }
        ],

        "axes": [
            {"orient": "bottom", "scale": "x", "zindex": 1},
            {"orient": "left", "scale": "y", "zindex": 1}
        ]
      
      ,

        "marks": [
            {
                "type": "group",
                "from": {
                    "facet": {
                        "data": "personas",
                        "name": "facet",
                        "groupby": ejeX //"col2"
                    }
                },
                "encode": {
                    "enter": {
                        "x": {"scale": "x", "field": ejeX} // "col2"}
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
                /*[
                    {
                        "name": "bars",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "update":{
                                "x": {"scale": "pos","band": 0},
                                "y": {"scale": "y", "field": {"signal":"Columna1"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "grey"}
                        }
                      }
                    }/*,
                    {
                        "name": "bars1",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "update":{
                                "x": {"scale": "pos","band": 0.5},
                                "y": {"scale": "y", "field": {"signal":"Barras2"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "#659CCA"}
                        }
                      }
                    },
                    {
                        "name": "bars2",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "update":{
                                "x": {"scale": "pos","band": 1},
                                "y": {"scale": "y", "field": {"signal":"Barras3"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "red"}
                        }
                      }
                    }
                    ]
                    */
                  }
            ]





  

  }
}