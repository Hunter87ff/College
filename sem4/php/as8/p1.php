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
$arr = ["Bittu", "Annie", "Alice", "Bob", "Charlie", "Alice", "Ken"];
array_pop($arr); //pop
array_splice($arr, 5, 0, "NewName"); //insert
rsort($arr); //sort + reverse

foreach(array_unique($arr) as $n){
  echo "$n ";
}; //foreach + no duplicate

echo "/nAnnie found at : ".  array_search("Annie", $arr); //search

?>
