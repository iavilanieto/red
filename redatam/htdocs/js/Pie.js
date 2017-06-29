function obtenerListadoOpciones(nombreCol) {
    var arreglo = []
    for(var i=0;i<personas2.length;i++) {
        arreglo.push(personas2[i][nombreCol]);
    }
    return arreglo;
}

function Datos(rango){
var arreglo = [{"f1":0},{"f1":0}];
    for(var i=0;i<personas2.length;i++) {
        if (personas2[i]["col2"]===rango) {
          arreglo[0]["f1"]=personas2[i]["col3"];
          arreglo[1]["f1"]=personas2[i]["col4"];
          break;
        };
    }
  return arreglo;
    }

function generarPie(agrupamiento){
    return {
    "$schema": esquema,
    "width": 400,
    "height": 400,

    "data": [
    {
      "name": "table",
      "values": datosPersonas,
      "transform": [
        {
          "type": "pie","field": agrupamiento
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
            "x": {"field": {"group": "width"},"mult": 0.5},
            "y": {"field": {"group": "height"},"mult": 0.5}
          },
          "update": {
            "tooltip": {"field": agrupamiento}, 
            "fill": {"scale": "color","field":  agrupamiento},
            "startAngle": {"field": "startAngle"},
            "endAngle": {"field": "endAngle"},
            "innerRadius": {"value": 0},
            "outerRadius": {"signal": "width / 3"}
          },
          "hover": {
            "fill": {"value": "grey"}
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
            "angle": {"value": 55},
            "radius": {"value": 150,"offset": 8}
          }, 
          "update":{
            "fill": {"value": "#000"},
            "theta": {"signal": "(datum.startAngle + datum.endAngle)/2"},
            "align": {"value": "center"},
            "text": {"field":  agrupamiento}
          }
        }
      }
    ]
  }
}


function generarPieRango(rango){
    return {
    "$schema": esquema,
    "width": 400,
    "height": 400,

    "data": [
    {
      "name": "table",
      "values": Datos(rango),
      "transform": [
        {
          "type": "pie","field": "f1"
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
            "x": {"field": {"group": "width"},"mult": 0.5},
            "y": {"field": {"group": "height"},"mult": 0.5}
          },
          "update": {
            "tooltip": {"field": "f1"},
            "fill": {"scale": "color","field": "f1"},
            "startAngle": {"field": "startAngle"},
            "endAngle": {"field": "endAngle"},
            "innerRadius": {"value": 0},
            "outerRadius": {"signal": "width / 3"}
          },
          "hover": {
            "fill": {"value": "grey"}
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
            "angle": {"value": 55},
            "radius": {"value": 150,"offset": 8}
          }, 
          "update":{
            "fill": {"value": "#000"},
            "theta": {"signal": "(datum.startAngle + datum.endAngle)/2"},
            "align": {"value": "center"},
            "text": {"field": "f1"}
          }
        }
      }
    ]
  }
}
