<!-- Write a PHP program to compute give number multiplication table. -->

<?php
if(isset($_GET['num'])){
    $num = $_GET['num'];
    for($i=1; $i<=10; $i++){
        echo $num." x ".$i." = ".$num*$i."<br>";
    }
}
?>
<!-- http://localhost/hunter87/as3/p1.php?num=4 -->