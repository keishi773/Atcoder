<?php
$input = str_split(fgets(STDIN));
$sum = array_sum($input);
if($sum % 9 == 0){
    echo "Yes" . "\n";
}else{
    echo "No" . "\n";
}
?>
