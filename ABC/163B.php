<?php
fscanf(STDIN, '%d%d', $N, $M);
$do = explode(' ', trim(fgets(STDIN)));
$sum = array_sum($do);
if($sum <= $N){
    echo ($N - $sum) . "\n";
}else{
    echo -1 . "\n";
}
?>