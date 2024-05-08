// validation javascript file
// validation javascript file
// validation javascript file

function submit() {
  const firstNameInput = document.getElementById("firstName");
  const firstNameError = document.getElementById("firstNameError");
  if (firstNameInput.value === "") {
    firstNameInput.classList.add("error-border");
    firstNameError.textContent = "Please enter your first name.";
  } else if (firstNameInput.value.length <= 3) {
    firstNameInput.classList.add("error-border");
    firstNameError.textContent = "Name should be greater than 4 letter";
  } else {
    firstNameInput.classList.remove("error-border");
    firstNameError.textContent = "";
  }

  const lastNameInput = document.getElementById("lastName");
  const lastNameError = document.getElementById("lastNameError");
  if (lastNameInput.value === "") {
    lastNameInput.classList.add("error-border");
    lastNameError.textContent = "Please enter your last name.";
  } else if (lastNameInput.value.length <= 3) {
    lastNameInput.classList.add("error-border");
    lastNameError.textContent = "Please enter your last name.";
  } else {
    lastNameInput.classList.remove("error-border");
    lastNameError.textContent = "";
  }

  const emailvalue = document.getElementById("email");
  const emailerror = document.getElementById("emailerror");
  const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;

  if (regex.test(emailvalue.value)) {
    emailerror.textContent = "";
    emailvalue.classList.remove("error-border");
  } else if (emailvalue.value === "") {
    emailvalue.classList.add("error-border");
    emailerror.textContent = "Please enter your Email.";
  } else {
    emailerror.textContent = "Wrong Email Way of Email Writing";
  }

  const zipvalue = document.getElementById("zip");
  const ziperror = document.getElementById("ziperror");

  if (zipvalue.value === "") {
    zipvalue.classList.add("error-border");
    ziperror.textContent = "Please enter your zip code.";
  } else if (zipvalue.value.length !== 6 || isNaN(zipvalue.value)) {
    zipvalue.classList.add("error-border");
    ziperror.textContent = "Zip code should be a 6-digit number.";
  } else {
    zipvalue.classList.remove("error-border");
    ziperror.textContent = "";
  }
  /////////////////////////////////////////////////////////////
  const country = document.getElementById("country");
  const countryerror = document.getElementById("countryerror");
  if (country.value === "") {
    country.classList.add("error-border");
    countryerror.textContent = "Please select atleast one country.";
  } else {
    country.classList.remove("error-border");
    countryerror.textContent = "";
  }

  ///////////////////////////////////////////////////

  const state = document.getElementById("state");
  const stateerror = document.getElementById("stateerror");
  if (state.value === "") {
    state.classList.add("error-border");
    stateerror.textContent = "Please select atleast one state.";
  } else {
    state.classList.remove("error-border");
    stateerror.textContent = "";
  }

  ////////////////////////////////////
  const city = document.getElementById("city");
  const cityerror = document.getElementById("cityerror");
  if (city.value === "") {
    city.classList.add("error-border");
    cityerror.textContent = "Please select atleast one city.";
  } else {
    city.classList.remove("error-border");
    cityerror.textContent = "";
  }

  ////////////////////////////////
  const addressInput = document.getElementById("address");
  const addressError = document.getElementById("addresserror");

  if (addressInput.value === "") {
    addressInput.classList.add("error-border");
    addressError.textContent = "Please enter your address.";
  } else if (address.length < 5) {
    addressInput.classList.add("error-border");
    addressError.textContent = "Address is too short.";
  } else {
    addressInput.classList.remove("error-border");
    addressError.textContent = "";
  }

  var itemForm = document.getElementById("favoriteCourse");
  console.log("sdfkj", itemForm);
  var checkBoxes = itemForm.querySelectorAll('input[type="checkbox"]');
  let result = [];
  result = [];
  checkBoxes.forEach((item) => {
    if (item.checked) {
      let data = {
        item: item.value,
        selected: item.checked,
      };
      result.push(data);
    }
  });
  console.log(result);
}
