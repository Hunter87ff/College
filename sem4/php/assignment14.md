35. Create a form have three input field namely File Name(text field), Message(text area),Task(list box) and a Done (submit button). A user will enter a file name and enter some text in Message (text area) then select Create Task from (list box) and submit the Done button. If file not available in data(directory) then a file will create with file name and content of Message will write in the file. if file not available in the data directory then a message will appear in Message(text area) that “ File Doesn’t exists .”. when user enter a file name and select Read from list box , if file is available then content of existing file will appear in message box. Again user will enter file name and select Append from list box then file will appended with content.

```php
<form method="post">
    <input type="text" name="fname"><br>
    <textarea name="msg"></textarea><br>
    <select name="task">
    <option value="create">Create</option>
    <option value="read">Read</option>
    <option value="append">Append</option>
    </select><br>
    <input type="submit">
</form>
<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $fn = "data/" . $_POST['fname'];
    $task = $_POST['task'];
    $msg = $_POST['msg'];
    if ($task == 'create' && !file_exists($fn)) file_put_contents($fn, $msg);
    elseif ($task == 'read') echo file_exists($fn) ? file_get_contents($fn) : "File not found.";
    elseif ($task == 'append') file_put_contents($fn, $msg, FILE_APPEND);
}
?>
```
Output

![image](https://github.com/user-attachments/assets/bcb146fa-014c-4d24-a0c5-f14e4a81f979)
