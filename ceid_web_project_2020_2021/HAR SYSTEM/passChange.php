<?php

 if(isset($_POST['psw_chng'])) 
{
    session_start(); //starting session to have access to the info
    include("dbconnect.php");//connect to the database
    $username=$_SESSION['username'];
    $proceed=false;
    $errors=array();

    if (empty($_POST['password'])) 
    {
        array_push($errors, "Password is required");
    }
    // Prepare our SQL, preparing the SQL statement will prevent SQL injection.
    if($query=$con->prepare("SELECT password FROM user WHERE (username=?)"))
    {
        $query->bind_param('s',$username);
        $query->execute();
        $query->store_result();
        $query->bind_result($password);
        $query->fetch();
        $query->close();
        $pass=$_POST['password'];
        if( md5($pass) === $password)
        {
            $proceed=true;
        }
        else
        {
            array_push($errors, "Incorrect Password");
        }
    }

    if ($proceed) 
    {
        $password1 = mysqli_real_escape_string($con, $_POST['password1']);//because we do it in server
        $password2 = mysqli_real_escape_string($con, $_POST['password2']);
        $uppercase = preg_match('@[A-Z]@', $password1);
        $number    = preg_match('@[0-9]@', $password1);
        $specialChars = preg_match('@[^\w]@', $password1);
        if(!$uppercase || !$number || !$specialChars || strlen($password1) < 8) {array_push($errors, "Password is weak"); }
        if (empty($password1)) { array_push($errors, "Password is required"); }
        if ($password1 != $password2) {  array_push($errors, "The two passwords do not match"); }   
        if (count($errors) == 0) 
        {
            $password =md5($password1);//encrypt the password before saving in the database
            $query=$con->prepare("UPDATE user SET password=? WHERE (username=?)");
            $query->bind_param('ss',$password,$username);
            $query->execute();
            $query->close();
        
            echo '<div style="position:relative; font-size:11pt; color:black; background-color:rgba(0,255,0,0.3);  width:240pt;">
            <e> "Password Changed."  </e>
            </div>';
        }
        if (count($errors) > 0) 
        {
            foreach ($errors as $error)
            {
                echo    '<div style="position:relative; font-size:11pt; color:black; background-color:rgba(255,0,0,0.3); width:240pt;">
                        <e> '.$error.'<br>  </e>
                        </div>';
            }
            unset($error);
        } 
    } 
 mysqli_close($con);//close connection to DB
} 
?>