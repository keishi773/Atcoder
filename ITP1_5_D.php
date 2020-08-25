<?php
$filter = function($i){
    if($i%3==0){
        return true;
    }
    for($i; $i>0; $i/=10){
        if($i%10==3){
            return true;
        }
    }
    return false;
};

$n = (int) trim(fgets(STDIN));
echo(" " . implode(" ", array_filter(range(1, $n), $filter)). "\n");
?>