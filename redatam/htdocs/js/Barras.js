function generarBarras(){
    return {
        "$schema": esquema,
        "width": datosJSON.length*35,
        "height": datosJSON.length+200,
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
                "domain": {"data": "personas", "field": "col2"},
                "padding": 0.1
            },
            {
                "name": "y",
                "type": "linear",
                "range": "height",
                "round": true,
                "zero": true,
                "nice": true,
                "domain": {"data": "personas", "field": "col5"},
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
                        "domain": {"data": "facet", "field": "col3"}
                    }
                ],
                "marks": [
                    {
                        "name": "bars",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "enter": {
                                "x": {"scale": "pos", "field": "col3", "band": .5},
                                "width": {"scale": "pos", "band": .5},
                                "y": {"scale": "y", "field": "col3"},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "#1f77b4"}
                            }
                        }
                    },{
                        "name": "bars1",
                        "from": {"data": "facet"},
                        "type": "rect",
                        "encode": {
                            "enter": {
                                "x": {"scale": "pos","field": "col4"},
                                "width": {"scale": "pos", "band": 0.5},
                                "y": {"scale": "y", "field": "col4"},
                                "y2": {"scale": "y", "value": 0},
                                "fill": {"value": "grey"}
                            } 
                        }
                    }

                ]
            }
        ]
    }}
