<?php 
//Epistrefei array of objects opou kathe object exei keys word kai avgAge
include('dbconnect.php');


$query="SELECT DISTINCT ISP FROM files ;";                        
$result = mysqli_query($con,$query);

$type=array();
while ($row = mysqli_fetch_assoc($result))
{
   $type[]=$row; 
}


echo json_encode($type);


mysqli_close($con);
?>