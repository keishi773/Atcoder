<?php
    $a = "#";
    while($line = fgets(STDIN)){
        list($h, $w) = explode(" ", $line);
        if($h == 0 && $w == 0){
            break;
        }
        for($i = 1; $i <= $h; $i++){
            for($j = 1; $j <= $w; $j++){
                echo "#";
            }
            echo "\n";
        }
        echo "\n";
    }
?>