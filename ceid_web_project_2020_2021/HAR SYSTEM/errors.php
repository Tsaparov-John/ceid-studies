<?php $entered=false; ?> 
<?php  if (count($errors) > 0) : ?>
  <div class="error" id="error">
  	<?php foreach ($errors as $error) : ?>
      <e><?php echo  $error,"<br>"  ?></e>
      
      
      <?php endforeach ?>
          <?php if (!$empty): ?>

                <?php $entered=true; ?> 
          <?php endif ?>
  </div>
  <?php endif ?>
<?php if ($sancheck) : ?>
    <e id="error"><?php echo "You succesfully registered! Please login. <br>"?></e>
    <?php $entered=false; ?> 
   
    <?php endif ?>

   <?php  if ($entered) : ?>
   <!-- to return to the reg screen -->
   <script type="text/javascript"> 
     registerform.style.left='0px';
            registerform.style.opacity='1';
            loginform.style.left='-600px';
            loginform.style.opacity='0';
            forgot.style.left='-600px';
            forgot.style.opacity='0';
            registerbtn.classList.add('active');
            loginbtn.classList.remove('active'); 
           
</script>
<?php endif ?>
