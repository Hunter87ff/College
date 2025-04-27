<!-- Create a php program to find odd or even number from given number. -->


<?php
    if($_GET){
        $num = (int)$_GET['num'];
        if($num % 2 == 0){echo "$num is an even number";}
        else{echo "$num is an odd number";}
    }
?>
<!-- url : http://localhost/hunter87/as2/p1.php?num=87 -->