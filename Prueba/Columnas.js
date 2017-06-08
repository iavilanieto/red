function generarColumnas(){
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
                        "fields": ["col2","col3","col4","col5"]
                    }
                ]
            }
        ],

  "signals": [
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
      "name": "sex", "value": "Todos",
      "bind": {"input": "radio", "options": ["Hombres", "Mujeres", "Todos"]}
    }
    ],
        "scales": [
            {
                "name": "x",
                "type":  "band",
                "range": "width",
                "nice": true,
                "domain": {"data": "personas", "field": {"signal":"EjeX"}},
                "padding": 0.1
            },
            {
                "name": "y",
                "type": "linear",
                "range": "height",
                 "round": true,
                "zero": true,
                "nice": true,
                "domain": {"data": "personas", "field": {"signal":"EjeY"}},
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
                        "x": {"scale": "x", "field": {"signal":"EjeX"}}
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
                        "domain": {"data": "facet", "field": {"signal":"Barras1"}}
                    }
                ],
                "marks": [
                    {
                        "name": "bars",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                               "enter": {
                                "x": {"scale": "pos","field": {"signal":"Barras1"},"band": 0.5},
                                "y": {"scale": "y", "field": {"signal":"Barras1"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "grey"}
                            }, 
                            "update":{
                                "x": {"scale": "pos","field": {"signal":"Barras1"},"band": 0.5},
                                "y": {"scale": "y", "field": {"signal":"Barras1"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                        }
                      }
                    },
                    {
                        "name": "bars1",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "enter": {
                                "x": {"scale": "pos","field": {"signal":"Barras2"},"band": 0},
                                "y": {"scale": "y", "field": {"signal":"Barras2"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "#659CCA"}
                            }, 
                            "update":{
                                "x": {"scale": "pos","field": {"signal":"Barras2"},"band": 0},
                                "y": {"scale": "y", "field": {"signal":"Barras2"}},
                                "width": {"scale": "pos", "band": 0.5},
                                "y2": {"scale": "y", "value": 0},
                        }
                      }
                    }]
                  }
            ]






  }
}