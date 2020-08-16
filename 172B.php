<?php
    $s = trim(fgets(STDIN));
    $t = trim(fgets(STDIN));
    $count = 0;
    $length = strlen($s);
    for($i = 0; $i < strlen($s); $i++){
        if($s[$i] != $t[$i]){
            $count++;
        }
    }
    echo($count);
?>