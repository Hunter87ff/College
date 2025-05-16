<!-- Write a PHP program to create an array and store 10 names in the array. Do the following operations.
⮚	Display the contents using for each statement.
⮚	Display the array in a sorted order.
⮚	Display the array without the duplicate elements
⮚	Remove the last element and display
⮚	Display the array in reverse order
⮚	Insert a new element in a specified position
⮚	Search and find out position of an element from array  
 -->

 <?php
    function show_array($title, $array) {
        echo "<h3>$title :</h3>";
        foreach ($array as $name) {echo $name . ", ";}
    }
    // Create an array and store 10 names
    $names = ["Alice", "Bob", "Charlie", "David", "Eve", "Frank", "Grace", "Heidi", "Ivan", "Judy"];

    show_array("Original Array", $names);
    sort($names);
    show_array("Sorted Array", $names);
    $uniqueNames = array_unique($names);
    show_array("Array without Duplicates", $uniqueNames);
    array_pop($names);
    show_array("Array after removing the last element", $names);
    $reversedNames = array_reverse($names);
    show_array("Reversed Array", $reversedNames);
    array_splice($names, 5, 0, "NewName");
    show_array("Array after Inserting 'NewName' at position 5", $names);

    $searchName = "Charlie";
    $position = array_search($searchName, $names);
    echo "<h3>Position of '$searchName' in the array: " . ($position !== false ? $position : "Not found") . "</h3>"; 

?>