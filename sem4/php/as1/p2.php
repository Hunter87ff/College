<!-- 3.	To write a program gets the name and phone no of the user from a form and show greeting text. -->

<form action="./p2.php" method="post">
    <label>Enter Your Name: </label><br>
    <input type="text" name="name" required><br>
    <label>Enter Your Phone No: </label><br>
    <input type="text" name="phone" required><br>
    <button>Submit</button>
</form>
<?php
    if($_POST){
        echo "Hello ".$_POST['name']."<br>";
        echo "Your Phone No is ".$_POST['phone'];
    }
?>