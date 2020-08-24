<?php
while($line = fgets(STDIN)){
    list($a, $op, $b) = explode(' ', $line);
    if($op == '?'){
    break;
    }
    switch($op){
        case '+': $c = $a + $b; break;
        case '-': $c = $a - $b; break;
        case '*': $c = $a * $b; break;
        case '/': $c = (int)($a / $b); break;
    }
        echo $c . "\n";
}
?>