<!-- Write a program in PHP get array key from given array list -->
 <?php
 $array_elem = [
     "name" => "John",
     "age" => 30,
     "city" => "New York"
 ];
 if($_GET){
        $key = $_GET['key'];
       if(array_key_exists($key, $array_elem)){
           echo "Value: " . $array_elem[$key];
       } else {
           echo "Key not found.";
       }
 }
