<?php
  fscanf(STDIN, "%d %d", $X, $Y);
  for($i = 0; $i <= $X+1; $i++){
      $j = $X - $i;
      if($i*2 + 4*$j == $Y){
          echo "Yes" ."\n";
      }
  }  
?>