<!-- 6.	Write a PHP program to swap two numbers -->

<form action="./p3.php" method="post">
    <label >Enter first number : </label> <br>
    <input type="number" name="num1" required> <br>
    <label >Enter second number : </label> <br>
    <input type="number" name="num2" required> <br>
    <button>Submit</button>
</form>
<?php
    if($_POST){
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];
        echo "Before swapping: $num1 , $num2 <br>";
        $temp = $num1;
        $num1 = $num2;
        $num2 = $temp;
        echo "After swapping: $num1 , $num2 <br>";
    }
?>