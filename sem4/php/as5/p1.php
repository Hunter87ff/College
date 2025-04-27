<!-- write a program that displays different greeting message based on time of day. for example page should render Good morning  if accessed in morning-->

<?php
date_default_timezone_set('Asia/Kolkata');
$hour = date('H');
echo "Current Hour: $hour<br>";

// Display different greeting messages based on the time of day
if ($hour < 12) {echo "Good Morning!";} 
elseif ($hour < 17) {echo "Good Afternoon!";} 
else {echo "Good Evening!";}
?>
