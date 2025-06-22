36. Design a home page in PHP, an about page in PHP and header/menu file in php, home page and about page have same header. In header/menu file two link Home, About. If click on Home link, then open home page if click about page open about page using include function in php.

```php
<!-- header.php -->
<a href="home.php">Home</a> | <a href="about.php">About</a>
```
```php
<!-- home.php -->
<?php include 'header.php'; ?>
<h1>Welcome Home</h1>
```
```php
<!-- about.php -->
<?php include 'header.php'; ?>
<h1>About Us</h1>
```
Output

![image](https://github.com/user-attachments/assets/277f4cb1-2455-4b1f-bcbe-4ae2fd1bc32d)

