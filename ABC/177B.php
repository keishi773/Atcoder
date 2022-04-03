<?php
// $S = trim(fgets(STDIN));
// $T = trim(fgets(STDIN));
fscanf(STDIN,"%s",$S);
fscanf(STDIN,"%s",$T);
$ans = strlen($T);
for($i = 0; $i < strlen($S) - strlen($T) + 1; $i++){
    $cnt = 0;
    for($j = 0; $j < strlen($T); $j++){
        if($S[$i+$j] != $T[$j]){
            $cnt++;
        }
    }
    $ans = min($ans, $cnt);
}
echo $ans . "\n";
?>