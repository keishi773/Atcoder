<?php
$i = fgets(STDIN);
$circle = ($i * $i) * M_PI;
$en = (2 * $i) * M_PI;

printf("%.5f %.5f\n", $circle, $en);
// printf("%d %d\n", $circle, $en);
?>