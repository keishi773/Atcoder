<?php
fscanf(STDIN, "%d%d%d%d", $a,$b,$c,$k);
$ans = 0;
$aa = min($a, $k);
$ans += $aa;
$k -= $a;

$bb = min($b,$k);
$k -= $bb;

$cc = min($c, $k);
$ans -= $cc;
$k -= $cc;

echo $ans;
?>