<?php
$i = fgets(STDIN);
$i_array = explode(" ", trim(fgets(STDIN)));
echo (int)min($i_array) . " " . (int)max($i_array) . " " . (int)array_sum($i_array) . "\n";
?>