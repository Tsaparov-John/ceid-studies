<?php 
//Epistrefei array of objects opou kathe object exei keys word kai avgAge
include('dbconnect.php');



$contType=$_POST['whereQ'];
$ISP=$_POST['whereIsp'];

$query="SELECT COUNT(*) as numEntries from files WHERE 1 $contType $ISP ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$numEntries=$row['numEntries'];

$query="SELECT COUNT(JSON_EXTRACT(`resHeader`,'$.cache.private')) as privateC from files WHERE (json_extract(`resHeader`,'$.cache.private')=1 $contType $ISP ) ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$percentPr=$row['privateC'];

$query="SELECT COUNT(JSON_EXTRACT(`resHeader`,'$.cache.public')) as publicC from files WHERE (json_extract(`resHeader`,'$.cache.public')=1 $contType $ISP ) ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$percentPu=$row['publicC'];

$query="SELECT COUNT(JSON_EXTRACT(`resHeader`,'$.cache.noStore')) as noStoreC from files WHERE (json_extract(`resHeader`,'$.cache.noStore')=1 $contType $ISP  ) ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$percentNS=$row['noStoreC'];

$query="SELECT COUNT(JSON_EXTRACT(`resHeader`,'$.cache.noCache')) as noCacheC from files WHERE (json_extract(`resHeader`,'$.cache.noCache')=1 $contType $ISP  ) ;";
$result = mysqli_query($con,$query);
$row = mysqli_fetch_assoc($result);
$percentNC=$row['noCacheC'];

$percentNone=$numEntries-($percentNC+$percentNS+$percentPr+$percentPu);
$obj=['percentPrivate'=>$percentPr,'percentPublic'=>$percentPu,'percentNoStore'=>$percentNS,'percentNoCache'=>$percentNC,'percentNone'=>$percentNone];




echo json_encode($obj);


mysqli_close($con);
?>