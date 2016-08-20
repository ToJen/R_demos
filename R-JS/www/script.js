
/** change code text color */

function changeColor(col) {
	var tmpCol = document.getElementById('code-block').style.color;
	if(tmpCol=='blue'){
		document.getElementById('code-block').style.color = col;
	}
	else {
		document.getElementById('code-block').style.color = 'blue';
	}
}

setInterval(function() {
	changeColor('green');
}, 500);


/** change image src */

// array for storing paths of background images
var imgs = new Array();
imgs[0]='R.png';
imgs[1]='diamond.jpg';
imgs[2]='zebra.jpg';

var speed = 500;	// interval between slide (in ms)

// preload images
var imgLoc = new Array();
for (i = 0; i < imgs.length; i++){
	imgLoc[i] = new Image();
	imgLoc[i].src = imgs[i];
}

// counter
var cntr = -1;

// change background
function slideback() {
	if (cntr < imgs.length-1) cntr++;
	else cntr = 0;
	document.getElementById('pic').src = imgLoc[cntr].src;
}

// when page is loaded call function for changing backgrounds
if (document.all || document.getElementById)
	window.onload=function(){slideback(); setInterval(slideback, speed);};
