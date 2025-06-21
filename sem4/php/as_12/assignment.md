33. Write a PHP program to upload an image file within “upload” folder.
```php
<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    move_uploaded_file($_FILES['img']['tmp_name'], "upload/" . $_FILES['img']['name']);
}
?>
<form method="post" enctype="multipart/form-data">
<input type="file" name="img"><input type="submit">
</form>
```
```

```
