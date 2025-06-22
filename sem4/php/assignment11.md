31. Write a PHP program to retrieve given URL information.
```php
<?php
print_r(parse_url("http://localhost:80/test.php"));
?>
```
```
Array
(
    [scheme] => http
    [host] => localhost
    [port] => 80
    [path] => /test.php
)
```

32. Write a PHP program to upload a file and get information about the upload file.
```php
<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    print_r($_FILES);
}
?>
<form method="post" enctype="multipart/form-data">
<input type="file" name="file"><input type="submit">
</form>
```
```

```
