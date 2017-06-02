function generarMapa(){
    return {
        "$schema": esquema,

        "width": 900,
        "height": 560,
        "padding": {"top": 0, "left": 0, "right": 0, "bottom": 0},
        "data": [],
        "scales": [],
        "signals": [],
        "marks": [],
        "data": [
            {
                "name": "mapa",
                "values": mapa 
            },
            {
                "name": "valores",
                "source": "mapa",
                "format": 
                    {
                        "type": "topojson", 
                        "feature": "features" 
                    },
                 "transform": [
                      {
                        "type": "geopath", "projection": "albers",
                        "scale": 1200, "translate": [450, 280]
                      }
                    ]
                
            }
        ],
        "marks": [
                  {
                    "type": "path",
                    "from": {"data": "valores"},
                    "properties": {
                      "enter": {
                        "path": {"field": "layout_path"},
                        "fill": {"value": "#dedede"},
                        "stroke": {"value": "white"}
                      }
                    }
                  }
                ]
        
    }
}