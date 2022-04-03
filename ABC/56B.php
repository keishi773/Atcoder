<?php
fscanf(STDIN, "%d%d%d", $W, $a, $b);
$length = $a-$b;
$ans = $W - abs($length);
if($ans > 0){
    echo $ans;
}else{
    echo 0;
}
?>
