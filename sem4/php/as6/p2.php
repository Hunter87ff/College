<?php
    if(isset($_GET['units'])) {
        $units = $_GET['units'];
        $bill = 0;
        if($units <= 50) {$bill = $units * 3.50;} 
        elseif($units <= 150) {$bill = (50 * 3.50) + (($units - 50) * 4.00);} 
        elseif($units <= 250) {$bill = (50 * 3.50) + (100 * 4.00) + (($units - 150) * 5.20);} 
        else {$bill = (50 * 3.50) + (100 * 4.00) + (100 * 5.20) + (($units - 250) * 6.50);}
        echo "Units: $units" . "Bill: " . number_format($bill, 2);
    }
?>
<!-- http://localhost/hunter87/as6/p2.php?units=487 -->
