33. Write a PHP program to upload an image file within “upload” folder.
```php
<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    // Check if the upload directory exists, if not, create it
    $uploadDir = __DIR__ . '/upload/';
    if (!is_dir($uploadDir)) {
        mkdir($uploadDir, 0777, true);
    }
    $targetFile = $uploadDir . basename($_FILES['img']['name']);
    if (move_uploaded_file($_FILES['img']['tmp_name'], $targetFile)) {
        echo "File uploaded successfully.";
    } else {
        echo "File upload failed.";
    }
}
?>
<form method="post" enctype="multipart/form-data">
<input type="file" name="img"><input type="submit">
</form>
```
Output
![image](https://github.com/user-attachments/assets/5584bc30-5d46-441c-92a9-991800aa6ea5)


