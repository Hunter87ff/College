<!--
Create a php webpage and print your name.
2.	To write a program gets the name of the user from a form and show greeting text. 
-->


<form action="./p1.php" method="POST">
    <label > Enter your name : </label> <br>
    <input type="text" name="name" required> <br>
    <button>Submit</button>
</form>
<?php
    if($_POST){
        echo "Hello ".$_POST['name'];
    }
?>
