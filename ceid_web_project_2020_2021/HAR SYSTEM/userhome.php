<?php
// We need to use sessions, so you should always start sessions using the below code.
session_start();
// If the user is not logged in redirect to the login page...
if (!isset($_SESSION['loggedin'])) {
	header('Location: index.html');
	exit;
}
if (!isset($_SESSION['user'])) {
	header('Location: index.html');
	exit;
}

include "dbconnect.php";



	//ipapi gives us 500 requests in a day

 	//$ip = "140.150.208.251";

	$username=$_SESSION['username'];
	$uid=$_SESSION['id'];


	
	
	
?>  



<!DOCTYPE html>
<html lang="en">
  		<head>
   	 	<meta charset="UTF-8">
    	<meta name=viewport" content="width=device-width, initial-scale=1.0,
        viewport-fit=cover">
    	<meta http-equiv="X-UA-Compatible" content="ie=edge">
    	<title>HAR Collector System</title>
    	<!-- FAVICON-->
    	<link rel="shortcut icon" href="img/favicon.png">
   		<!-- Bootstrap 4.5 CSS -->
		<link rel="stylesheet" href="css/bootstrap.min.css">
		<!-- Style CSS -->
		<link rel="stylesheet" href="css/style.css">
		<!-- Google Fonts -->
		<link href="https://fonts.googleapis.com/css?family=Montserrat:300,400,500,600,700&display=swap" rel="stylesheet">
		<!-- ajax, -->
		<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
		<!-- leaflet -->
		<link rel="stylesheet" href="http://cdn.leafletjs.com/leaflet/v1.0.0-rc.1/leaflet.css" />
		<script src="http://cdn.leafletjs.com/leaflet/v1.0.0-rc.1/leaflet-src.js"></script>
		<!--heatmap -->
		<script	src="https://pvb.io/js/heatmap.js"> </script>
		<script src="https://pvb.io/js/leaflet-heatmap.js"></script> 

	
				
		

		</head>

			<!--menu-->

			<body class="loggedin">
					<nav class="navbar bg-light navbar-light navbar-expand-lg">
					<div class="container">

						<a href="index.html" class="navbar-brand"><img src="img/logo.png"></a>

						<button class="navbar-toggler" type="button" data-toggle="collapse"
						data-target="#navbarResponsive">
						<span class="navbar-toggler-icon"></span>
						</button>

						<div class="collapse navbar-collapse" id="navbarResponsive">
							<ul class="navbar-nav ml-auto">
								<li class="nav-item"><a href="userhome.php" class="nav-link active">My page</a></li>
								<li class="nav-item"><a  href="profile.php" class="nav-link">Profile</a></li>
								<li class="nav-item"><a href="logout.php" class="nav-link">Log Out</a></li>
							</ul>
						</div>
					</div>
					</nav>  

					<!--uploader-->
				<div id="uploader">
					<div> 
					<h5 id="titleupload">Do you want to upload your HTTP Archive?</h5>
					
					<input type=file class="myfile" id="myfile" onchange="readFiles()" onclick="atmpt()" accept=".har" > <!--multiple-->
					<br/>
							<div id="filebutton">
								<input type= button id="save" value="Download" onclick="saveFile()"> 
								<input type=button id="upload" value="Upload">
								<div class="alert alert-success alert-dismissible" id="success" style="display:none;">
							</div>
						<br/>
							
					
				</div>

				<div id="mapcon">
					<br/>
				<h1>Heatmap of your distribution of entries</h1>
					<div id="map">
		<script>
function atmpt(){
	$("#success").hide();

}




					//call ajax
					var ajax = new XMLHttpRequest();
					var method = "GET";
					var asynchronous=true;
					var pasa='<?php echo $username?>';
					var url="getuserdata.php?username="+pasa;

					var testData;

					ajax.open(method,url,asynchronous);
					//sending ajax request
					ajax.send();

					//receiving response from getuserdata.php
					ajax.onreadystatechange =function()
					{
						if (this.readyState==4 && this.status == 200)
						{
							//converting json back to array
							var  userTable=JSON.parse(this.responseText);
							
							var max=parseInt(userTable[0].entriesCounter);

							var test='[{"lat" : ' +userTable[0].latitude +' , "lng" : ' +userTable[0].longitude +', "count" : ' +userTable[0].entriesCounter +' }';
							//console.log(test);
							
							
							for (  a=1; a<userTable.length ;a++){
								//console.log(parseInt(userTable[a].entriesCounter));
								test=test+', {"lat" : '+userTable[a].latitude +', "lng" : ' +userTable[a].longitude +', "count" : ' +userTable[a].entriesCounter +' }';
								//car=car+{}
								if (max<parseInt(userTable[a].entriesCounter)){
									max=userTable[a].entriesCounter;

								}								
								
							};
							test=test+']';
							console.log(JSON.parse(test));
																	

							testData={	max : max, data : JSON.parse(test)};
							
							

							console.log(testData);

							
						




							var cfg = {
							// radius should be small ONLY if scaleRadius is true (or small radius is intended)
							// if scaleRadius is false it will be the constant radius used in pixels
							"radius": 35,
							"maxOpacity": .6,
							// scales the radius based on map zoom
							"scaleRadius": false,
							// if set to false the heatmap uses the global maximum for colorization
							// if activated: uses the data maximum within the current map boundaries
							//   (there will always be a red spot with useLocalExtremas true)
							"useLocalExtrema": true,
							// which field name in your data represents the latitude - default "lat"
							latField: 'lat',
							// which field name in your data represents the longitude - default "lng"
							lngField: 'lng',
							// which field name in your data represents the data value - default "value"
							valueField: 'count',
							blur: 0.60,
							gradient: { 
								'.10': 'yellow',
								'.5': 'orange',
								'.98': 'red'
								}
							};

							var map =L.map('map').setView([38,0],2);

							L.tileLayer('https://api.maptiler.com/maps/basic/{z}/{x}/{y}.png?key=XnxMXQ4hg5C6x51ILxAa',{
							tileSize:512,
							zoomOffset:-1,
							minZoom:2,
							attribution:'<a href="https://www.maptiler.com/copyright/" target="_blank">&copy; MapTiler</a> <a href="https://www.openstreetmap.org/copyright" target="_blank">&copy; OpenStreetMap contributors</a>'
							
						}).addTo(map);

						var heatmapLayer = new HeatmapOverlay(cfg).addTo(map);
						heatmapLayer.setData(testData);

						}
					}

						</script>
					</div>
				</div>
				<div id="emptyspace">

				</div>
</div>


				
				
				<script>
				
					let entriesObj;
					let timings;
					let request;
					let response;
					let resheadObj;
					let headersObj;
					let head2;
					let head;
					let text;
					let logObj;
					let log;
					let allurl;
					let domainurl;
					let textobj;

					
					
			
					var readFiles=function()
					{
						entriesObj=undefined;
						timings=undefined;
						request=undefined;
						response=undefined;
						resheadObj=undefined;
						headersObj=undefined;
						head2=undefined;
						head=undefined;
						
						logObj=undefined;
						log=undefined;
						allurl=undefined;
						domainurl=undefined;
						textobj=undefined;
						ipLog=undefined;

					var loaded=document.getElementById("myfile");// βρίσκω το input tag και το βάζω τον pointer στο loaded
					var f=loaded.files;// array με δείκτες προς τα αρχεία που ανέβηκαν 
					const reader = new FileReader();// ορίζω καινούργιο fileReader
					reader.onload=function(){cleanfiles(reader.result);};// ορίζω την συνάρτηση που καλειται όταν τελείωσει το φόρτωμα του αρχείου
					//εδώ θα μπεί μάλλον καποια for ή iterator για να στέλνει πολλαπλά αρχειά να μην τα κανει ενα ενα ο χρήστης
					var txt =reader.readAsText(f[0]); //διαβάζω το αρχειο σαν txt

					};

					

					var cleanfiles= function(txt){
					var lg=JSON.parse(txt);//μετατρέπω το txt σε Object
					// document.getElementById("myHar").value = txt; --> emfanizw se textarea 
					

					entriesObj={entries:[]};
					resheadObj={headers:[]};
                    headersObj={headers:[]};
					logObj={log:[]};
					ipLog=[];

				
						
					for (i=0;i<lg.log.entries.length;i++)
					{
						//console.log('started '+i);
                        Cache={
						private:0,
						public:0,
						noCache:0,
						noStore:0,
						maxStale:0,
						minFresh:0,
						maxAge:'notDefined',
						};

                        Age=-1;
                        Expires="notDefined";
                        LastModified="notDefined";
                        ContentType="notDefined";
						//katharizw to url
						 allurl = lg.log.entries[i].request.url;
						 domainurl = new URL(allurl);
						
						 a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='cache-control'||e.name==='Cache-Control'||e.name==='Cache-control');

                      		if(a>=0)
							{
								check=lg.log.entries[i].response.headers[a].value;

								if(check.includes('public')){Cache.public=1;}
								if(check.includes('private')){Cache.private=1;}
								if(check.includes('no-cache')){Cache.noCache=1;}
								if(check.includes('no-store')){Cache.noStore=1;}
								if(check.includes('max-stale')){Cache.maxStale=1;}
								if(check.includes('min-fresh')){Cache.minFresh=1;}
								if(check.includes('max-age'))
								{
									regEx= /\max-age=\d*/g;
									str=check;

									ret=regEx.exec(str);
									//console.log('resp maxage'+i+'||');
									//console.log(ret[0]);
									regEx1=/\d\d*/g;
									res=regEx1.exec(ret[0]);
									Cache.maxAge=parseInt(res);
									//console.log('passes');
								}
								else
                                {
                                    a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='expires'||e.name==='Expires');
                                    b=lg.log.entries[i].response.headers.findIndex(element=> element.name==='date'|| element.name==='Date');
                                    if(a>=0 && b>=0)
                                    {
                                        date_sec=Date.parse(lg.log.entries[i].response.headers[b].value);
                                        exp=lg.log.entries[i].response.headers[a].value;
                                        if(isNaN(parseInt(exp))){expire_sec=Date.parse(exp);}else{expire_sec=parseInt(exp);}
                                        Cache.maxAge=expire_sec-date_sec;
                                    }                              
                                }
							}
                        
							a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='content-type'||e.name==='Content-Type');
							//console.log('str is '+a);
                            if (a>=0)
                            {
								str=lg.log.entries[i].response.headers[a].value;
								regEx= /\w*\/\w*/g;
								//console.log('resp content'+i+' || '+str);

								ret=regEx.exec(str);
								//console.log(ret);
                                ContentType=ret[0];
                            }
                            else
                            {
								//console.log('mime type'+i);
								str=lg.log.entries[i].response.content.mimeType;
								if (str === undefined || str==="")
								{}
								else
                                {
                                    regEx= /\w*\/\w*/g;
                                    ret=regEx.exec(str);
                                    ContentType=ret[0];
                                }
                            }
                            a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='Age'||e.name==='age');
                            if(a>=0)
                            {
                                Age=lg.log.entries[i].response.headers[a].value;
                            }
                            a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='Pragma'||e.name==='pragma');
                            if(a>=0 )
                            {
                                Cache.noCache=1;
                            }
                            a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='expires'||e.name==='Expires');
                            if(a>=0)
                            {
                                Expires=lg.log.entries[i].response.headers[a].value;
                            }
                            a=lg.log.entries[i].response.headers.findIndex(e=> e.name==='Last-Modified'||e.name==='last-modified');
                            if(a>=0)
                            {
                                LastModified=lg.log.entries[i].response.headers[a].value;
                            }
							head2={cache:Cache,expires:Expires,lastModified:LastModified,age:Age,contentType:ContentType};

                            ////////////////////////////////////////////////////
                            Cache={
						private:0,
						public:0,
						noCache:0,
						noStore:0,
						maxStale:0,
						minFresh:0,
						maxAge:"notDefined",
						};

                        Host="notDefined";
                        ContentType="notDefined";
							a=lg.log.entries[i].request.headers.findIndex(e=> e.name==='content-type'||e.name==='Content-Type');
							//console.log('a req cont is '+a);
                            if (a>=0)
                            {
								str=lg.log.entries[i].request.headers[a].value;
                                regEx= /\w*\/\w*/g;
                                ret=regEx.exec(str);
                                ContentType=ret[0];
                            }
                            a=lg.log.entries[i].request.headers.findIndex(e=> e.name==='Cache-Control'||e.name==='cache-control');
                            if(a>=0)
							{
								check=lg.log.entries[i].request.headers[a].value;
								if(check.includes('public')){Cache.public=1;}
								if(check.includes('private')){Cache.private=1;}
								if(check.includes('no-cache')){Cache.noCache=1;}
								if(check.includes('no-store')){Cache.noStore=1;}
								if(check.includes('max-stale')){Cache.maxStale=1;}
								if(check.includes('min-fresh')){Cache.minFresh=1;}
								if(check.includes('max-age'))
								{
									regEx= /\max-age=\d*/g;
									str=check;
									ret=regEx.exec(str);
									//console.log('req maxage'+i+'||');
									//console.log(ret[0]);
									regEx1=/\d\d*/g;
									res=regEx1.exec(ret[0]);
									Cache.maxAge=parseInt(res);
									//console.log('passes');
								}
                            }
                            a=lg.log.entries[i].request.headers.findIndex(e=> e.name==='Pragma'||e.name==='pragma');
                            if(a>=0)
                            {
                                Cache.noCache=1;
                            }
                            a=lg.log.entries[i].request.headers.findIndex(e=> e.name==='Host'||e.name==='host');
                            if(a>=0)
                            {
                                Host=lg.log.entries[i].request.headers[a].value;
                            }

						head={cache:Cache,contentType:ContentType,host:Host};

						response={headers: head2, status:lg.log.entries[i].response.status, statusText : lg.log.entries[i].response.statusText};
						request = { method : lg.log.entries[i].request.method, url: domainurl.hostname, headers :head }; 
						timings = { wait : lg.log.entries[i].timings.wait};
						entriesObj.entries[i]={startedDateTime:lg.log.entries[i].startedDateTime,serverIPAddress:lg.log.entries[i].serverIPAddress, timings,request,response};
						a=ipLog.findIndex(e=>e.ip===lg.log.entries[i].serverIPAddress);
						if(a!==-1){ipLog[a].count+=1;}
						else if(lg.log.entries[i].serverIPAddress!==undefined){ip=lg.log.entries[i].serverIPAddress; count=1;	ipLog.push({ip,count});}
					};

					logObj.log=entriesObj;
					log=logObj;
					textobj=JSON.stringify(logObj);
					iplog=JSON.stringify(ipLog);

					console.log(logObj);
					

				};

				
				
				// var text exei periexomeno tou entriesOnj//
				// koumpi save file locally//
				function saveFile(){
					download('myHarFile.har', textobj);
				}

				function download(filename, textobj) {
					var pom = document.createElement('a');
					pom.setAttribute('href', 'data:text/plain;charset=utf-8,' + encodeURIComponent(textobj));
					pom.setAttribute('download', filename);

					if (document.createEvent) {
						var event = document.createEvent('MouseEvents');
						event.initEvent('click', true, true);
						pom.dispatchEvent(event);
					}
					else {
						pom.click();
					}
				}
				//pername apo php sthn js times gia ip ktl
				
				
				

				var username='<?php echo $username?>';
				var uid='<?php echo $uid?>';
				
				var provider="";
				var latitude="";
				var longitude="";
				var obj="";
				
				var username='<?php echo $username?>';
				fetch('https://ipapi.co/json/')
								.then(function(response) {
								response.json().then(jsonData => {
										obj=jsonData;
										provider=obj.org;
										latitude= obj.latitude;
										longitude= obj.longitude;
										ip = obj.ip;
										console.log(provider);
									
								});
								})
								.catch(function(error) {
								console.log(error)
								});
								console.log("hello this is obj");
								console.log(obj);
				 
				
				// upload the epeksergasmeno file //
			

				$(document).ready(function() {
					$('#upload').on('click', function() {
						$("#upload").attr("disabled", "disabled");
						
						
							if(text!=""){


								fetch('https://ipapi.co/json/')
										.then(function(response) {
										response.json().then(jsonData => {
											

											console.log(jsonData);
										});
										})
										.catch(function(error) {
										console.log(error)
										});


							$.ajax({
								url: "upload.php",
								type: "POST",
								data: {
									textobj,
									provider,
									latitude,
									longitude,
									username,
									iplog,
									uid
								},
								cache: false,
											success: function(dataResult){
												$("#upload").removeAttr("disabled");
												$("#success").show();
												$("#success").html('file uploaded successfully !'); 					
											
											}
											
																		
								
							});
						}
						else{
							alert('Please fill all the field !');
						}
					});
				});
				
				// map set up

				
				
			
				

				</script>

 
	
	
<



































			</body> 
	 




<footer>
	
    <div id="footer" class="bg-dark">
       <div  class="row text-light text-center py-4 justify-content-center">

          

           <div class="col-md-6 my-5  mx-auto">
               <img src="img/logo.png" alt="Logo" class="w-50 image-center  pb-4">
               <h6>All rights reserved.</h6>                    
              
           </div>

           <div class="col-md-6 my-5  mx-auto">
               <p> A website made as a school project!</p>
               <img src="img/ceid.jpg" alt="ceid" class="w-50 image-center border 1 pb-4 ">
           </div>


       </div>
	</div>   
	
	
	
</footer>
			  

    
    
 	



			

 <!-- SRIPT FILES-->

   <!-- jQuery -->
   <script src="js/jquery-3.5.1.min.js"></script>
	<!-- Bootstrap 4.5 JS -->
	<script src="js/bootstrap.min.js"></script>
	
	<!-- Font Awesome -->
	<script src="js/all.min.js"></script>

    <!-- END SCRIPT FILES -->



			
</html>
