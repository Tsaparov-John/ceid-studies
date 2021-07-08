<?php 
include('dbconnect.php');

$contType=$_POST['whereQ'];
$ISP=$_POST['whereIsp'];

$TTL=[];
$nD="notDefined";
$query="SELECT json_extract(`resHeader`,'$.cache.maxAge') as ttl  from files WHERE (json_extract(`resHeader`,'$.cache.maxAge')!='notDefined' $contType $ISP ) ORDER BY ttl DESC ;";
mysqli_query($con,$query);
$result = mysqli_query($con,$query);
while ($row = mysqli_fetch_assoc($result))
{
    $TTL[]=$row['ttl']; 
}
$obj=['ttl'=>$TTL];

echo json_encode($obj);
mysqli_close($con);
?>