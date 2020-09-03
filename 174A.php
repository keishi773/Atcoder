<?php
$count = 0;
$i = 0;
list($L,$R,$d) = sscanf(fgets(STDIN), "%d %d %d");
for($i = $L; $i <= $R; $i++){
    if($i % $d == 0){
        $count++;
    }
}
echo $count;
?>