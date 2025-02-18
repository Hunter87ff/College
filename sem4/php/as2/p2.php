<!-- 5.	Write a php program to find maximum of three numbers. -->

<form action="./p2.php" method="post">
    <label >Enter first number : </label> <br>
    <input type="number" name="num1" required> <br>
    <label >Enter second number : </label> <br>
    <input type="number" name="num2" required> <br>
    <label >Enter third number : </label> <br>
    <input type="number" name="num3" required> <br>
    <button>Submit</button>
</form>
<?php
    if($_POST){
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];
        $num3 = $_POST['num3'];
        if($num1 > $num2 && $num1 > $num3){
            echo "$num1 is the maximum number";
        }elseif($num2 > $num1 && $num2 > $num3){
            echo "$num2 is the maximum number";
        }else{
            echo "$num3 is the maximum number";
        }
    }