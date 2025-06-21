<!-- Write a division table program in PHP using for loop. -->
<?php
$n = $_GET['n'] ?? 5;
for ($i = 1; $i <= 10; $i++) echo "$n / $i = " . round($n / $i, 2) . "<br>";
?>
