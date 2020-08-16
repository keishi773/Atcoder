<?php
$ac = 0;
$wa = 0;
$tle = 0;
$re = 0;
 // 入力を受け取る
while($input = fgets(STDIN)){
    if(preg_match("/AC$/", $input)){
        $ac++;
    }
    if(preg_match("/WA$/", $input)){
        $wa++;
    }
    if(preg_match("/TLE$/", $input)){
        $tle++;
    }
    if(preg_match("/RE$/", $input)){
        $re++;
    }
}
echo "AC x " . $ac . "\n";
echo "WA x " . $wa . "\n";
echo "TLE x " . $tle . "\n";
echo "RE x " . $re . "\n";
?>