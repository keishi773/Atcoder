<?php
$input = explode(" ", fgets(STDIN));
$a = $input[0] / $input[1];
$b = $input[0] % $input[1];
$c = $input[0] / $input[1];

printf("%d %d %.5f\n", $a, $b, $c);
?>