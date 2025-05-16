<!-- Write a program in PHP to get current directory, filename and code line number  -->
<?php
    echo "Current Directory:".getcwd()."<br>";
    echo "Filename: ". basename(__FILE__) . "<br>";
    echo "Line Number:".__LINE__. "<br>";
?>