function generarLineas(){
    return {
        "$schema": esquema,
        "width": datosJSON.length * 35,
        "height": 200,
        "padding": 5,

        "signals": [
            {
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
            }
        ],

        "data": [
            {
                "name": "personas",
                "values": personas2
            },
            {
                "name": "table",
                "source": "personas",
                "transform": [
                    {
                        "type": "fold", 
                        "fields": ["col2","col3","col4"]
                    }
                ]
            }
        ],

        "scales": [
            {
                "name": "x",
                "type": "point",
                "range": "width",
                "domain": {"data": "table", "field": "col2"}
            },
            {
                "name": "y",
                "type": "linear",
                "range": "height",
                "nice": true,
                "zero": true,
                "domain": {"data": "table", "field": "col5"}
            }
        ],

        "axes": [
            {"orient": "bottom", "scale": "x"},
            {"orient": "left", "scale": "y"}
        ],

        "marks": [
            {
                "type": "group",
                "marks": [
                    {
                        "type": "line",
                        "from": {"data": "table"},
                        "encode": {
                            "enter": {
                                "x": {"scale": "x", "field": "col2"},
                                "y": {"scale": "y", "field": "col3"},
                                "stroke": {"value": "#333"},
                                "strokeWidth": {"value": 2}
                            },
                            "update": {
                                "interpolate": {"signal": "interpolate"},
                                "fillOpacity": {"value": 1}
                            },
                            "hover": {
                                "fillOpacity": {"value": 0.5}
                            }
                        }
                    },{
                        "type": "line",
                        "from": {"data": "table"},
                        "encode": {
                            "enter": {
                                "x": {"scale": "x", "field": "col2"},
                                "y": {"scale": "y", "field": "col4"},
                                "stroke": {"value": "#fd3d3d"},
                                "strokeWidth": {"value": 2}
                            },
                            "update": {
                                "interpolate": {"signal": "interpolate"},
                                "fillOpacity": {"value": 1}
                            },
                            "hover": {
                                "fillOpacity": {"value": 0.5}
                            }
                        }
                    }
                ]
            }
        ]
    }
}
