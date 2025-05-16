<!-- Write a division table program in PHP using for loop. -->
<!DOCTYPE html>
<style>
    table, th, td {border: 1px solid black;}
    th {background: #f2f2f2;}
</style>

<h2>Division Table</h2>
<?php
$size = 10; 
echo "<table>";
echo "<tr><th></th>";
for($i = 1; $i <= $size; $i++) {echo "<th>$i</th>";}
echo "</tr>";
for($i = 1; $i <= $size; $i++) {
    echo "<tr> <th>$i</th>";
    for($j = 1; $j <= $size; $j++) {
        $result = round($i / $j, 3);
        echo "<td>$result</td>";
    } echo "</tr>";
} echo "</table>";
?>
