<!-- 12.	PHP Program to display digital clock with current time of the Server. -->
 
<meta http-equiv="refresh" content="1">
<?php
    $date = getdate();
    echo "Now time is " . $date['hours'] . ":" . $date['minutes'] . ":" . $date['seconds'];
?>