<?php 
//Epistrefei array of objects opou kathe object exei keys word kai avgAge
include('dbconnect.php');

$nD='"notDefined"';
$query="SELECT word,wordCount FROM contenttypecount WHERE word!='notDefined' ;";                        
$result = mysqli_query($con,$query);

$type=array();
while ($row = mysqli_fetch_assoc($result))
{
   $type[]=$row; 
}

$len=count($type);


for ($i=0;$i<$len;$i++)
{
    $wrd=$type[$i]['word'];
    $cwrd=str_replace('"','',$wrd);
    
    $query="SELECT COUNT(JSON_EXTRACT(`reqHeader`,'$.cache.maxStale')) as maxStaleC from files WHERE (json_extract(`reqHeader`,'$.cache.maxStale')=1 AND json_extract(`resHeader`,'$.contentType')='$wrd') ;";
    $result = mysqli_query($con,$query);
    $row = mysqli_fetch_assoc($result);
    $percentMS=$row['maxStaleC']/$type[$i]['wordCount'];

    $query="SELECT COUNT(JSON_EXTRACT(`reqHeader`,'$.cache.minFresh')) as minFreshC from files WHERE (json_extract(`reqHeader`,'$.cache.minFresh')=1 AND json_extract(`resHeader`,'$.contentType')='$wrd' ) ;";
    $result = mysqli_query($con,$query);
    $row = mysqli_fetch_assoc($result);
    $percentMF=$row['minFreshC']/$type[$i]['wordCount'];
    $obj[$i]=['word'=>$cwrd,'percentMaxStale'=>$percentMS,'percentMinFresh'=>$percentMF];

   // select Count(json_extract(`reqHeader`,'$.cache.minFresh')) as minFreshC from files  WHERE json_extract(`reqHeader`,'$.cache.minFresh')=1;
}

echo json_encode($obj);


mysqli_close($con);
?>