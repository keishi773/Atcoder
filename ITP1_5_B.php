<?php
while ($input = trim(fgets(STDIN))) {
    list($h, $w) = explode(' ', $input);
    if ($h == 0 && $w == 0) {
        break;
    }
    for ($i = 1; $i <= $h; $i++) {
        for ($j = 1; $j <= $w; $j++) {
            if ($i == 1) {
                echo "#";
            } else if ($j == 1 && $j == $w) {
                echo "#";
            } else if ($j >= 2 && $j != $w) {
                echo ".";
            }
        }
        echo "\n";
    }
    echo "\n";
}
