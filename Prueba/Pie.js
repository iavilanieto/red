function obtenerListadoOpciones(nombreCol) {
    var arreglo = []
    for(var i=0;i<personas2.length;i++) {
        arreglo.push(personas2[i][nombreCol]);
    }
    return arreglo;
}

function Datos(rango){
var arr=[{"f1":250},{"f1":555}];
console.log(rango);
var arreglo = [{"f1":0},{"f1":0}];
    for(var i=0;i<personas2.length;i++) {
        if (personas2[i]["col2"]===rango) {
          arreglo[0]["f1"]=personas2[i]["col3"];
          arreglo[1]["f1"]=personas2[i]["col4"];
          break;
        };
    }
  console.log(arreglo);
    }

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
        "options": obtenerListadoOpciones("col2")
      }
      /*
      ,
      "on": [
            {"events": "@Seleccion:mouseover", "update": "{signal:Seleccion}"},
           {"events": "@Seleccion:mouseout", "update": "{signal:Seleccion}"}
          ]
      "on":[
        {
           
            "events": "Seleccion:click", "update":"Seleccion" //, {"type": "click"},{"print":"console.log('x: number')"}],
        }
          ]
      
      ,
      "streams": [
        {"type": "click","signal":"Seleccion", "expr": "console.log('lee')"}//{$('select[name=Seleccion]').val()}"}
      ]
          */
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
            "tooltip": {"field": {"signal":"Seleccion"}},
            "fill": {"scale": "color","field": {"signal":"Seleccion"}},
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
            "text": {"field": {"signal":"Seleccion"}}
          }
        }
      }
    ]
  }
}


function generarPieRango(arr){
    return {
    "$schema": esquema,
    "width": 400,
    "height": 400,

    "data": [
    {
      "name": "table",
      "values": arr,
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
         //   "tooltip": {"field": "f1"},
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
      }/*,
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
            "text": {"field": {"value":"datum.arr"}}
          }
        }
      }*/
    ]
  }
}
