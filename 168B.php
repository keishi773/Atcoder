<?php
$length = trim(fgets(STDIN));
$string = trim(fgets(STDIN));
$cnt = strlen($string);
if($cnt > $length){
    $string = substr($string, 0, $length) . "...";
}
echo $string;
?>