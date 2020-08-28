<?php
fscanf(STDIN, "%d%d%d%d", $a, $b, $c, $d);
$count = 1;
while (($a > 0) && ($c > 0)) {
    //割り切れたら青木攻撃
    if ($count % 2 == 0) {
        $a -= $d;
    } else {
        //割り切れなかったら高橋攻撃
        $c -= $b;
    }
    $count++;
}
if ($count % 2 == 0) {
    echo "Yes" . "\n";
} else {
    echo "No" . "\n";
}
