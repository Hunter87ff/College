<?php
$count = 0; $total = 0;
$vowels = ["a", "e", "i", "o", "u"];
$string = isset($_GET['str']) ? $_GET['str'] : "hell";
$chars = str_split(strtolower($string));
foreach ($chars as $char) {
    if (in_array($char, $vowels)) {
        $total++; echo "$char occured at $count position<br>";
    }
    $count++;
}
echo "Total vowels in '$string' : $total<br>";
?>
<!-- http://localhost/hunter87/as5/p2.php?str=education -->