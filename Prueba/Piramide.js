function generarPiramide(){
    return {
        "$schema":esquema ,
        "height": 300+(5*personas2.length),
        "padding": 5,

        "signals": [
            { "name": "chartWidth", "value": 300 },
            { "name": "chartPad", "value": 20 },
            { "name": "width", "update": "2 * chartWidth + chartPad" },
            { "name": "year", "value": 2000 }
        ],

        "data": [
            {
                "name": "population",
                "values": personas2
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
            }
        ],


        "scales": [
            {
                "name": "y",
                "type": "band",
                "range": [{"signal": "height"}, 0],
                "round": true,
                "domain": {"data": "population", "field": "col2"}
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
                        "y": {"scale": "y", "field": "col2", "band": 0.5},
                        "text": {"field": "col2"},
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
                        "domain": {"data": "valores", "field": "value"}
                    }
                ],

                "axes": [
                    {"orient": "bottom", "scale": "x", "format": "s"}
                ], 
                "marks": [
                    {
                        "type": "rect",
                        "from": {"data": "population"},
                        "encode": {
                            "enter": {
                                "x": {"scale": "x", "field": "col3"},
                                "x2": {"scale": "x", "value": 0},
                                "y": {"scale": "y", "field": "col2"},
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
                        "domain": {"data": "valores", "field": "value"}
                    }
                ],

                "axes": [
                    {"orient": "bottom", "scale": "x", "format": "s"}
                ], 
                "marks": [
                    {
                        "type": "rect",
                        "from": {"data": "population"},
                        "encode": {
                            "enter": {
                                "x": {"scale": "x", "field": "col4"},
                                "x2": {"scale": "x", "value": 0},
                                "y": {"scale": "y", "field": "col2"},
                                "height": {"scale": "y", "band": 1, "offset": -1},
                                "fillOpacity": {"value": 0.6},
                                "fill": {"value": "#0000"}
                            }
                        }
                    }
                ]
            }]
    }}
