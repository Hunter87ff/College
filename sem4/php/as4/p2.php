<!-- 11.	Write a php program to check whether given number is Armstrong or not. -->

<form action="./p2.php" method="post">
    <input type="text" name="num" placeholder="Enter a number" required><br>
    <input type="submit" value="Check">
</form>
<?php
if (isset($_POST['num'])) {
    $num = $_POST['num'];
    $sum = 0;
    for ($i = 0; $i < strlen($num); $i++) {
        $sum += pow($num[$i], strlen($num));
    }
    echo "$num is " . ($sum == $num ? "" : "not ") . "an Armstrong number";
}
?>