<?php
    $hostname = "localhost";
    $username = "root";
    $password = "";
    $port = 3306;
    $con = new mysqli($hostname, $username, $password, "test", $port);

    if ($con->connect_error) {
        die("Connection failed: " . $con->connect_error);
    }
    else{
        echo "DB Connected!!";
    }
    $con->query("create table if not exists users(id int primary key auto_increment, fname varchar(50), mname varchar(50), lname varchar(50) not null)");
?>

<h3> Create user </h3>
<form action="./test.php" method="post">
    <input type="text" name="fname" required>
    <input type="text" name="mname">
    <input type="text" name="lname" required>
    <input type="submit" value="Submit">
</form>


<?php
    if($_GET){
        $fname = ucwords(strtolower(trim($_GET['fname'])));
        $mname = ucwords(strtolower(trim($_GET['mname'])));
        $lname = ucwords(strtolower(trim($_GET['lname'])));

        $sql = "SELECT * FROM users  WHERE fname='$fname'";
        $res = $con->query($sql)->fetch_all();
        if($res){
            echo "ID    Name   Mname   Lname <br>";
            foreach($res as $row){
                echo $row[0]."  ".$row[1]."   ".$row[2]."   ".$row[3]."<br>";
            }
        }else{
            echo "<br> User Not Found!!";
        }
    }


    else if($_POST){
        $fname = ucwords(strtolower(trim($_POST['fname'])));
        $mname = ucwords(strtolower(trim($_POST['mname'])));
        $lname = ucwords(strtolower(trim($_POST['lname'])));

        $sql = "INSERT INTO users (fname, mname, lname) VALUES ('$fname', '$mname', '$lname')";
        if ($con->query($sql) === TRUE) {
            echo "<br>New record created successfully";
        } else {
            echo "Error: <br>" . $con->error;
        }
    }
?>