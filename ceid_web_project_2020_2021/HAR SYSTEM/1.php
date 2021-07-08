<?php 
include('dbconnect.php');
$head_key='$.contentType';

$w=0;
$w++;
echo $w;


$query="SELECT DISTINCT serverIpAddress as Ip FROM `files` ;";                        
mysqli_query($con,$query);
$result = mysqli_query($con,$query);

$data=array();
while ($row = mysqli_fetch_assoc($result))
{
   $data[]=$row['Ip']; 
}

$ip="52.85.158.99";
echo $ip;
if(in_array($ip,$data)){echo "eurika";}else{ echo "we're fucked";}


mysqli_close($con);
?>