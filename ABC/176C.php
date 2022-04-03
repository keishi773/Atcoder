<?php
    $n = trim(fgets(STDIN));
    $arr = explode(" ", trim(fgets(STDIN)));
    $maxB = 0;
    $ans = 0;
    for($i = 0; $i < $n; $i++){
        $maxB = max($maxB, $arr[$i]);
        $ans += $maxB - $arr[$i];
    }
    echo $ans . "\n";
?>
