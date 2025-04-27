<?php
// write a program to chech whether given number is string palindrome or not.

if (isset($_GET['num'])) {
    $num = $_GET['num'];
    $reversedNum = strrev($num);
    echo "$num is " . ($reversedNum == $num ? "" : "not ") . "a string palindrome number";
}
?>
