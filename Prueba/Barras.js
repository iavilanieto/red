function generarPiramide2(){
   return {
    "$schema": "https://vega.github.io/schema/vega/v3.0.json",
  "width": 300,
  "height": 240,
  "padding": 5,

  "data": [
    {
      "name": "table",
      "values": [
        {"category":"A", "position":0, "value":0.1},
        {"category":"A", "position":1, "value":0.6},
        {"category":"A", "position":2, "value":0.9},
        {"category":"A", "position":3, "value":0.4},
        {"category":"B", "position":0, "value":0.7},
        {"category":"B", "position":1, "value":0.2},
        {"category":"B", "position":2, "value":1.1},
        {"category":"B", "position":3, "value":0.8},
        {"category":"C", "position":0, "value":0.6},
        {"category":"C", "position":1, "value":0.1},
        {"category":"C", "position":2, "value":0.2},
        {"category":"C", "position":3, "value":0.7}
      ]
    }
  ],

  "scales": [
    {
      "name": "x",
      "type":  "band",
      "range": "width",
      "domain": {"data": "table", "field": "category"},
      "padding": 0.2
    },
    {
      "name": "y",
      "type": "linear",
      "range": "height",
      "round": true,
      "zero": true,
      "nice": true,
      "domain": {"data": "table", "field": "value"},
    },
    {
      "name": "color",
      "type": "ordinal",
      "domain": {"data": "table", "field": "position"},
      "range": {"scheme": "category20"}
    }
  ],

  "axes": [
    {"orient": "bottom", "scale": "x", "zindex": 1,"tickSize": 0,"labelPadding": 4},
    {"orient": "left", "scale": "y", "zindex": 1},
  ]
  ,

  "marks": [
    {
      "type": "group",

      "from": {
        "facet": {
          "data": "table",
          "name": "facet",
          "groupby": "category"
        }
      },

      "encode": {
        "enter": {
          "x": {"scale": "x", "field": "category"}
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
          "domain": {"data": "facet", "field": "position"}
        }
      ]
      ,

      "marks": [
        {
          "name": "bars",
          "from": {"data": "facet"},
          "type": "rect",
          "encode": {
            "enter": {
              "x": {"scale": "pos", "field": "position"},
              "width": {"scale": "pos", "band": 1},
              "y": {"scale": "y", "field": "value"},
              "y2": {"scale": "y", "value": 0},
              "fill": {"scale": "color", "field": "position"}
            }
          }
        },
        {
          "type": "text",
          "from": {"data": "bars"},
          "encode": {
            "enter": {
              "y": {"field": "y2", "offset": -5},
              "x": {"field": "x", "offset": {"field": "width", "mult": 0.5}},
              "fill": {"value": "white"},
              "align": {"value": "right"},
              "baseline": {"value": "middle"},
              "text": {"field": "datum.value"}
            }
          }
        }
      ]
    }
  ]

}}