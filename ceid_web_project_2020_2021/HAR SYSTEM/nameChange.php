<?php

if(isset($_POST['username']))
{
session_start();//starting session to have access to the info
include("dbconnect.php");//connect to the database
$proceed=false;
$errors=array();
$username=$_SESSION['username'];// username the user had
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
}

if ($proceed)
{
$new_username=$_POST['username'];
//check if username exists
$query=$con->prepare("SELECT username FROM user WHERE(username=?)");
$query->bind_param('s',$new_username);//needs to be new username 
$query->execute();
$query->store_result();
$query->bind_result($uname);
$query->fetch();
$query->close();

if(isset($uname))
{
    ?>
<e><?php echo "Username Already Exists <br>"?></e>
<?php
}
else
{
//find user id and save it.
$query=$con->prepare("SELECT id FROM user WHERE(username=?)");
$query->bind_param('s',$username);
$query->execute();
$query->store_result();
$query->bind_result($uid);
$query->fetch();
$query->close();

// set username as new user name
$query=$con->prepare("UPDATE user SET username=? WHERE (id=?)");
$query->bind_param('si',$new_username,$uid);
$query->execute();
$query->close();

$query="ALTER TABLE ".$username." RENAME TO ".$new_username.";";// den nomizo oti ginete alliow dedomenou toy tropou poy einai stimeno
mysqli_query($con,$query);
$_SESSION['username'] =$new_username;//change session username so user neednot login again for other changes to be done./
?>
<e><?php echo "Username Changed. <br>"?></e>
<?php
}
mysqli_close($con);//close connection to DB
}
}
?>
