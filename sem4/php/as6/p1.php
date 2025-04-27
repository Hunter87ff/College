<table style="border: 2px solid black;">
    <style>
        .black{width:40px; height:40px; background: black;}
        .white{width:40px; height:40px; background: white;}
    </style>
    <?php
    for($i=1; $i<=8; $i++){
        echo "<tr>";
        for($j=1; $j<=8; $j++){
            echo "<td class='".(($i+$j)%2==0 ? "black" : "white")."'></td>";
        }
        echo "</tr>";
    }
    ?>
</table>