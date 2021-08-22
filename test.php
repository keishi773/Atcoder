<?php
$url = 'https://blog.d-a.co.jp/staff/';
$url2 = 'https://blog.d-a.co.jp/staff/?s=%E3%82%AC%E3%83%BC%E3%83%87%E3%83%B3%E3%83%97%E3%83%A9%E3%82%B9';
$url3 = 'https://blog.d-a.co.jp/staff/?s=%E3%80%90%E3%82%AC%E3%83%BC%E3%83%87%E3%83%B3%E3%83%97%E3%83%A9%E3%82%B9';

ini_set('xdebug.var_display_max_children', -1);
ini_set('xdebug.var_display_max_data', -1);
ini_set('xdebug.var_display_max_depth', -1);

// URLを作成する処理が必要->基本的には"【ガーデンプラス "パラメーターが確実に必要。

// オーソドックスなスクレイピング
// xpath
$dom = new DOMDocument();
@$dom->loadHTMLFile($url3);
$xpath = new DOMXPath($dom);




// GETパラメーターで取得する内容に?p=が入ってるかどうかで処理を分岐する。
// pageパラメーターでページを取得する。
// タイトル用の配列取得
$aryColumnTitles = SearchTitle($xpath);
// 属性値を取得するためにarticleタグごとスクレイピングする。
// タグごと取得してa属性の中身だけ取得するのと、属性値の値だけ?p=24461部分だけ抜き取る。
$nodeId = $xpath->query("/html/body/div[1]/div[2]/div/main/div[1]/article[1]/div/h2")->item(0);
$tagId = getInnerHtml($nodeId);
$patternC = '@/<a href="https://blog.d-a.co.jp/staff/?p=([^"]*)"@';
$patternP = '@<a href="https://blog.d-a.co.jp/staff/(.*?)"@';
$patternZ = '/<a href="([^"]*)"/';
preg_match($patternP, $tagId, $p);
var_dump($p[1]);

// タイトル下の見出し記事取得
// $aryColumnDetails = SearchDetails($xpath);


// 必要なものはリンク用のクエリページパラメーター
// 属性の値を抜き出す必要がある。
// var_dump($aryColumnTitles);
// var_dump($aryColumnDetails);
// これで詳細ページの実装が出来る。

// 詳細ページの記事 抜き出す処理
// タイトルはそのまま流用できる。
$Uri = 'https://blog.d-a.co.jp/staff/?p=24461';
$detailDom = new DOMDocument();
@$detailDom->loadHTMLFile($Uri);
$xpath2 = new DOMXPath($detailDom);
$node2 = $xpath2->query('/html/body/div[1]/div[2]/div/main/article/div');
$ab = $node2->item(0);
$detailHtml = getInnerHtml($ab);
$dhtml = delSection($detailHtml);
// var_dump($dhtml);

// 一覧ページのタイトル取得function化
function SearchTitle($xpath){
    $aryTitle = array();
    // DAブログの一覧表示が5記事なので5つ取得する
    for($i=1;$i<=5;$i++){
        $node = $xpath->query("/html/body/div[1]/div[2]/div/main/div[1]/article[$i]/div/h2/a");
        $value = $node->item(0);
        $aryTitle[] = $value->nodeValue;
    }
    return $aryTitle;
}

// 一覧ページのタイトル下の見出し記事取得function
function SearchDetails($xpath) {
    $aryDetails = array();
    // DAブログの一覧表示が5記事なので5つ取得する
    for($i=1;$i<=5;$i++){
        $node = $xpath->query("/html/body/div[1]/div[2]/div/main/div[1]/article[$i]/div/div[2]")->item(0);
        // HTMLタグが必要なので取得する
        $defHtml = getInnerHtml($node);
        $bodyTxt = delLink($defHtml);
        $aryDetails[] = $bodyTxt;
    }
    return $aryDetails;
}

// 見出し記事の続きリンクを削除する処理
function delLink($defHtml) {
    // 続き…を消す。    
    $pattern = '@<a.*?</a>@';
    $txt = preg_replace($pattern, "", $defHtml);
    return $txt;
}

// 余計なsectionがある場合は消す。
// section下が消せない…。
function delSection($detailHtml) {
    $pattern = '@<section.*?</section>@';
    // 余計な空白を削除
    $txta = str_replace(array("\r\n", "\r", "\n"), '', $detailHtml);
    $txt = preg_replace($pattern, "", $txta);
    return $txt;
}

/**
 * HTMLとして取り出す。
 */
function getInnerHtml($node){
    $children = $node->childNodes;
    $html = '';
    foreach($children as $child){
        $html .= $node->ownerDocument->saveHTML($child);
    }
    return $html;
}

// $value = $node->item(0);
// ini_set('xdebug.var_display_max_children', -1);
// ini_set('xdebug.var_display_max_data', -1);
// ini_set('xdebug.var_display_max_depth', -1);
// var_dump($nodeA->nodeValue);
// $entries[] = [
//     'contents' => $xpath->evaluate($node)
// ];
// $value = $node->item(0);
// var_dump($value->nodeValue);
// exit;

// タグ付きで取得する
// $dom = new DOMDocument();
// @$dom->loadHTML($url3);
// $xpath = new DOMXpath($dom);
// $node = $xpath->query('/html/body/div[1]/div[2]/div/main/div[1]/article[1]/div/h2/a');
// $nodeHTML = getInnerHtml($node);
// var_dump($nodeHTML);



// htmlで取得してきてるからそのHTMLをパースして最後と最後から2番目の<p>タグだけを除去する。


?>
<html>
    <head>
    </head>
    <body>
        <?php echo $dhtml ?>
    </body>
</html>


