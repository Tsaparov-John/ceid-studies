<?php
include('dbconnect.php');
session_start();
   
    
 
    $query="SELECT UsersCount, UnDom, UnISP  FROM admincount;";
    $returned=mysqli_query($con,$query);
    $result = mysqli_fetch_assoc($returned);
    $data=$result;

echo json_encode($data);


?>

