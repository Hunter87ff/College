<!-- 6.	Write a PHP program to swap two numbers -->

<?php
    if($_GET){
        $num1 =  (int)$_GET['num1'];
        $num2 = (int)$_GET['num2'];
        echo "Before swapping: $num1 , $num2 <br>";
        $temp = $num1; $num1 = $num2; $num2 = $temp;
        echo "After swapping: $num1 , $num2 <br>";
    }
?>
<!-- http://localhost/hunter87/as2/p3.php?num1=6&num2=8 -->