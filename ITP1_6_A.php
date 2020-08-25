<?php
 $input = (int)trim(fgets(STDIN));
 $i_array = implode(" " . (int)trim(fgets(STDIN)));
 $i_array = array_reverse($i_array);
 echo implode(" ", $i_array) . "\n";
?>