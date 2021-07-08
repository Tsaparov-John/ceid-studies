<?php 
//Epistrefei array of objects opou kathe object exei keys word kai avgAge
include('dbconnect.php');


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
    $query="SELECT AVG(age) as avgAge FROM files WHERE contentType='$wrd' AND age!=-1 ;";
    $result = mysqli_query($con,$query);
    $row = mysqli_fetch_assoc($result);
    if(is_null($row['avgAge'])){$row['avgAge']=0;}
    $obj[$i]=['word'=>$wrd,'avgAge'=>$row['avgAge']];
}

echo json_encode($obj);


mysqli_close($con);
?>