<?php
while ($input = trim(fgets(STDIN))) {
    list($h, $w) = explode(' ', $input);
    if ($h == 0 && $w == 0) {
        break;
    }
    for ($i = 0; $i < $h; $i++) {
        for ($j = 0; $j < $w; $j++) {
            if(($i + $j)%2 == 0){
                echo "." . "#";
            }else if(($i + $j)% 2 != 0){
                echo "#" . ".";
            }
        }
        echo "\n";
    }
    echo "\n";
}
?>