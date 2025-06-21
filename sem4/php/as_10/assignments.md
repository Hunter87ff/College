28. Write a PHP program to Get Server Information.
```php
<?php
echo $_SERVER['SERVER_SOFTWARE'] . "<br>" . $_SERVER['HTTP_HOST'];
?>
```
```
Apache/2.4.51 (Win64) OpenSSL/1.1.1k PHP/8.1.2
localhost
```


29. Write a PHP program to detect remote device is mobile device or not.
```php
<?php
$mobile = preg_match("/android|avantgo|blackberry|bolt|boost|cricket|docomo|fone|hiptop|mini|mobi|palm|phone|pie|tablet|up\.browser|up\.link|webos|wos/i", $_SERVER['HTTP_USER_AGENT']);
echo $mobile ? "Mobile" : "Desktop";
?>
```
```
Desktop
```

30. create a self-processing form, use the 
$_SERVER['REQUEST_METHOD'] that returns the request method e.g., GET or POST.
- If the $_SERVER['REQUEST_METHOD'] is GET, you show the form.
- And if the $_SERVER['REQUEST_METHOD'] is POST, you process it.
```php
<?php
if ($_SERVER['REQUEST_METHOD'] == 'GET') {
    echo '<form method="post"><input type="text" name="name"><input type="submit"></form>';
} else {
    echo "Hello, " . $_POST['name'];
}
?>
```

```
/as10/p3.php?name=hunter
> Hello hunter
```
