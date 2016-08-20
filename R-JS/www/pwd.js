var correct = false;

var pwd = prompt("Enter Password : ", " ");

if(pwd=="sublime") {
  correct = true;
}
// window.location = "wait.html";
$(document).ready(function () {
  if(correct==false) {
    window.location = 'error.html';
  }
  // else {
  //   window.location.href = 'index.html';
  // }
});




