34. Create a form of four field as name, address, age and password. Input name, address, age and password through form. Then create a file with name and write name, address, age, password in that file. is_file() function check the existence of file in “data” directory.
```php
<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $data = implode(", ", $_POST);
    file_put_contents("data/" . $_POST['name'] . ".txt", $data);
}
?>
<form method="post">
<input type="text" name="name"><br>
<input type="text" name="address"><br>
<input type="number" name="age"><br>
<input type="password" name="pass"><br>
<input type="submit">
</form>
```
```

```
