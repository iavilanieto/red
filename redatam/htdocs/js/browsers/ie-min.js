(function(k,a){function l(a){for(var b=-1;++b<m;)a.createElement(h[b])}function n(a,b){for(var f=-1,d=a.length,e,c=[];++f<d;)e=a[f],(b=e.media||b)!="screen"&&c.push(n(e.imports,b),e.cssText);return c.join("")}var c=a.createElement("div");c.innerHTML="<z>i</z>";if(c.childNodes.length!==1){var h="abbr|article|aside|audio|canvas|details|figcaption|figure|footer|header|hgroup|mark|meter|nav|output|progress|section|summary|time|video".split("|"),m=h.length,p=RegExp("(^|\\s)(abbr|article|aside|audio|canvas|details|figcaption|figure|footer|header|hgroup|mark|meter|nav|output|progress|section|summary|time|video)",
"gi"),q=RegExp("<(/*)(abbr|article|aside|audio|canvas|details|figcaption|figure|footer|header|hgroup|mark|meter|nav|output|progress|section|summary|time|video)","gi"),r=RegExp("(^|[^\\n]*?\\s)(abbr|article|aside|audio|canvas|details|figcaption|figure|footer|header|hgroup|mark|meter|nav|output|progress|section|summary|time|video)([^\\n]*)({[\\n\\w\\W]*?})","gi"),o=a.createDocumentFragment(),i=a.documentElement,c=i.firstChild,g=a.createElement("body"),j=a.createElement("style"),e;l(a);l(o);c.insertBefore(j,
c.firstChild);j.media="print";k.attachEvent("onbeforeprint",function(){var c=-1,b=n(a.styleSheets,"all"),f=[],d;for(e=e||a.body;(d=r.exec(b))!=null;)f.push((d[1]+d[2]+d[3]).replace(p,"$1.iepp_$2")+d[4]);for(j.styleSheet.cssText=f.join("\n");++c<m;){b=a.getElementsByTagName(h[c]);f=b.length;for(d=-1;++d<f;)b[d].className.indexOf("iepp_")<0&&(b[d].className+=" iepp_"+h[c])}o.appendChild(e);i.appendChild(g);g.className=e.className;g.innerHTML=e.innerHTML.replace(q,"<$1font")});k.attachEvent("onafterprint",
function(){g.innerHTML="";i.removeChild(g);i.appendChild(e);j.styleSheet.cssText=""})}})(this,document);