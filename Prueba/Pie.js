function generarPie(){
    return {
    "$schema": "https://vega.github.io/schema/vega/v3.0.json",
    "width": 400,
    "height": 400,
    "autosize": "none",


    "data": [
      {
        "name": "table",
        "values": personas2,
        "transform": [
          {
            "type": "pie",            
              "field": "col3"
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

    "marks": [
      {
        "type": "arc",
        "from": {"data": "table"},
        "encode": {
          "enter": {
            "fill": {"scale": "color", "field": "col3"},        
            "x": {"field": {"group": "width"}, "mult": 0.5},
            "y": {"field": {"group": "height"}, "mult": 0.5},
            "startAngle": {"field": "startAngle"},
            "endAngle": {"field": "endAngle"},
            "innerRadius": {"value": 0},
            "outerRadius": {"signal": "width / 3"}
          }
        }
      },
      {
        "type": "text",
        "from": {"data": "table"},
        "encode": {
          "enter": {
            "x": {"field": {"group": "width"}, "mult": 0.5},
            "y": {"field": {"group": "height"}, "mult": 0.5},
            "radius": {"value":150,"offset": 8},
            "fill": {"value": "#000"},
           "theta": {"signal": "(datum.startAngle + datum.endAngle)/2"},
            "align": {"value": "center"},
            "baseline": {"value": "bottom"},
            "text": {"field": "col2"}
          }
        }
      }
    ]
  }
}