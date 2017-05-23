function generarBarras(){
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
  ]
  ,
  "scales": [
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
  ]
  ,

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
              "fill": {"value": "grey"}
          } 
        }},
        {
          "name": "bars1",
          "from": {"data": "facet"},
          "type": "rect",
          "encode": {
            "enter": {
              "x": {"scale": "pos","field": "col4"},
              "width": {"scale": "pos", "band": 0.5},
              "y": {"scale": "y", "field": "col4"},
              "y2": {"scale": "y", "value": 0},
               "fill": {"value": "#659CCA"}
          } 
        }}
       
      ]
    }
  ]
}}
