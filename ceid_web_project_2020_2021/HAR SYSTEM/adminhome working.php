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
//do as above for session type check

include "dbconnect.php";


   
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
            <script src="https://momentjs.com/downloads/moment.js"></script>

            <!-- chart.js -->
            <script src="https://cdn.jsdelivr.net/npm/chart.js@2.9.4/dist/Chart.min.js"></script>
		</head>



                                <!--menu-->
                                <nav class="navbar bg-light navbar-light navbar-expand-lg">
                                <div class="container">

                                    <a href="index.html" class="navbar-brand"><img src="img/logo.png"></a>

                                    <button class="navbar-toggler" type="button" data-toggle="collapse"
                                    data-target="#navbarResponsive">
                                    <span class="navbar-toggler-icon"></span>
                                    </button>

                                    <div class="collapse navbar-collapse" id="navbarResponsive">
                                        <ul class="navbar-nav ml-auto">
                                            <li class="nav-item"><a href="adminhome.php" class="nav-link active">Admin</a></li>
                                            <li class="nav-item"><a href="logout.php" class="nav-link">Log Out</a></li>
                                        </ul>
                                    </div>
                                </div>
                                </nav>  

       <!-- periexomeno -->
<div>
    
<div class="row">
                 <div class="col-md-1" style="position:fixed;margin-top:20px; font-size:10px;">
            
                        <div id="boxes">
                            <text style="font-weight: bold;">Content Types</text>
                        <form id="choices">
                        <input type="checkbox" value="" id="Typebox-1" checked><label for="Typebox-1">All Content Types</label><br>
                        <!--<input type="submit" value="Submit">-->
                        </form>
                         </div>
            </div>

            <div class="col-md-1" style="position:fixed;margin-top:20px; margin-left:10%; font-size:10px;" >
                <text style="font-weight: bold;">Internet Service Providers</text>
                <form id="ispChoice">
                <input type="checkbox" value="" id="ISPbox-1" checked><label for="ISPbox-1">All ISPs</label><br>
                <!--<input type="submit" value="Submit 1">-->
                </form>
                <text style="font-weight: bold;">Days of the Week</text>
                <form id="dayChoice">
                <input type="checkbox" value="Mon" id="day1"><label for="day1">Monday</label><br>
                <input type="checkbox" value="Tue" id="day2"><label for="day2">Tuesday</label><br>
                <input type="checkbox" value="Wed" id="day3"><label for="day3">Wednesday</label><br>
                <input type="checkbox" value="Thu" id="day4"><label for="day4">Thursday</label><br>
                <input type="checkbox" value="Fri" id="day5"><label for="day5">Friday</label><br>
                <input type="checkbox" value="Sat" id="day6"><label for="day6">Saturday</label><br>
                <input type="checkbox" value="Sun" id="day7"><label for="day7">Sunday</label><br>
                <input type="checkbox" value="" id="day-1" checked><label for="day-1">All Days</label><br>
                </form>
                <text style="font-weight: bold;">Methods Available</text>
                <form id="methChoice">
                <input type="checkbox" value="" id="meth-1" checked><label for="meth-1">All Methods</label><br> 
                </form>
                <button   id="BringChoice" name="BringChoice" style="border: 2px; border-radius:2px;margin-top: 20px; background-color: #8dcaff; color: #01233f;">Submit All choices</button>
            </div>
           
          </div>  

<div class="col-md-8" style="margin-left:20%; text-align:center;">
<div class="kati">
<h1 class="p-4">Statistics of the HAR collector system</h1>

<line class="p-2"> <b>Number of users: </b> <part id="NoOfUsers">  </part></line> <br>
<line class="p-2"> <b>Number of domains: </b> <part id="NoOfDomains"> </part></line> <br>
<line class="p-2"> <b>Number of providers: </b> <part id="NoOfProviders"> </part></line> <br>
<br>
<h2 class="p-3">Number of entries per method</h2><br>
<style>
table {
  border-collapse: collapse;
  width: 60%;
  margin: auto;
  text-align: center;
  
}

table tr:first-child th:first-child {
    border-top-left-radius: 10px;
}

table tr:first-child th:last-child {
    border-top-right-radius: 10px;
}

table tr:last-child td:first-child {
    border-bottom-left-radius: 10px;
}

table tr:last-child td:last-child {
    border-bottom-right-radius: 10px;
}


th, td {
  text-align: center;
  padding: 15px;
}

tr:nth-child(even){background-color: #4c96d7}
tr:nth-child(odd){background-color: #8dcaff}

th {
  background-color: #083b66;
  color: white;
}
</style>
<table id="mytable">
        <tr> <th >Method</th><th>Counter</th> </tr>
        <tbody id="tbody"> 
  
        </tbody>

</table>


<script>
 var randomColor = function(opacity) { return 'rgba(' + Math.round(Math.random() * 100) + ',' + Math.round(Math.random() * 100) + ',' + 200 + ',' + (opacity || '.3') + ')'; };
    var ajax = new XMLHttpRequest();
					var method = "POST";
					var asynchronous=true;
					var url="adminbasic.php";
              
					ajax.open(method,url,asynchronous);
					//sending ajax request
                    ajax.send();
                    ajax.onreadystatechange =function()
					{
						if (this.readyState==4 && this.status == 200)
						{
							//converting json back to array
                            var  adminbasic=JSON.parse(this.responseText);
                            
                            admincount=document.getElementById("NoOfUsers");
                            admincount.innerText=adminbasic.UsersCount;
                            domain=document.getElementById("NoOfDomains");
                            domain.innerText=adminbasic.UnDom;
                            provider=document.getElementById("NoOfProviders");
                            provider.innerText=adminbasic.UnISP;
                        }
                    };

                    var ajax = new XMLHttpRequest();
					var method = "POST";
					var asynchronous=true;
					var url="getmethod.php";
              
                    //let test="";
					ajax.open(method,url,asynchronous);
					//sending ajax request
                    ajax.send();
                    ajax.onreadystatechange =function()
					{
						if (this.readyState==4 && this.status == 200)
						{
                            //converting json back to array
                            let test="";
                            var  method=JSON.parse(this.responseText);
                            meth=document.getElementById("methChoice");
                            
                            let x=method.length;
                           for (i=0;i<x;i++){
                                    test +="<tr><td>" + method[i].word + "</td><td>" + method[i].wordCount + "</td></tr>" ;
                                    meth.innerHTML='<input type="checkbox" value="'+method[i].word+'" id="meth'+i+'"><label for="meth'+i+'">'+method[i].word+'</label><br>'+meth.innerHTML;
                            }
                            $('#tbody').append(test);
                         
                        }
                    };
                    //////////////////////////////////////////////////////////////////////////////////////////////////

                    $(document).ready(function()
                    {
                        var choicesBar=document.getElementById("choices");
                        var ajax = new XMLHttpRequest();
                        var method = "POST";
                        var asynchronous=true;
                        var url="ContentType.php";
                        
                        ajax.open(method,url,asynchronous);
                        //sending ajax request
                        ajax.send();
                        ajax.onreadystatechange =function()
                        {
                            if (this.readyState==4 && this.status == 200)
                            {
                                //converting json back to array
                                var  result=JSON.parse(this.responseText);
                                console.log('1f')
                                console.log(result);

                                for(x=0;x<result.length;x++)
                                {
                                    choicesBar.innerHTML='<input type="checkbox" value="'+result[x]['word']+'" id="Typebox'+x+'"><label for="Typebox'+x+'">'+result[x]['word']+'</label><br>'+choicesBar.innerHTML;                                    
                                }
                            }
                        };
                        var ispBar=document.getElementById("ispChoice");
                        var ajax = new XMLHttpRequest();
                        var method = "POST";
                        var asynchronous=true;
                        var url="getProviders.php";
                        
                        ajax.open(method,url,asynchronous);
                        //sending ajax request
                        ajax.send();
                        ajax.onreadystatechange =function()
                        {
                            if (this.readyState==4 && this.status == 200)
                            {
                                //converting json back to array
                                var result=JSON.parse(this.responseText);
                                console.log('Providers');
                                console.log(result);
                                for(x=0;x<result.length;x++)
                                {
                                    ispBar.innerHTML='<input type="checkbox" value="'+result[x]['ISP']+'" id="ISPbox'+x+'"><label for="ISPbox'+x+'">'+result[x]['ISP']+'</label><br>'+ispBar.innerHTML;                                    
                                }
                            }
                        };
                    });
                    var selectedType = [];
                    //$( "#choices" ).submit= 
                    function choiceSub( event ) 
                    {//οπου target to id της φορμας

                        //array για να κρατάω τα values των check boxes
                        selectedType = [];// TO EMPty the arra
                        //whereQ="";
                        $('#choices input:checked').each(function() {
                            selectedType.push($(this).attr('value'));//σπρωνω τa value attribute ton checkbox
                        });
                        console.log('selected type');
                        console.log(selectedType);
                        //console.log($( "#txtBox1" ).first().val());//παιρνει την τιμή του txtBox1 για φορμες αλλαγης του username kai password
                        //$( "#txtBox1" ).first().val()//παίρνω το value του #txtBox1 xrhsimo για φόρμες μαλλον
                        event.preventDefault();

                       
                        if(selectedType.includes("")){whereQ="AND (1 ) ";}
                        else if(selectedType.length!==0)
                        {
                            whereQ="AND (";
                            selectedType.forEach(function(e){whereQ+="(json_extract(`resHeader`,'$.contentType')='"+e+"' ) OR " });
                            whereQ+="0)";
                        }
                       
                        console.log(whereQ);

                    };
                    var selectedMethod = [];
                    //$( "#choices" ).submit= 
                    function methSub( event ) 
                    {//οπου target to id της φορμας

                        //array για να κρατάω τα values των check boxes
                        selectedMethod = [];// TO EMPty the arra
                        //whereQ="";
                        $('#methChoice input:checked').each(function() {
                            selectedMethod.push($(this).attr('value'));//σπρωνω τa value attribute ton checkbox
                        });
                        console.log('selected Method');
                        console.log(selectedMethod);
                        //console.log($( "#txtBox1" ).first().val());//παιρνει την τιμή του txtBox1 για φορμες αλλαγης του username kai password
                        //$( "#txtBox1" ).first().val()//παίρνω το value του #txtBox1 xrhsimo για φόρμες μαλλον
                        event.preventDefault();

                       
                        if(selectedMethod.includes("")){whereM="AND (1 ) ";}
                        else if(selectedMethod.length!==0)
                        {
                            whereM="AND (";
                            selectedMethod.forEach(function(e){whereM+="(reqMethod='"+e+"' ) OR " });
                            whereM+="0)";
                        }
                       
                        console.log(whereM);

                    };
                    
                    var selectedIsp = [];

                    //$( "#ispChoice" ).submit= 
                    function ispSub( event ) 
                    {//οπου target to id της φορμας

                        selectedIsp = [];
                        //whereIsp="";
                        console.log(whereQ)
                        //array για να κρατάω τα values των check boxes
                        $('#ispChoice input:checked').each(function() {
                            selectedIsp.push($(this).attr('value'));//σπρωνω τa value attribute ton checkbox
                        });
                        console.log('selected isp');
                        console.log(selectedIsp);
                        //console.log($( "#txtBox1" ).first().val());//παιρνει την τιμή του txtBox1 για φορμες αλλαγης του username kai password
                        //$( "#txtBox1" ).first().val()//παίρνω το value του #txtBox1 xrhsimo για φόρμες μαλλον
                        event.preventDefault();
                        
                        if(selectedIsp.includes("")){whereIsp="AND (1) "}
                        else if(selectedIsp.length!==0)
                        {
                            console.log('sHit')
                            whereIsp="AND (";
                            selectedIsp.forEach(function(e){whereIsp+="(ISP='"+e+"' ) OR " ; });
                            whereIsp+="0)";
                        }
                        
                        console.log(whereIsp);
                    };
                    var selectedDay = [];

                    //$( "#ispChoice" ).submit= 
                    function daySub( event ) 
                    {//οπου target to id της φορμας

                        selectedDay = [];
                        //whereIsp="";
                        //console.log(whereQ)
                        //array για να κρατάω τα values των check boxes
                        $('#dayChoice input:checked').each(function() {
                            selectedDay.push($(this).attr('value'));//σπρωνω τa value attribute ton checkbox
                        });
                        if(selectedDay.includes("")){selectedDay=["Mon","Tue","Wed","Thu","Fri","Sat","Sun"];}
                        console.log('selected Day');
                        console.log(selectedDay);
                        //console.log($( "#txtBox1" ).first().val());//παιρνει την τιμή του txtBox1 για φορμες αλλαγης του username kai password
                        //$( "#txtBox1" ).first().val()//παίρνω το value του #txtBox1 xrhsimo για φόρμες μαλλον
                        event.preventDefault();

                    };
                
                    var whereQ="AND (1) ";
                    var whereIsp="AND ( 1 ) ";
                    var whereM ="AND ( 1 ) ";


                    $( "#BringChoice" ).click(function() {//to moandik;o koympi
                                $( "#choices" ).submit(choiceSub(event));//kano submit ta content-type
                                $( "#ispChoice" ).submit(ispSub(event));//kanosubmit ta isp
                                $( "#methChoice" ).submit(methSub(event));
                                $( "#dayChoice" ).submit(daySub(event));
                                $.ajax(
                                {
                                    url: "respond3.php",
                                    type: "POST",
                                    data: { whereQ,whereIsp },
                                    cache: false,
                                    success: function(dataResult){
                                                                    dr=JSON.parse(dataResult);
                                                                    console.log('3a after submit')
                                                                    console.log(dr.ttl.sort((a,b)=> a-b));
                                                                    console.log(Math.max(...dr.ttl));
                                                                    console.log(Math.min(...dr.ttl));
                                                                    }
                                                
                                });
                                $.ajax(
                                {
                                    url: "respond3b.php",
                                    type: "POST",
                                    data: { whereQ,whereIsp },
                                    cache: false,
                                    success: function(dataResult){
                                                            dr=JSON.parse(dataResult);
                                                            console.log('3b after submit')
                                                            console.log(dr);
                                                            var threeB=[];
                                                            threeB[0]=dr.percentMaxStale;
                                                            threeB[1]=dr.percentMinFresh;
                                                            threeB[2]=dr.percentNone;
                                                            var ctx = document.getElementById('mydoughnut').getContext('2d');
                                                            var mydoughnut = new Chart(ctx, {
                                                            type: 'doughnut',
                                                            data: {
                                                            labels: ["max=stale", "min-fresh", "none"],
                                                            datasets: [
                                                                {
                                                                backgroundColor: ["#4c96d7", "#1761a0","#083b66"],
                                                                data: threeB
                                                                }
                                                                    
                                                            ]
                                                                }
                                                                
                                                            });
                                                            //console.log(threeB);
                                                                    }
                                                
                                });
                                $.ajax(
                                {
                                    url: "respond3c.php",
                                    type: "POST",
                                    data: { whereQ,whereIsp },
                                    cache: false,
                                    success: function(dataResult){

                                                            var threeC=[];
                                                            dr=JSON.parse(dataResult);
                                                            console.log('3c after submit')
                                                            console.log(dr);
                                                            threeC[0]=dr.percentPublic;
                                                            threeC[1]=dr.percentPrivate;
                                                            threeC[2]=dr.percentNoCache;
                                                            threeC[3]=dr.percentNoStore;
                                                            threeC[4]=dr.percentNone;         
                                                            console.log(threeC);
                                                            var ctx = document.getElementById('mydoughnut2').getContext('2d');
                                                            var mydoughnut = new Chart(ctx, {
                                                            type: 'doughnut',
                                                            data: {
                                                            labels: ["public", "private", "no-cache","no-store","none"],
                                                            datasets: [
                                                                {
                                                                backgroundColor: ["#4c96d7", "#1761a0","#083b66","#01233f","#599dbd" ],
                                                                data: threeC
                                                                }
                                                                        
                                                            ]
                                                            }
                                                            
                                                        });
                                                            

                                                                    }
                                                
                                });
                                $.ajax(
                                {
                                    url:"timingsLine.php",
                                    type:"POST",
                                    data:{whereQ,whereIsp,whereM},
                                    cache:false,
                                    success: function(dataResult){
                                                                    var dataSet=[];                                                                    
                                                                    console.log('2 after submit');
                                                                    dr=JSON.parse(dataResult);
                                                                    console.log(dr);
                                                                    selectedDay.forEach(
                                                                        function(dayKey){
                                                                            var dataArray=[];
                                                                            //dataArray.length=24;
                                                                            
                                                                            for(hourKey in dr[dayKey])
                                                                            {   
                                                                                //a=hourKey.split('.');
                                                                                //xval=Date.parse("01 01 1970 "+a[0]+"");//xval+0.001*a[1]
                                                                                point={x:moment("01 01 1970 "+hourKey),y:dr[dayKey][hourKey].avg};
                                                                                dataArray.push(point);
                                                                            }      
                                                                            dst={lineTension:0,fill:false,label:dayKey, data: dataArray, options:{tooltips:{mod:'dataset'}}};
                                                                            dataSet.push(dst);     
                                                                            console.log("data sets");
                                                                            console.log(dataSet);                                                                
                                                                            //console.log(dr[e]===undefined);
                                                                            //console.log(e)
                                                                            
                                                                        }
                                                                    );
                                                                    $.each(dataSet, function(i, dataset) {
                                                                        dataset.borderColor = randomColor(1);
                                                                        dataset.backgroundColor = randomColor(0.8);
                                                                        dataset.pointBorderColor = randomColor(0.9);
                                                                        dataset.pointBackgroundColor = randomColor(0.8);
                                                                        dataset.pointBorderWidth = 1;
                                                                    });
                                                                    var ctx = document.getElementById('myChart').getContext('2d');
                                                                    var mylineChart = new Chart(ctx, {
                                                                        type: 'line',
                                                                        data: {
                                                                            datasets: dataSet
                                                                            },
                                                                        options: {
                                                                            
                                                                                scales:{
                                                                                        //xAxes:[{type:'linear',scaleLabel: {display: true,labelString: 'x axis' }}]
                                                                                        xAxes:[{
                                                                                                type:'time',// linear put things in the right place depending n xvalue time alows use of time for x values
                                                                                                time:{unit:'minute',displayFormats:{second:'HH:mm'}},
                                                                                                //distribution:'linear',
                                                                                                scaleLabel: {display: true,labelString: 'Hours of the Day' }
                                                                                            }]
                                                                                    }
                                                                            }

                                                                        
                                                                    });
                                                                    }
                                }); 
                            });
/////////////////////////////////////////////////////////////////////////////////////////
/////////////////// requests to initialize the charts ///////////////////////////////////
                     $.ajax(
                        {
                            url: "respond3.php",
                            type: "POST",
                            data: { whereQ,whereIsp },
                            cache: false,
                            success: function(dataResult){
                                                            dr=JSON.parse(dataResult);
                                                            console.log('3a at start')
                                                            console.log(dr.ttl.sort((a,b)=> a-b));
                                                            console.log(Math.max(...dr.ttl));
                                                            console.log(Math.min(...dr.ttl));
                                                            }
                                        
                        });
                        
                    $.ajax(
                        {
                            url: "respond3b.php",
                            type: "POST",
                            data: { whereQ,whereIsp },
                            cache: false,
                            success: function(dataResult){
                                                            dr=JSON.parse(dataResult);
                                                            console.log('3b at start')
                                                            console.log(dr);
                                                            var threeB=[];
                                                            threeB[0]=dr.percentMaxStale;
                                                            threeB[1]=dr.percentMinFresh;
                                                            threeB[2]=dr.percentNone;
                                                            var ctx = document.getElementById('mydoughnut').getContext('2d');
                                                            var mydoughnut = new Chart(ctx, {
                                                            type: 'doughnut',
                                                            data: {
                                                            labels: ["max=stale", "min-fresh", "none"],
                                                            datasets: [
                                                                {
                                                                backgroundColor: ["#4c96d7", "#1761a0","#083b66"],
                                                                data: threeB
                                                                }
                                                                    
                                                            ]
                                                                }
                                                                
                                                            });
                                                            //console.log(threeB);
                                                            }
                                        
                        });
                    
                    $.ajax(
                        {
                            url: "respond3c.php",
                            type: "POST",
                            data: { whereQ,whereIsp },
                            cache: false,
                            success: function(dataResult){
                                                            var threeC=[];
                                                            dr=JSON.parse(dataResult);
                                                            console.log('3c at start')
                                                            console.log(dr);
                                                            threeC[0]=dr.percentPublic;
                                                            threeC[1]=dr.percentPrivate;
                                                            threeC[2]=dr.percentNoCache;
                                                            threeC[3]=dr.percentNoStore;
                                                            threeC[4]=dr.percentNone;         
                                                            console.log(threeC);
                                                            var ctx = document.getElementById('mydoughnut2').getContext('2d');
                                                            var mydoughnut = new Chart(ctx, {
                                                            type: 'doughnut',
                                                            data: {
                                                            labels: ["public", "private", "no-cache","no-store","none"],
                                                            datasets: [
                                                                {
                                                                backgroundColor: ["#4c96d7", "#1761a0","#083b66","#01233f","#599dbd" ],
                                                                data: threeC
                                                                }
                                                                        
                                                            ]
                                                            }
                                                            
                                                        });
                                                            }
                                        
                        });  
                   
                    $.ajax({
                            url:"timingsLine.php",
                            type:"POST",
                            data:{whereQ,whereIsp,whereM},
                            cache:false,
                            success: function(dataResult){
                                                            var dataSet=[];
                                                            console.log('2 at start');
                                                            dr=JSON.parse(dataResult);
                                                            console.log(dr);
                                                            for(dayKey in dr)
                                                            {
                                                                var dataArray=[];
                                                                //dataArray.length=24;
                                                                for(hourKey in dr[dayKey])
                                                                {   
                                                                    //a=hourKey.split('.');
                                                                   //xval=Date.parse("01 01 1970 "+a[0]+"");//xval+0.001*a[1]
                                                                   point={x:moment("01 01 1970 "+hourKey),y:dr[dayKey][hourKey].avg};
                                                                   dataArray.push(point);
                                                                }
                                                                dst={fill:false,label:dayKey, data: dataArray, options:{tooltips:{mod:'dataset'}}};
                                                                dataSet.push(dst);
                                                            }
                                                            console.log("data sets");
                                                            console.log(dataSet);
                                                            //dr.Mon.forEach(e=>console.log(e));
                                                           
                                                            $.each(dataSet, function(i, dataset) {
                                                                dataset.borderColor = randomColor(0.4);
                                                                dataset.backgroundColor = randomColor(0.1);
                                                                dataset.pointBorderColor = randomColor(0.7);
                                                                dataset.pointBackgroundColor = randomColor(0.5);
                                                                dataset.pointBorderWidth = 1;
                                                            });
                                                            var ctx = document.getElementById('myChart').getContext('2d');
                                                            var mylineChart = new Chart(ctx, {
                                                                type:'line',
                                                                data: {
                                                                    datasets: dataSet
                                                                    },
                                                                options: {
                                                                        scales:{
                                                                                //xAxes:[{type:'linear',scaleLabel: {display: true,labelString: 'x axis' }}]
                                                                                xAxes:[{
                                                                                        type:'time',// linear put things in the right place depending n xvalue time alows use of time for x values
                                                                                        time:{unit:'minute',displayFormats:{minute:'HH:mm'}},
                                                                                        ticks: {autoSkip: true,maxTicksLimit:48},
                                                                                        //distribution:'linear',
                                                                                        scaleLabel: {display: true,labelString: 'Hours of the Day' }
                                                                                    }]
                                                                            }
                                                                    }

                                                                
                                                            });
                                                            }
                    });  

</script>

<br>
<h2 class="p-3">Number of entries per Status</h2><br>

<table id="mytable">
        <tr> <th >Status Code</th><th>Counter</th> </tr>
        <tbody id="tbodystatus"></tbody>

</table>
<script>
var ajax = new XMLHttpRequest();
					var method = "POST";
					var asynchronous=true;
					var url="getstatus.php";
              
                    
					ajax.open(method,url,asynchronous);
					//sending ajax request
                    ajax.send();
                    ajax.onreadystatechange =function()
					{
						if (this.readyState==4 && this.status == 200)
						{
                            //converting json back to array
                            let toast="";
                            var  status=JSON.parse(this.responseText);
                            
                            let x=status.length;
                           for (i=0;i<x;i++){
                                    toast +="<tr><td>" + status[i].word + "</td><td>" + status[i].wordCount + "</td></tr>" ;
                            }
                            $('#tbodystatus').append(toast);
                         
                        }
                    };
</script>

<br>
        <h2 class="p-5">Statistics per content type</h2>
        <br>


        <table id="typetable">
                <tr> <th >Content-Type</th><th>Average Age</th> </tr>
                <tbody id="tbodytype"></tbody>

        </table>
        <script>
            
            var ajax = new XMLHttpRequest();
					var method = "POST";
					var asynchronous=true;
					var url="ContentType.php";
                    

					ajax.open(method,url,asynchronous);
					//sending ajax request
                    ajax.send();
                    ajax.onreadystatechange =function()
					{
						if (this.readyState==4 && this.status == 200)
						{
                            let types="";
                            //converting json back to array
                           var  resultType=JSON.parse(this.responseText);
                           console.log('1f')
                          console.log(resultType);
                          for (i=0;i<resultType.length;i++){
                                            types +="<tr><td>" + resultType[i].word + "</td><td>" + resultType[i].avgAge + "</td></tr>" ;
                                    }
                                    $('#tbodytype').append(types);
                          
                        }
                    };
        
        </script>

<br>
                    
        <br>
        <h2 class="p-5">Analysis if wait timings per hour</h2>
        <br>
        <canvas id="myChart" class="pt-3 pb-5"></canvas>    
        <style>      #myChart{   width: 60%!important; height: 60%!important; margin: auto;}  </style>


<br>
        <h2 class="p-5">Max ages of entries</h2>
        <br>
        <canvas id="myBarChart" class="pt-3 pb-5"></canvas>    
        <style>      #myBarChart{   width: 60%!important; height: 60%!important;  margin: auto;}    </style>

        <script>
                   var ctx = document.getElementById('myBarChart').getContext('2d');
                   var myBarChart = new Chart(ctx, {
                        type: 'bar',
                        data: {
                                labels:["1","2","3","4","5","6","7","8","9","10"],
                                datasets: [{
                                    label : "max-age",
                                    
                                    data: [2,6,5,4,8,5,1,4,7,8]
                                }]
                            }
                           
                      
                    });
        </script>

<br>
        <h2 class="p-5">Percentage of max-stale and min-fresh</h2>
        <br>
        
        <canvas id="mydoughnut" class="pt-3 pb-5"></canvas>    
        <style>      #mydoughnut{   width: 60%!important; height: 60%!important;  margin: auto;}    </style>


<br>
        <h2 class="p-5">Percentage of public, private,no-cache,no-store</h2>
        <br>
        
        <canvas id="mydoughnut2" class="pt-3 pb-5"></canvas>    
        <style>      #mydoughnut2{   width: 60%!important; height: 60%!important;  margin: auto;}    </style>



</div>

<br>
        <h2 class="p-5">gamw map</h2>
       

        <div id="map" style="margin-left:5%;"></div>
        <br>


        <!-- -->
        <script>
						var LeafIcon = L.Icon.extend({
                        options: {
                            iconSize:     [25  ,20],
                            iconAnchor:   [20, 20],
                            popupAnchor:  [-3, -76]
                        }
                    });	

							var map =L.map('map').setView([38,0],2);

							L.tileLayer('https://api.maptiler.com/maps/basic/{z}/{x}/{y}.png?key=XnxMXQ4hg5C6x51ILxAa',{
							tileSize:512,
							zoomOffset:-1,
							minZoom:2,
							attribution:'<a href="https://www.maptiler.com/copyright/" target="_blank">&copy; MapTiler</a> <a href="https://www.openstreetmap.org/copyright" target="_blank">&copy; OpenStreetMap contributors</a>'
							
                            }).addTo(map);
                            
                            var homeIcon = new LeafIcon({iconUrl: 'home.png'});
                            var serverIcon = new LeafIcon({iconUrl: 'server.png'});
                            L.icon = function (options) {
                                return new L.Icon(options);
                            };
                            L.marker([50, 15], {icon: homeIcon}).addTo(map).bindPopup("I am a home.");
                            L.marker([51.5, 0], {icon: homeIcon}).addTo(map).bindPopup("I am a home.");
                            L.marker([-20, 15], {icon: serverIcon}).addTo(map).bindPopup("I am a server.");
                        
                            var pointA = new L.LatLng(50, 15);
                            var pointB = new L.LatLng(-20, 15);
                            var pointB = new L.LatLng(51.5,0);
                            var pointList = [pointA, pointB];

                            var firstpolyline = new L.Polyline(pointList, {
                                color: 'red',
                                weight: 8,
                                opacity: 0.8,
                                smoothFactor: 0
                            });
                            firstpolyline.addTo(map);
                        </script>
                        <!-- -->


</div>


















</div>
</div>
                </div>


        
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
