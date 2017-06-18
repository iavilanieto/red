function crearSeleccion(n){
    var arr=[];
    var i = 0;
    for (i; i < n; i++) {
        arr[i]={
          "name": "Columna"+(i+1),
          "value": "col2",
          "bind": {
            "input": "select",
            "options": ["col1","col2","col3","col4","col5","col6"]
          }
        };    
        }
        arr[i++]={
            "name": "EjeY",
            "value": "col3",
            "bind": {
              "input": "select",
              "options": ["col1","col2","col3","col4","col5","col6"]
            }
          };

        console.log(arr);
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
    console.log(arr);
    return arr;
}
function generarColumnas(selectores){
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

  "signals": crearSeleccion(selectores)

  /*
  [
    {
      "name": "EjeX",
      "value": "col2",
      "bind": {
        "input": "select",
        "options": ["col1","col2","col3","col4","col5","col6"]
      }
    },
    {
      "name": "EjeY",
      "value": "col5",
      "bind": {
        "input": "select",
        "options": ["col1","col2","col3","col4","col5","col6"]
      }
    },    
    {
      "name": "Barras1",
      "value": "col3",
      "bind": {
        "input": "select",
        "options": ["col1","col2","col3","col4","col5","col6"]
      }
    },    
    {
      "name": "Barras2",
      "value": "col4",
      "bind": {
        "input": "select",
        "options": ["col1","col2","col3","col4","col5","col6"]
      }
    },    
    {
      "name": "Barras3",
      "value": "col5",
      "bind": {
        "input": "select",
        "options": ["col1","col2","col3","col4","col5","col6"]
      }
    }
    ]
    */
    ,
        "scales": [
            {
                "name": "x",
                "type":  "band",
                "range": "width",
                "nice": true,
                "domain": {"data": "valores", "field": "col2"},
                "padding": 0.3
            },
            {
                "name": "y",
                "type": "linear",
                "range": "height",
                 "round": true,
                "zero": true,
                "nice": true,
                "domain": {"data": "valores", "field": {"signal":"EjeY"}},
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
                        "groupby": "col2"
                    }
                },
                "encode": {
                    "enter": {
                        "x": {"scale": "x", "field": "col2"}
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
                        "domain": dominio(selectores)
                    }
                ],
                "marks": crearBarras(selectores)
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