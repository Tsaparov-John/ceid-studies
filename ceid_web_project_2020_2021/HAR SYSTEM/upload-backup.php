<?php

include 'dbconnect.php';
session_start();



$provider=$_POST['provider'];
$latitude=$_POST['latitude'];
$longitude=$_POST['longitude'];
$username=$_POST['username'];
//pernoume to text me to string tou obj pou ftiaksame kai to kanoume pali json
$logs=json_decode($_POST['textobj']);





      $elementCount  = count($logs->log->entries);
      //koitame gia kathe entry kai trexoume
      for ($x=0;$x<$elementCount;$x++)  {
                                                        
              $a=$logs->log->entries[$x]->{'serverIPAddress'};                    //pernoume tin timh tou serverIPAdress
              if (isset($a)){                                                   //tsekarw kai an den einai undefined...
                    $loc = file_get_contents('https://api.ipgeolocationapi.com/geolocate/'.$a);
                    $obj = json_decode($loc); 
                    $entrlat=$obj->geo->{'latitude'};
                    $entrlong=$obj->geo->{'longitude'};
                    if ($entrlat!="" AND $entrlong!=""){
                        $new=1;
                        $loc_check_query = "SELECT * FROM ".$username." WHERE (latitude='$entrlat' AND longitude='$entrlong') LIMIT 1";
                        $result = mysqli_query($con, $loc_check_query);
                        $line = mysqli_fetch_assoc($result);

                        if ($line==NULL){ //ean den yparoxyn kanoume insert nea grammh

                            $query_insert ="INSERT INTO ".$username." (latitude, longitude, entriesCounter)
                            VALUES ('$entrlat','$entrlong','$new')";

                            mysqli_query($con,$query_insert);

                        }else{

                            $count= $line['entriesCounter'];
                            $count++;
                            $point=$line['id'];
                            $query_change ="UPDATE ".$username."
                            SET entriesCounter = ".$count."
                            WHERE id = ".$point.";";

                              mysqli_query($con,$query_change);

                        }

                    }
              }

      };

  /*
  $time=$logs->log->entries->{'startedTimeAddress'}; //pernw to timeadress
  $tmstmp=strtotime($time); // παιρνω το time σε μορφή "2020-11-23T18:52:29.829+02:00" και το κανω unix timestamp και το δίνω στο date
  $day=date('l',$tmstmp);         */                               
  //vriskw tin hmera
 
  $tim=date("Y/m/d - H:i:s"); // paei mia wra pisw poutsa mou
  

  
  
  $elementCount  = count($logs->log->entries);

     $sqlcount="UPDATE user SET counterEntries = counterEntries + '$elementCount' WHERE (username = '$username' );";
     mysqli_query($con, $sqlcount);

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

     
        

      