function generarPie(){
    return {
    "$schema": esquema,
    "width": 400,
    "height": 400,

    "data": [
    {
      "name": "table",
      "values": personas2,
      "transform": [
        {
          "type": "pie","field": {"signal": "Seleccion"}
        }
      ]
    }
    ],
    "scales": [
      {
        "name": "color",
        "type": "ordinal",
        "range": {"scheme": "category20"}
      }
    ],
    "signals": [
    {
      "name": "Seleccion",
      "value": "col3",
      "bind": {
        "input": "select",
        "options": ["col1","col2","col3","col4","col5","col6"]
      }
    }
    ],
    "marks": [    
      {
        "type": "arc",
        "from": {"data": "table"},
        "encode": {
          "enter": {
            "tooltip": {
              "signal": "Seleccion"
            },
            "fill": {"scale": "color","field": {"signal":"Seleccion"}},
            "x": {"field": {"group": "width"},"mult": 0.5},
            "y": {"field": {"group": "height"},"mult": 0.5},
            "startAngle": {"field": "startAngle"},
            "endAngle": {"field": "endAngle"},
            "innerRadius": {
              "value": 0
            },
            "outerRadius": {
              "signal": "width / 3"
            }
          },
          "update": {
            "fill": {"scale": "color","field": {"signal":"Seleccion"}
          },
            
          },
          "hover": {
            "fill": {
              "value": "grey"
            }
          }
        }
      },
      {
        "type": "text",
        "from": {
          "data": "table"
        },
        "encode": {
          "enter": {
            "x": {"field": {"group": "width"}, "mult": 0.5},
            "y": {"field": {"group": "height"}, "mult": 0.5},
            "angle": {"value": 55},
            "radius": {"value": 150,"offset": 8},
            "fill": {"value": "#000"},
            "theta": {"signal": "(datum.startAngle + datum.endAngle)/2"},
            "align": {"value": "center"},
            "baseline": {"value": "bottom"},
            "text": {"field": {"signal":"Seleccion"}},
            "fontSize": {"value": 12},
          }, 
          "update":{
            "text": {"field": {"signal":"Seleccion"}}
          }
        }
      }
    ]
  }
}