<!-- 9.	Write PHP program to display current date and display using getdate() function. -->

<?php
    $date = getdate();
    echo "Today's date is " . $date['mday'] . "/" . $date['mon'] . "/" . $date['year'];
?>