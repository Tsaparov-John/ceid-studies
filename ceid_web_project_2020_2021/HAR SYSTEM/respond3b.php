<?php 
//Epistrefei array of objects opou kathe object exei keys word kai avgAge
include('dbconnect.php');


$contType=$_POST['whereQ'];
$ISP=$_POST['whereIsp'];


//$wrd=$type[$i]['word'];
//$cwrd=str_replace('"','',$wrd);

$query="SELECT COUNT(*) as numEntries from files WHERE 1 $contType $ISP ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$numEntries=$row['numEntries'];

$query="SELECT COUNT(JSON_EXTRACT(`resHeader`,'$.cache.maxStale')) as maxStaleC from files WHERE (json_extract(`resHeader`,'$.cache.maxStale')=1 $contType $ISP ) ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$percentMS=$row['maxStaleC'];

$query="SELECT COUNT(JSON_EXTRACT(`resHeader`,'$.cache.minFresh')) as minFreshC from files WHERE (json_extract(`resHeader`,'$.cache.minFresh')=1 $contType $ISP ) ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$percentMF=$row['minFreshC'];

$percentNone=$numEntries-$percentMF-$percentMS;
$obj=['percentMaxStale'=>$percentMS,'percentMinFresh'=>$percentMF ,'percentNone'=>$percentNone];

// select Count(json_extract(`reqHeader`,'$.cache.minFresh')) as minFreshC from files  WHERE json_extract(`reqHeader`,'$.cache.minFresh')=1;


echo json_encode($obj);


mysqli_close($con);
?>