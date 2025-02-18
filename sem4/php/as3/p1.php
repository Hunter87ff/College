<!-- Write a PHP program to compute give number multiplication table. -->

<form action="./p1.php" method="post">
    <input type="number" name="num" placeholder="Enter a number">
    <input type="submit" value="Submit">
</form>
<?php
if(isset($_POST['num'])){
    $num = $_POST['num'];
    for($i=1; $i<=10; $i++){
        echo $num." x ".$i." = ".$num*$i."<br>";
    }
}