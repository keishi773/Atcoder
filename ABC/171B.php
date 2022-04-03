<?php
    list($n,$b) = explode(" ", trim(fgets(STDIN)));
    $arr = explode(" ", trim(fgets(STDIN)));
    $sarr = sort($arr);
    $ans = 0;
    for($i = 0; $i < $b; $i++){
        $ans += $sarr[$i];
    }
    echo $ans . "\n";
?>
