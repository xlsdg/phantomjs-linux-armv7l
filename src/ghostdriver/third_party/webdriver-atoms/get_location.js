function(){return function(){var e=this;var g,n,p,q;function r(){return e.navigator?e.navigator.userAgent:null}q=p=n=g=!1;var s;if(s=r()){var t=e.navigator;g=0==s.indexOf("Opera");n=!g&&-1!=s.indexOf("MSIE");p=!g&&-1!=s.indexOf("WebKit");q=!g&&!p&&"Gecko"==t.product}var u=g,v=n,w=q,x=p;function y(){var a=e.document;return a?a.documentMode:void 0}var z;
a:{var A="",B;if(u&&e.opera)var C=e.opera.version,A="function"==typeof C?C():C;else if(w?B=/rv\:([^\);]+)(\)|;)/:v?B=/MSIE\s+([^\);]+)(\)|;)/:x&&(B=/WebKit\/(\S+)/),B)var D=B.exec(r()),A=D?D[1]:"";if(v){var E=y();if(E>parseFloat(A)){z=String(E);break a}}z=A}var F={};
function G(a){var b;if(!(b=F[a])){b=0;for(var c=String(z).replace(/^[\s\xa0]+|[\s\xa0]+$/g,"").split("."),h=String(a).replace(/^[\s\xa0]+|[\s\xa0]+$/g,"").split("."),J=Math.max(c.length,h.length),d=0;0==b&&d<J;d++){var f=c[d]||"",m=h[d]||"",Q=RegExp("(\\d*)(\\D*)","g"),U=RegExp("(\\d*)(\\D*)","g");do{var k=Q.exec(f)||["","",""],l=U.exec(m)||["","",""];if(0==k[0].length&&0==l[0].length)break;b=((0==k[1].length?0:parseInt(k[1],10))<(0==l[1].length?0:parseInt(l[1],10))?-1:(0==k[1].length?0:parseInt(k[1],
10))>(0==l[1].length?0:parseInt(l[1],10))?1:0)||((0==k[2].length)<(0==l[2].length)?-1:(0==k[2].length)>(0==l[2].length)?1:0)||(k[2]<l[2]?-1:k[2]>l[2]?1:0)}while(0==b)}b=F[a]=0<=b}return b}var H=e.document,I=H&&v?y()||("CSS1Compat"==H.compatMode?parseInt(z,10):5):void 0;var K;!w&&!v||v&&v&&9<=I||w&&G("1.9.1");v&&G("9");function L(a,b){this.x=void 0!==a?a:0;this.y=void 0!==b?b:0}L.prototype.toString=function(){return"("+this.x+", "+this.y+")"};function M(a){return 9==a.nodeType?a:a.ownerDocument||a.document}function N(a){this.a=a||e.document||document};function O(a){var b;a:{b=M(a);if(b.defaultView&&b.defaultView.getComputedStyle&&(b=b.defaultView.getComputedStyle(a,null))){b=b.position||b.getPropertyValue("position")||"";break a}b=""}return b||(a.currentStyle?a.currentStyle.position:null)||a.style&&a.style.position}
function P(a){if(v&&!(v&&8<=I))return a.offsetParent;var b=M(a),c=O(a),h="fixed"==c||"absolute"==c;for(a=a.parentNode;a&&a!=b;a=a.parentNode)if(c=O(a),h=h&&"static"==c&&a!=b.documentElement&&a!=b.body,!h&&(a.scrollWidth>a.clientWidth||a.scrollHeight>a.clientHeight||"fixed"==c||"absolute"==c||"relative"==c))return a;return null};function R(a){var b,c=M(a),h=O(a),J=w&&c.getBoxObjectFor&&!a.getBoundingClientRect&&"absolute"==h&&(b=c.getBoxObjectFor(a))&&(0>b.screenX||0>b.screenY),d=new L(0,0),f;b=c?M(c):document;(f=!v)||(f=v&&9<=I)||(f="CSS1Compat"==(b?new N(M(b)):K||(K=new N)).a.compatMode);f=f?b.documentElement:b.body;if(a==f)return d;if(a.getBoundingClientRect){a:{var m;try{m=a.getBoundingClientRect()}catch(Q){b={left:0,top:0,right:0,bottom:0};break a}v&&a.ownerDocument.body&&(b=a.ownerDocument,m.left-=b.documentElement.clientLeft+
b.body.clientLeft,m.top-=b.documentElement.clientTop+b.body.clientTop);b=m}a=(c?new N(M(c)):K||(K=new N)).a;c=x||"CSS1Compat"!=a.compatMode?a.body||a.documentElement:a.documentElement;a=a.parentWindow||a.defaultView;c=v&&G("10")&&a.pageYOffset!=c.scrollTop?new L(c.scrollLeft,c.scrollTop):new L(a.pageXOffset||c.scrollLeft,a.pageYOffset||c.scrollTop);d.x=b.left+c.x;d.y=b.top+c.y}else if(c.getBoxObjectFor&&!J)b=c.getBoxObjectFor(a),c=c.getBoxObjectFor(f),d.x=b.screenX-c.screenX,d.y=b.screenY-c.screenY;
else{b=a;do{d.x+=b.offsetLeft;d.y+=b.offsetTop;b!=a&&(d.x+=b.clientLeft||0,d.y+=b.clientTop||0);if(x&&"fixed"==O(b)){d.x+=c.body.scrollLeft;d.y+=c.body.scrollTop;break}b=b.offsetParent}while(b&&b!=a);if(u||x&&"absolute"==h)d.y-=c.body.offsetTop;for(b=a;(b=P(b))&&b!=c.body&&b!=f;)d.x-=b.scrollLeft,u&&"TR"==b.tagName||(d.y-=b.scrollTop)}return d}var S=["_"],T=e;S[0]in T||!T.execScript||T.execScript("var "+S[0]);for(var V;S.length&&(V=S.shift());)S.length||void 0===R?T=T[V]?T[V]:T[V]={}:T[V]=R;; return this._.apply(null,arguments);}.apply({navigator:typeof window!=undefined?window.navigator:null,document:typeof window!=undefined?window.document:null}, arguments);}
