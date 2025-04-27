<!-- 11.	Write a php program to check whether given number is Armstrong or not. -->

<?php
if (isset($_GET['num'])) {
    $num = $_GET['num'];
    $sum = 0;
    for ($i = 0; $i < strlen($num); $i++) {
        $sum += pow($num[$i], strlen($num));
    }
    echo "$num is " . ($sum == $num ? "" : "not ") . "an Armstrong number";
}
?>
<!-- http://localhost/hunter87/as4/p2.php?num=152 -->