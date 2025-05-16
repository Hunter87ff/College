<!-- 20.	Write a PHP Script to find the Fibonacci series of a given number. -->

<?php
    if ($_GET) {
        $number = $_GET['num'];
        $fibonacci = array(0, 1);
        for ($i = 2; $i < $number; $i++) {
            $fibonacci[$i] = $fibonacci[$i - 1] + $fibonacci[$i - 2];
        }
        echo "The Fibonacci series of $number is: " . implode(", ", $fibonacci);
    }
?>