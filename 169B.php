<?php
$input = fgets(STDIN);
$multi = array_map('intval', explode(' ',fgets(STDIN)));
$sum = true;
for ($i = 0; $i < $input; $i++) {
    (int)$sum *= $multi[$i];
}
$limit = pow(10,18); 
if($sum>$limit) {
    echo -1;
} else {
    echo (int)$sum;
}