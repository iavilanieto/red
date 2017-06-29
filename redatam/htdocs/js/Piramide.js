function generarPiramide(ejeX, ejeY, agrupamiento){
    return {
        "$schema":esquema ,
        "height": datosPersonas.length*5+250,
        "width": (datosPersonas.length)*15,
        "padding": 5,

        "signals": [
            { "name": "chartWidth", "value": 300 },
            { "name": "chartPad", "value": 20 },
            { "name": "width", "update": "2 * chartWidth + chartPad" },
            { "name": "year", "value": 2000 },
            { "name": "Grupo1", "value": agrupamiento,
                "bind": { "input": "select", "options": ["col1","col2","col3","col4","col5","col6"]}
            },
            { "name": "Grupo2", "value": agrupamiento,
                "bind": { "input": "select", "options": ["col1","col2","col3","col4","col5","col6"]}
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

        "data": [
            {
                "name": "population",
                "values": datosPersonas
            },
            {
                "name": "valores",
                "source": "population",
                "transform": [
                    {
                        "type": "fold", 
                        "fields": ["col3","col4"]
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
                "name": "y",
                "type": "band",
                "range": [{"signal": "height"}, 0],
                "round": true,
                "domain": {"data": "population", "field": ejeY}
            }
        ],

        "marks": [
            {
                "type": "text",
                "interactive": false,
                "from": {"data": "population"},
                "encode": {
                    "enter": {
                        "x": {"signal": "chartWidth + chartPad / 2"},
                        "y": {"scale": "y", "field": ejeY, "band": 0.5},
                        "text": {"field": ejeY},
                        "baseline": {"value": "middle"},
                        "align": {"value": "center"},
                        "fill": {"value": "grey"}
                    }
                }
            },
            {
                "type": "group",

                "encode": {
                    "update": {
                        "x": {"value": -50},
                        "height": {"signal": "height"}
                    }
                },

                "scales": [
                    {
                        "name": "x",
                        "type": "linear",
                        "range": [{"signal": "chartWidth"}, 0],
                        "nice": true, "zero": true,
                        "domain": {"data": "valores", "field": ejeX}
                    }
                ],

                "axes": [
                    {"orient": "bottom", "scale": "x", "format": "s", "title":"# Casos"
                    }
                ], 
                "marks": [
                    {
                        "type": "rect",
                        "from": {"data": "population"},
                        "encode": {
                            "update": {
                                "x": {"scale": "x", "field": {"signal":"Grupo1"}},
                                "x2": {"scale": "x", "value": 0},
                                "y": {"scale": "y", "field": ejeY},
                                "height": {"scale": "y", "band": 1, "offset": -1},
                                "fillOpacity": {"value": 0.6},
                                "fill": {"value": "#1f77b4"}
                            }
                        }
                    }
                ]
            },
            {
                "type": "group",

                "encode": {
                    "update": {
                        "x": {"signal": "chartWidth+chartPad"},
                        "height": {"signal": "height"}
                    }
                },

                "scales": [
                    {
                        "name": "x",
                        "type": "linear",
                        "range": [50, {"signal": "chartWidth"}],
                        "nice": true, "zero": true,
                        "domain": {"data": "valores", "field": ejeX}
                    }
                ],

                "axes": [
                    {"orient": "bottom", "scale": "x", "format": "s", "title":"# Casos"}
                ], 
                "marks": [
                    {
                        "type": "rect",
                        "from": {"data": "population"},
                        "encode": {
                            "update": {
                                "x": {"scale": "x", "field": {"signal":"Grupo2"}},
                                "x2": {"scale": "x", "value": 0},
                                "y": {"scale": "y", "field": ejeY},
                                "height": {"scale": "y", "band": 1, "offset": -1},
                                "fillOpacity": {"value": 0.6},
                                "fill": {"value": "#000"}
                            }
                        }
                    }
                ]
            }]
    }}
