<!-- 8.	To write a program for mathematical calculator. -->

<form action="./p2.php" method="post">
    <input type="text" name="num1" placeholder="Enter number 1" required><br>
    <input type="text" name="num2" placeholder="Enter number 2" required><br>
    <select name="operation" required><br>
        <option value="add">Add</option>
        <option value="sub">Subtract</option>
        <option value="mul">Multiply</option>
        <option value="div">Divide</option>
    </select>
    <input type="submit" value="Calculate">
</form>
<?php
if (isset($_POST['num1']) && isset($_POST['num2']) && isset($_POST['operation'])) {
    $num1 = $_POST['num1'];
    $num2 = $_POST['num2'];
    $operation = $_POST['operation'];
    switch ($operation) {
        case 'add':
            echo "Addition of $num1 and $num2 is " . ($num1 + $num2);
            break;
        case 'sub':
            echo "Subtraction of $num1 and $num2 is " . ($num1 - $num2);
            break;
        case 'mul':
            echo "Multiplication of $num1 and $num2 is " . ($num1 * $num2);
            break;
        case 'div':
            echo "Division of $num1 and $num2 is " . ($num1 / $num2);
            break;
        default:
            echo "Invalid operation";
            break;
    }
}