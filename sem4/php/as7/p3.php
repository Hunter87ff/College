<!-- 21.	Write an Age calculator program -->

<?php
    if ($_GET) {
        $birthDate = $_GET['birthDate'];
        $birthDate = new DateTime($birthDate);
        $today = new DateTime();
        $age = $today->diff($birthDate);
        echo "Your age is: " . $age->y . " years, " . $age->m . " months, and " . $age->d . " days.";
    }
?>