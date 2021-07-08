<?php
include('dbconnect.php');
session_start();
if(isset($_SESSION['username']))
{
    $username=$_SESSION['username'];
    $query="SELECT counterEntries,stamptime FROM user WHERE (username= '$username');";
    $returned=mysqli_query($con,$query);
    $result = mysqli_fetch_assoc($returned);
    $data=$result;
}   
else{
    $data='Not read';
}

echo json_encode($data);


?>