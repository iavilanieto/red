function generarColumnas(){
    return {
  "$schema": "https://vega.github.io/schema/vega/v3.0.json",
  "width": 900,
  "height": 500,
  "autosize": "none",

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
        ],

  "signals": [
    {
      "name": "type",
      "from":{"data":"valores"},
      "bind": {
        "input": "select",
        "options": [
        "col2"]
      }
    }]




  }
}