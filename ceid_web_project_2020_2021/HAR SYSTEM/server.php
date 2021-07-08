<?php

session_start();

include("dbconnect.php");
//login--authenticate
$empty=false;
$errors=array();

if (isset($_POST['login']))
{
// Now we check if the data from the login form was submitted, isset() will check if the data exists.
/*if ( !isset($_POST['username'], $_POST['password']) ) {
	// Could not get the data that should have been sent.
	array_push($errors, "Please fill both the username and password fields!");
}*/
if (empty($_POST['username'])) {
	array_push($errors, "Username is required");
	$empty=true;
}
if (empty($_POST['password'])) {
	array_push($errors, "Password is required");
	$empty=true;
}


// Prepare our SQL, preparing the SQL statement will prevent SQL injection.
if ($stmt = $con->prepare('SELECT id, password, email, type FROM user WHERE username = ?')) {
	// Bind parameters (s = string, i = int, b = blob, etc), in our case the username is a string so we use "s"
	$stmt->bind_param('s', $_POST['username']);
	$stmt->execute();
	// Store the result so we can check if the account exists in the database.
	$stmt->store_result();
	
		
		if ($stmt->num_rows > 0) {
			$stmt->bind_result($id, $password, $email, $type);
			$stmt->fetch();
			// Account exists, now we verify the password.
			// Note: remember to use password_hash in your registration file to store the hashed passwords.
			$pass=md5($_POST['password']);
			if ($password!=$pass) {
				// Incorrect password
				array_push($errors, "Incorrect username and/or password!");
				$empty=true;
			
				
			}
			if ($pass==$password){
				// Verification success! User has loggedin!
				// Create sessions so we know the user is logged in, they basically act like cookies but remember the data on the server.
				session_regenerate_id();
				$_SESSION['loggedin'] = TRUE;
				$_SESSION['user'] = TRUE;
				$_SESSION['username'] = $_POST['username'];
				$_SESSION['password']=$password;
				$_SESSION['id'] = $id;
				$_SESSION['email']=$email;
				$_SESSION['type']=$type;
				if (!$type){
					header('Location: userhome.php');
				}
				if($type){
					header('Location: adminhome.php');
				}

			}
			
		} 

	
	$stmt->close();
	
	}
}

//register proccess

$username="";
$email="";

$sancheck=false;


//reg user

if (isset($_POST['reg_user']))
    {
       
        

    //receive all inputs values from form
    $email = mysqli_real_escape_string($con, $_POST['email']);
    $username = mysqli_real_escape_string($con, $_POST['username']);
    $password1 = mysqli_real_escape_string($con, $_POST['password1']);
	$password2 = mysqli_real_escape_string($con, $_POST['password2']);
	
		
	
	 

 
    if (empty($username)) { array_push($errors, "Username is required"); }
	if (empty($email)) { array_push($errors, "Email is required"); }
	$uppercase = preg_match('@[A-Z]@', $password1);
	$number    = preg_match('@[0-9]@', $password1);
	$specialChars = preg_match('@[^\w]@', $password1);

	if(!$uppercase || !$number || !$specialChars || strlen($password1) < 8) {array_push($errors, "Password is weak"); }
    if (empty($password1)) { array_push($errors, "Password is required"); }
    if ($password1 != $password2) {  array_push($errors, "The two passwords do not match"); }   
    

    //check oti den yparxei hdh (mail, username)
    $user_check_query = "SELECT * FROM user WHERE username='$username' OR email='$email' LIMIT 1";
    $result = mysqli_query($con, $user_check_query);
   $user = mysqli_fetch_assoc($result);
  
    if ($user) { // if user exists
        if ($user['username'] === $username) {
             array_push($errors, "Username already exists");
        }
        if ($user['email'] === $email) {
            array_push($errors, "email already exists");
        }
    }
    //ean den lathh tote sign up
    if (count($errors) == 0) {
		$password =md5($password1);;//encrypt the password before saving in the database
  
        $query = "INSERT INTO user (username, email, password, type) 
                  VALUES('$username', '$email', '$password','0')";
        $sancheck=true; // gia test
		mysqli_query($con, $query);
		
		$sql= "CREATE TABLE ".$username." (
			latitude VARCHAR(10),
			longitude VARCHAR(10),
			entriesCounter INT(10),
			PRIMARY KEY(latitude,longitude)
			)";
		
			$result=mysqli_query($con,$sql) or die("wrong: $sql");

    }
    

	}


?>
   
