<!-- 23.	Write a PHP program to create a String and store value on that string “php Program - the complete SOLUTION for WEB development”. Do the following operations.
⮚	convert lowercase string to uppercase
⮚	convert uppercase string to lowercase
⮚	convert first character uppercase
⮚	convert first character of all the words uppercase
⮚	get the last 11 characters of string
⮚	replace the first ‘the’ of the following string with ‘best’
⮚	get the Second word of a sentence
⮚	insert a string at the specified position in a given string
 -->
<p>
<?php
header("Content-Type: text/html; charset=UTF-8");
$string = "php Program - the complete SOLUTION for WEB development";
echo strtoupper($string) . "<br>";
echo strtolower($string) . "<br>";
echo ucfirst($string) . "<br>";
echo ucwords($string) . "<br>";
echo substr($string, -11) . "<br>";
echo str_replace("the", "best", $string) . "<br>";
$words = explode(" ", $string);
echo $words[1] . "<br>";

$insertString = "INSERTED"; $position = 4;
echo substr_replace($string, $insertString, $position, 0) . "<br>";
?>
</p>