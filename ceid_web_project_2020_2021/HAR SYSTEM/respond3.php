<?php 
include('dbconnect.php');

$contType=$_POST['whereQ'];
$ISP=$_POST['whereIsp'];

$TTL=[];
$nD="notDefined";
$query="SELECT json_extract(`resHeader`,'$.cache.maxAge') as ttl  from files WHERE (json_extract(`resHeader`,'$.cache.maxAge')!='notDefined' $contType $ISP ) ORDER BY ttl DESC ;";
$result = mysqli_query($con,$query);
while ($row = mysqli_fetch_assoc($result))
{
    if(intval($row['ttl'])> -2){$TTL[]=intval($row['ttl']);} else {$TTL[]=-1;}
}
$obj=['ttl'=>$TTL];

echo json_encode($obj);
mysqli_close($con);
?>