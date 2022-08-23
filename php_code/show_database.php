<?php
$servername="localhost";
$username="root";
$password="197839";
$dbname="test";

$icon=mysqli_connect($servername, $username, $password, $dbname);
$sql='select * from t_view';
$result=mysqli_query($icon, $sql);
$data=mysqli_fetch_all($result);
if (mysqli_num_rows($result)>0) {
    while ($row=mysqli_fetch_assoc($result)) {
        echo $row."<br>";
    }
}
