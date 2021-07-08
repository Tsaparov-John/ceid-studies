<?php 
include('dbconnect.php');

$query="SELECT * FROM serverloc WHERE cnter=(SELECT MAX(cnter) FROM serverloc) ;";
$result = mysqli_query($con,$query);
$ret= mysqli_fetch_assoc($result);
$S_long=$ret['longitude'];
$S_lat=$ret['latitude'];

$query="SELECT MAX(cnter) as max_cnt FROM serveruserloc WHERE (latitude=$S_lat AND longitude=$S_long) ;";
$result = mysqli_query($con,$query);
$ret= mysqli_fetch_assoc($result);
$max=$ret['max_cnt'];

$query="SELECT * FROM serveruserloc ;";
$result = mysqli_query($con,$query);


$obj=[];
while($ret= mysqli_fetch_assoc($result))
{
    $S_long=$ret['longitude'];
    $S_lat=$ret['latitude'];    
    $U_long=$ret['Ulongitude'];
    $U_lat=$ret['Ulatitude'];
    $thickness=$ret['cnter']/$max;
    $obj[]=['SLong'=>$S_long,'SLat'=>$S_lat,'ULong'=>$U_long,'ULat'=>$U_lat,'factor'=>$thickness];
}


echo json_encode($obj);
mysqli_close($con);
?>