<?php 
//Epistrefei array of objects opou kathe object exei keys word kai avgAge
include('dbconnect.php');

//////////////////////////////expirement?//////////////////////

 
$query="SELECT timings,startedDateTime FROM files where 1 " ;                      
$result = mysqli_query($con,$query);

$day=[];
$wait=array();
while ($row = mysqli_fetch_assoc($result))
{
    $ret=$row; 
    $ts= new DateTime($ret['startedDateTime']);
    $d=$ts->format('D');
    $h=$ts->format('H:i:s.v');
    $wait[$h]=['wait'=>0,'count'=>0,'avg'=>0];
    $day[$d]=[];
    $tmp[]=['day'=>$d,'hour'=>$h,'wait'=>$ret['timings']];
}

foreach($tmp as $rw)
{
    $d=$rw['day'];
    $h=$rw['hour'];
    $w=$rw['wait'];
    $wait[$h]['wait']+=$w;
    $wait[$h]['count']+=1;
    $day[$d][$h]=$wait[$h];
}
unset($rw);

foreach($day as &$i)
{
    foreach($i as &$rw)
    {
        //var_dump($rw);
        $rw['avg']=$rw['wait']/$rw['count'];
       // echo '<br>'.$rw['wait'].' avg= '.$rw['avg'];

    }
}
unset($i);
unset($rw);

echo json_encode($day);

mysqli_close($con);
?>