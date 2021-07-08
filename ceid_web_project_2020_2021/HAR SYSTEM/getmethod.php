<?php
include('dbconnect.php');
session_start();
   
    
 
    $query="SELECT word, wordCount  FROM methodcount ;";
    $returned=mysqli_query($con,$query);
    
    $data=array();
    while ($row = mysqli_fetch_assoc($returned))
    {
    $data[]=$row; 
    }


echo json_encode($data);


?>