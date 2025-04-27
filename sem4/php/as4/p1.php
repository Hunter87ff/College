<!-- Write a php program to check whether given number is palindrome or not. -->


<?php
if (isset($_GET['num'])) {
    $num = $_GET['num'];
    $rev = strrev($num);
    echo "$num is " . ($num == $rev ? "" : "not ") . "a palindrome";
}
?>
<!-- http://localhost/hunter87/as4/p1.php?num=152 -->