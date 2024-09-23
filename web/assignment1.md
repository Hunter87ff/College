# Assignment 1: Building an Interactive Web Application
## Objective: Create a simple interactive web application that captures user information through an HTML form, processes the input using JavaScript, and dynamically updates the content on the webpage. The application should also include basic error handling for user inputs.
## Requirements:
  Part 1: HTML Form Creation
    1.	Design an HTML form with the following fields:
      o	Name (Text input, required)
      o	Email (Text input, required, validate format using regex)
      o	Age (Number input, required, must be between 18 and 100)
      o	Gender (Radio buttons: Male, Female, Other)
      o	Country (Dropdown menu with options)
      o	Subscribe to Newsletter (Checkbox)
      o	Comments (Text area)
      o	Submit Button
    2.	Ensure proper use of labels and input attributes (e.g., required, placeholder, pattern) for better form accessibility and validation.
      Part 2: JavaScript Processing and DOM Manipulation
## 1.	Write a JavaScript function that runs when the form is submitted:
  o	Prevent the default form submission behavior using event.preventDefault().
  o	Validate the form inputs to ensure all required fields are filled in correctly. Display an error message if any validation fails.
  o	Calculate the length of the user's name and display a message if the name is too short (less than 3 characters) or too long (more than 20 characters).
  o	Check the age input and ensure it falls within the allowed range. If not, display an error message.
## 2.	Dynamically update the webpage content:
  o	After successful form submission, display a summary of the user's input on the page (e.g., "Thank you, [Name]! We've received your details.").
  o	Highlight specific form inputs in the summary (e.g., show the selected country in bold).
  o	If the user opted to subscribe to the newsletter, display an additional message like "You've subscribed to our newsletter!"
## 3: Error Handling
  1.	Implement error handling in JavaScript:
    o	If any JavaScript errors occur during form processing (e.g., trying to access an undefined DOM element), catch the errors using try-catch blocks.
    o	Log the error messages to the console and display a user-friendly error message on the webpage.
  2.	Handle non-existent elements gracefully:
    o	Ensure that all DOM manipulations are safe. For example, before updating the content of an element, check if the element exists in the DOM. If not, log a warning to the console



```html
<!DOCTYPE html>
<html>
    <head>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Assignment 1</title>
        <style>form *{margin: 4px 0;} #dform{border-radius: 5px; border: solid 1px gray; padding: 1rem;}</style>
    </head>
    <body style="display: grid; place-items: center;">
        <form  id="dform">
            <label for="fname">Name:</label>
            <input id="fname" required placeholder="Enter your name"><br>
            <label for="femail">Email:</label>
            <input id="femail" required placeholder="Enter your email"><br>
            <label for="age">Age:</label>
            <input type="number" id="age" required min="18" max="100"><br>
            <label>Male</label><input required name="gender" type="radio" id="male">
            <label>Female</label><input required name="gender" type="radio" id="female">
            <label>Other</label><input required name="gender" type="radio" id="other"><br>
            <label for="country">Country: </label>
            <select id="country">
                <option value="Bharat">Bharat(India)</option>
                <option value="Israel">Israel</option>
                <option value="Russia">Russia</option>
            </select><br>
            <input type="checkbox" id="newsletter"> <label for="newsletter">Subscribe to newsletter</label><br>
            <label for="comments">Comments:</label><br>
            <textarea id="comments" cols="30" rows="5"  placeholder="Enter your comment"></textarea><br>
            <button >Submit</button>
            <div id="output" style="padding:1rem; border-radius:5px; background:#e0dfdf;"></div>
        </form>
        
    <script>
        document.querySelector("#dform").addEventListener("submit", ()=>{
            event.preventDefault();
            const outputDiv = document.querySelector("#output");
            try{
                let queries = ["#fname", "#femail", "#age", "input[name='gender']:checked", "#country", "#comments", "#newsletter"];
                let elements = queries.map(id => document.querySelector(id));
                if(elements[1].value.match(/^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/) == null) alert("Invalid Email");
                outputDiv.innerHTML = `
                Name : ${elements[0].value}<br>
                Email : ${elements[1].value}<br>
                Age : ${elements[2].value}<br>
                Gender : ${elements[3].id}<br>
                Country : ${elements[4].value}<br>
                Newsletter : ${elements[6].checked? "Subscribed":"Not Subscribed"}<br>
                Comments : ${elements[5].value.replace("\n", "<br>")}<br>
                `;
            }catch(err){
                console.error("Error: " + err);
                outputDiv.style.background = "red";
                outputDiv.innerHTML = "Error: "+ err;}
        });
    </script>
    </body>
</html>
```
