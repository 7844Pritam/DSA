const fname = document.getElementById("fname");
const lname = document.getElementById("lname");
const dob = document.getElementById("dob");
const classs = document.getElementById("class");
const mob = document.getElementById("mob");

if (fname.value == "") {
  fname.classList.add("border-red");
}
