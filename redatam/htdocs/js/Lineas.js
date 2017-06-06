function generarLineas(){
    return {
        "$schema": esquema,
        "width": datosPersonas.length*35,
        "height": datosPersonas.length+200,
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
              "field": "col2"
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
              "field": "col5"
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
            "marks": [
              {
                "type": "line",
                "from": {
                  "data": "table"
                },
                "encode": {
                  "enter": {
                    "x": {
                      "scale": "x",
                      "field": "col2"
                    },
                    "y": {
                      "scale": "y",
                      "field": "col3"
                    },
                    "stroke": {
                      "value": "grey"
                    },
                    "strokeWidth": {
                      "value": 2
                    }
                  },
                  "update": {
                    "interpolate": {
                      "signal": "interpolate"
                    },
                    "fillOpacity": {
                      "value": 1
                    }
                  },
                  "hover": {
                    "fillOpacity": {
                      "value": 0.5
                    }
                  }
                }
              },
              {
                "type": "line",
                "from": {
                  "data": "table"
                },
                "encode": {
                  "enter": {
                    "x": {
                      "scale": "x",
                      "field": "col2"
                    },
                    "y": {
                      "scale": "y",
                      "field": "col4"
                    },
                    "stroke": {
                      "value": "#1f77b4"
                    },
                    "strokeWidth": {
                      "value": 2
                    }
                  },
                  "update": {
                    "interpolate": {
                      "signal": "interpolate"
                    },
                    "fillOpacity": {
                      "value": 1
                    }
                  },
                  "hover": {
                    "fillOpacity": {
                      "value": 0.5
                    }
                  }
                }
              }
            ]
          }
        ]}
        }
