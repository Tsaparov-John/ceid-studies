<?php 
include('dbconnect.php');

$query="SELECT word from contenttypecount WHERE word!='notDefined' ;";
mysqli_query($con,$query);
$result = mysqli_query($con,$query);
$type=[];
while ($row = mysqli_fetch_assoc($result))
{
    $type[]=$row['word']; 
}

$ISP=$_POST['whereIsp'];

$len=count($type);

$nD="notDefined";
$obj=[];
for($i=0;$i<$len;$i++)
{
    $TTL=[];
    $wrd=$type[$i];
$query="SELECT json_extract(`resHeader`,'$.cache.maxAge') as ttl  from files WHERE (json_extract(`resHeader`,'$.cache.maxAge')!='notDefined') AND contentType='$wrd' $ISP ;";
mysqli_query($con,$query);
$result = mysqli_query($con,$query);
while ($row = mysqli_fetch_assoc($result))
{
    if(intval($row['ttl'])> -2){$TTL[]=intval($row['ttl']);} else {$TTL[]=-1;}
}
$obj[$wrd]=['ttl'=>$TTL];
}

echo json_encode($obj);
mysqli_close($con);
?>