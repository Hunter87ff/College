<!-- 5.	Write a php program to find maximum of three numbers. -->

<?php
    if($_GET){
        $num1 = (int)$_GET['num1'];
        $num2 = (int)$_GET['num2'];
        $num3 = (int)$_GET['num3'];
        if($num1 > $num2 && $num1 > $num3){echo "$num1 is the maximum number";}
        elseif($num2 > $num1 && $num2 > $num3){echo "$num2 is the maximum number";}
        else{echo "$num3 is the maximum number";}
    }
?>

<!-- url : http://localhost/hunter87/as2/p2.php?num1=6&num2=8&num3=87 -->