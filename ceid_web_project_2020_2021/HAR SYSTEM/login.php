<?php
include ('server.php');

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
</head>

<body id="bodylog">

    <!-- ============= NAVIGATION ============= -->
    <nav class="navbar bg-light navbar-light navbar-expand-lg">
        <div class="container">

            <a href="index.html" class="navbar-brand"><img src="img/logo.png"></a>        
        </div>

    </nav>  


    <!-- log in and reg form-->

    <div  class="contains">
         <div class="loginregister">
                <div class="nav-buttons">
                  <button id="loginbtn">Login</button>

                  <button id="registerbtn">Register</button>
                </div>

             <div class="form-group">
             <form action="login.php" method="post" id="loginform">
                 <!-- display success reg -->
                 <?php include('errors.php'); ?>
                 <label for="username">username</label>
                 <input type="text" name="username" id="username" >
                 <label for="password">password</label>
                 <input type="password" name="password" id="password" >
                 
                 <input type="submit" name="login" value="LOGIN" class="submit">  
                 <div id="forgot">
                    <div >Have you forgot you password? Contact us.</div>
                </div> 


             </form>
             <form action="login.php" method="post" id="registerform">
                <!-- display validation errors -->
                <?php include('errors.php'); ?>
                <label for="email">email</label>
                <input type="text" name="email" id="email"  >
                <label for="username">username</label>
                <input type="text" name="username" id="username" >
                <label for="password">password</label>
                <input type="password" name="password1" id="password1">
                <label for="confirmpassword">confirm password</label>
                <input type="password" name="password2" id="password2"  >
                <input type="submit" value="Sign Up"  name="reg_user" class="submit">
                

             </form>
             </div>

             

          </div>

    


    </div>




    <script>
        var loginbtn = document.getElementById("loginbtn");
        var registerbtn = document.getElementById("registerbtn");
        var loginform = document.getElementById("loginform");
        var registerform = document.getElementById("registerform");
        var forgot = document.getElementById("forgot");
        

        
        
        loginbtn.onclick = function()
        {
            loginform.style.left='0px';
            loginform.style.opacity='1';
            forgot.style.left='0px';
            forgot.style.opacity='1';
            registerform.style='600px';
            registerform.style.opacity='0';
            loginbtn.classList.add('active');
            registerbtn.classList.remove('active');
            formReg=FALSE;
            
        }

        

        registerbtn.onclick= function(){ 
            registerform.style.left='0px';
            registerform.style.opacity='1';
            loginform.style.left='-600px';
            loginform.style.opacity='0';
            forgot.style.left='-600px';
            forgot.style.opacity='0';
            registerbtn.classList.add('active');
            loginbtn.classList.remove('active');
            formReg=TRUE;

        }
        

    
        

    </script>

        


<!--enf of log in and reg form-->






</body>


  </script>
 <!-- Font Awesome -->
 <script src="js/all.min.js"></script>

 <!-- END SCRIPT FILES -->

   </html>

