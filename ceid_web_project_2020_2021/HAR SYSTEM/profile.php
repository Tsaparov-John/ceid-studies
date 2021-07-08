<!DOCTYPE html>
<html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name=viewport" content="width=device-width, initial-scale=1.0,viewport-fit=cover">
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
        <style> ul {list-style:none;}
                li {margin-top:2px;} </style>
        <style> .change {position:relative; left:40vw; font-size:11pt;}</style>
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
                        <li class="nav-item"><a href="userhome.php" class="nav-link">My page</a></li>
                        <li class="nav-item"><a  href="profile.php" class="nav-link active">Profile</a></li>
                        <li class="nav-item"><a href="logout.php" class="nav-link">Log Out</a></li>
                    </ul>
                </div>
            </div>
        </nav>

        <body class="loggedin" id="logged">

 
        <div class="change" id="stats">
            <h3 id="stats">Your recent Statistics</h3>
        <table id="table">
        <tr><td>Last Upload Date:</td><td id="up_date"></td></tr>
        <tr><td>Number of Entries:</td><td id="cntr"></td></tr>
        </table>
            <ul id="changer">
                <form method="post" id="name_change">
                    
                    <li>
                    <input type="text" name="username" class="here" id="username" placeholder="New username">
                    </li>
                    <li>
                    <input type="password" name="password" class="here" id="password" placeholder="Password">
                    </li>
                    <li>
                    <input type="submit" value="Change Name" id="chngName" name="nm_chng" >
                    </li>
                </form>

                <form method="post" id="pass_change">
                    <li>
                        <input type="password" name="password" class="here" id="password" placeholder="Password">
                    </li>
                    <li>
                        <input type="password" name="password1" class="here" id="password1" placeholder="New Password">
                    </li>
                    <li>
                        <input type="password" name="password2" class="here" id="password2"  placeholder="Confirm New Password">
                    </li>
                    <li>
                        <input type="submit" value="Change Password" id="chngPass" name="psw_chng">
                    </li>
                </form>
            </ul>
            <?php
                include ('nameChange.php');
                include ('passChange.php');
                ?>
        </div>

    </body> 

    <footer class="profile"> <!-- έτσι ώστε να είναι πάτνα στο κάτω μέρος.style="position:fixed; bottom:0; width:100vw"-->
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
    <script>
                    var ajax = new XMLHttpRequest();
					var method = "POST";
					var asynchronous=true;
					var url="dateCounter.php";
                    var username='us';

					ajax.open(method,url,asynchronous);
					//sending ajax request
                    ajax.send();
                    ajax.onreadystatechange =function()
					{
						if (this.readyState==4 && this.status == 200)
						{
							//converting json back to array
                            var  userTable=JSON.parse(this.responseText);

                            counter=document.getElementById("cntr");
                            counter.innerText=userTable.counterEntries;
                            date=document.getElementById("up_date");
                            date.innerText=userTable.stamptime;
                            console.log('request success');
                        }
                    };


   </script>
    <!-- jQuery -->
    <script src="js/jquery-3.5.1.min.js"></script>
    <!-- Bootstrap 4.5 JS -->
    <script src="js/bootstrap.min.js"></script>
    <!-- Font Awesome -->
    <script src="js/all.min.js"></script>
    <!-- END SCRIPT FILES -->	
</html>