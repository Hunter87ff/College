<!-- 8. To write a program for mathematical calculator. -->

<form action="" method="post">
    <input type="text" name="num1" placeholder="Enter number 1" required>
    <input type="text" name="num2" placeholder="Enter number 2" required>
    <select name="op">
        <option value="+">Add</option>
        <option value="-">Subtract</option>
        <option value="*">Multiply</option>
        <option value="/">Divide</option>
    </select>
    <input type="submit" value="Calculate">
</form>
<?php
if (isset($_POST['num1'])) {
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $op = $_POST['op'];
    $result = eval("return $num1 $op $num2;");
    echo "$num1 $op $num2 = $result";
}
?>