<!-- digitsum -->
<?php
    if(isset($_GET['num'])) {
        $num = $_GET['num']; $sum = 0;
        while($num > 0) {
            $sum += $num % 10;
            $num = (int)($num / 10);
        }
        echo "Sum of digits: " . $sum;
    }
?>
<!-- http://localhost/hunter87/as6/p3.php?num=87 -->