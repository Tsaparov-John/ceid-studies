<?php

include 'dbconnect.php';
session_start();



$provider=$_POST['provider'];
$latitude=$_POST['latitude'];
$longitude=$_POST['longitude'];
$username=$_POST['username'];
$ipLog=json_decode($_POST['iplog']);
//pernoume to text me to string tou obj pou ftiaksame kai to kanoume pali json
$logs=json_decode($_POST['textobj']);



foreach($ipLog as $ind)
{
    $a=$ind->{'ip'};
    $cnt=$ind->{'count'};
    $loc = file_get_contents('https://api.ipgeolocationapi.com/geolocate/'.$a);
    $obj = json_decode($loc); 
    $entrlat=$obj->geo->{'latitude'};
    $entrlong=$obj->geo->{'longitude'};
    if ($entrlat!="" AND $entrlong!="")
    {
        $query="INSERT INTO serveruserloc(longitude,latitude,Ulongitude,Ulatitude,cnter) VALUE ('$entrlong','$entrlat','$longitude','$latitude',$cnt) ON DUPLICATE KEY update cnter=cnter+$cnt;";
        mysqli_query($con,$query);
        $query="INSERT INTO ".$username."(longitude,latitude,entriesCounter) VALUE ('$entrlong','$entrlat',$cnt) ON DUPLICATE KEY update entriesCounter=entriesCounter+$cnt;";
        mysqli_query($con,$query);
        $query="INSERT INTO serverloc(longitude,latitude,cnter) VALUE ('$entrlong','$entrlat',$cnt) ON DUPLICATE KEY update cnter=cnter+$cnt;";
        mysqli_query($con,$query);
    }
}

$elementCount  = count($logs->log->entries);
$query="UPDATE admincount set TotEntries=TotEntries+$elementCount ;";
mysqli_query($con,$query);

$sqlcount="UPDATE user SET counterEntries = counterEntries + '$elementCount' WHERE (username = '$username' );";
mysqli_query($con, $sqlcount);

$tim=date("Y/m/d - H:i:s"); // paei mia wra pisw poutsa mou
$sqltime="UPDATE user SET stamptime = '$tim' WHERE (username = '$username' );";
mysqli_query($con, $sqltime);




$uid=$_SESSION['id'];
$p=$provider;
$pointer=$logs->log->entries;
$a=$pointer[0]->{'startedDateTime'};
$b=$pointer[0]->{'serverIPAddress'};
$c=$pointer[0]->timings->{'wait'};
$d=$pointer[0]->request->{'method'};
$e=$pointer[0]->request->{'url'};
$f=$pointer[0]->response->{'status'};
$g=$pointer[0]->response->{'statusText'};
$k=$pointer[0]->response->headers->{'age'};
$l=$pointer[0]->response->headers->{'contentType'};
$h=json_encode($pointer[0]->response->{'headers'});
$j=json_encode($pointer[0]->request->{'headers'});


$bulk="('$a','$b','$c','$d','$e','$f','$g','$h','$j','$uid','$p','$k','$l'),";
for($i=1;$i<$elementCount-1;$i++)
{
$a=$pointer[$i]->{'startedDateTime'};
$b=$pointer[$i]->{'serverIPAddress'};
$c=$pointer[$i]->timings->{'wait'};
$d=$pointer[$i]->request->{'method'};
$e=$pointer[$i]->request->{'url'};
$f=$pointer[$i]->response->{'status'};
$g=$pointer[$i]->response->{'statusText'};
$k=$pointer[$i]->response->headers->{'age'};
$l=$pointer[$i]->response->headers->{'contentType'};
$h=json_encode($pointer[$i]->response->{'headers'});
$j=json_encode($pointer[$i]->request->{'headers'});
$bulk=$bulk."('$a','$b','$c','$d','$e','$f','$g','$h','$j','$uid','$p','$k','$l'),";
}
$a=$pointer[$i]->{'startedDateTime'};
$b=$pointer[$i]->{'serverIPAddress'};
$c=$pointer[$i]->timings->{'wait'};
$d=$pointer[$i]->request->{'method'};
$e=$pointer[$i]->request->{'url'};
$f=$pointer[$i]->response->{'status'};
$g=$pointer[$i]->response->{'statusText'};
$k=$pointer[$i]->response->headers->{'age'};
$l=$pointer[$i]->response->headers->{'contentType'};
$h=json_encode($pointer[$i]->response->{'headers'});
$j=json_encode($pointer[$i]->request->{'headers'});
$bulk=$bulk."('$a','$b','$c','$d','$e','$f','$g','$h','$j','$uid','$p','$k','$l')";

    $query="INSERT INTO files (startedDateTime,serverIpAddress,timings,reqMethod,url,resStatus,resStatusText,resHeader,reqHeader,uid,ISP,age,contentType) Values $bulk;";
                        
    mysqli_query($con,$query);

      mysqli_close($con);

        // https://www.writephponline.com/ link for tests 
?>

     
        

      