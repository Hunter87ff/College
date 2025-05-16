<!-- Write a program in PHP to read from directory. -->
<?php
$dir = "."; // Current directory
if (is_dir($dir)) {
    if ($dh = opendir($dir)) {
        while (($file = readdir($dh)) !== false) {
            echo "filename: $file : filetype: " . filetype($dir . "/" . $file) . "<br>";
        }
        closedir($dh);
    }
}
?>