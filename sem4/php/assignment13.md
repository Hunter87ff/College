34. Create a form of four field as name, address, age and password. Input name, address, age and password through form. Then create a file with name and write name, address, age, password in that file. is_file() function check the existence of file in “data” directory.
```php
<form method="post">
<input type="text" placeholder="Name" name="name"><br>
<input type="text" placeholder="Address" name="address"><br>
<input type="number" placeholder="Age" name="age"><br>
<input type="password" placeholder="Password" name="pass"><br>
<input type="submit">
</form>
<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    is_dir("data") || mkdir("data", 0777, true);
    $fp = "data/" . $_POST['name'] . ".txt";
    $data = implode(", ", $_POST);
    file_put_contents($fp, $data);
    echo is_file($fp) ? 
        "Data saved successfully!" : 
        "Failed to save data.";
}
?>
```
Output

![image](https://github.com/user-attachments/assets/d4caf9d1-2215-49ec-9986-5d0b1ab45fd5)
