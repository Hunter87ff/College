<!-- Write a php program to check whether given number is palindrome or not. -->

<form action="./p1.php" method="post">
    <input type="text" name="num" placeholder="Enter a number" required><br>
    <input type="submit" value="Check">
</form>
<?php
if (isset($_POST['num'])) {
    $num = $_POST['num'];
    $rev = strrev($num);
    echo "$num is " . ($num == $rev ? "" : "not ") . "a palindrome";
}
?>