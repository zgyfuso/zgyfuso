test.php
<?php
$userName=$_GET["userName"];
$passWord=$_GET["passWord"];
$dateTime=date("Y/m/d H:i:s");
echo $userName.$passWord.$dateTime;
?>