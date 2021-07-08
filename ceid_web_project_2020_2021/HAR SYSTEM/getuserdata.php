<?php

//connect to db
include "dbconnect.php";

$username= $_GET['username'];

//getting data from database
$result = mysqli_query($con, "SELECT latitude,longitude, entriesCounter FROM ".$username." ;");

//storing in array
$data=array();
while ($row = mysqli_fetch_assoc($result))
{
   $data[]=$row; 
}

echo json_encode($data);
?>
