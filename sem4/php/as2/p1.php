<!-- Create a php program to find odd or even number from given number. -->

<form action="./p1.php" method="post">
    <label >Enter a number : </label> <br>
    <input type="number" name="num" required> <br>
    <button>Submit</button>
</form>
<?php
    if($_POST){
        $num = $_POST['num'];
        if($num % 2 == 0){
            echo "$num is an even number";
        }else{
            echo "$num is an odd number";
        }
    }
?>