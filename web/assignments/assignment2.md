# Assignment 2: JavaScript and DOM Manipulation
Objective:
To apply your knowledge of JavaScript arrays, functions, and DOM manipulation by creating an interactive web application that processes user input and dynamically updates content.
Instructions:
## 1.	Create a Web Page (HTML, CSS, JavaScript)
o	Develop a simple webpage that includes a form to collect user information, a section to display the results, and an area for dynamic content.
## 2.	Form Structure:
o	The form should contain the following fields:
	Name (text input, required, min 3 characters)
	Email (email input, required, must follow email format)
	Age (number input, required, range between 18 and 100)
	Gender (radio buttons, options: Male, Female, Other)
	Country (dropdown menu with at least 3 options)
	Favorite Fruits (checkboxes for multiple selection: Apple, Banana, Mango, etc.)
	Comments (textarea, optional)
## 3.	JavaScript Arrays:
o	Store the list of favorite fruits selected by the user in an array.
o	Display the selected fruits in the results section after the form is submitted.
## 4.	Function Declarations:
o	Write functions for:
- 	Validation: Check if all required fields are filled and valid. Display an alert if any validation fails.
- 	Form Submission: Handle form submission, prevent the default action, and display the user's input in a formatted way in the results section.
- 	DOM Manipulation: Update the content dynamically using DOM methods (e.g., getElementById(), innerHTML, etc.).
## 5.	DOM Manipulation:
- o	Access and manipulate various form elements using JavaScript:
- 	Change the background color of the results section after form submission.
- 	Display a list of favorite fruits selected by the user using a loop to iterate over the array.
## 6.	Additional Requirements:
o	Ensure the page is styled using CSS to make the form and results section visually appealing.
### o	Use JavaScript to handle the following events:
- 	Click Event: Change the text of a button when it is clicked.
- 	Mouseover Event: Change the color of a heading when the mouse hovers over it.
- o	Include a reset button to clear the form and results section.

```html
<!DOCTYPE html>
<html>
    <head>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Assignment 2</title>
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

            <label>Favorite Fruits:</label><br>
            <input type="checkbox"  name="fruits" value="Apple">
            <label for="apple">Apple</label>
            <input type="checkbox"  name="fruits" value="Banana">
            <label for="banana">Banana</label>
            <input type="checkbox"  name="fruits" value="Mango">
            <label for="mango">Mango</label><br><br>

            <input type="checkbox" id="newsletter"> <label for="newsletter">Subscribe to newsletter</label><br>
            <label for="comments">Comments:</label><br>
            <textarea id="comments" cols="30" rows="5"  placeholder="Enter your comment"></textarea><br>
            <button >Submit</button> <button type="reset">Reset</button>
            <div id="output" style="padding:1rem; border-radius:5px; background:#e0dfdf;"></div>
        </form>
        
    <script>
        document.querySelector("#dform").addEventListener("submit", ()=>{
            event.preventDefault();
            const outputDiv = document.querySelector("#output");
            try{
                let queries = ["#fname", "#femail", "#age", "input[name='gender']:checked", "#country", "#comments", "#newsletter"];
                let fruits = [];
                document.querySelectorAll("input[name='fruits']:checked").forEach(e => fruits.push(e.value));
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
                Fruits : ${fruits.map(e => e).join(", ")}
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



![Screenshot](https://github.com/user-attachments/assets/bde89f8d-ec62-4d70-ad47-4d7569869a52)

