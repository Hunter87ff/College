<!-- Write a PHP Script to find the factorial of a given number -->

<?php
    if ($_GET) {
        $number = $_GET['num']; $factorial = 1;
        for ($i = 1; $i <= $number; $i++) {
            $factorial *= $i;
        }
        echo "The factorial of $number is $factorial";
    }
?>
<!-- http://localhost/hunter87/as7/p1.php?num=5 -->
<!-- Output : The factorial of 5 is 120 -->
