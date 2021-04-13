#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cmath>
#include <limits>
using namespace std;

int main(int, char**) {
    
    // 縦と横の入力
    int h, w;
    cin >> h >> w;

    // 盤面の宣言
    string board[50];

    // 入力
    for(int i = 0; i < h; i++){
        cin >> board[i];
    }

    // 8方向の埋め込み
    const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
    const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};

    // 判定
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(board[i][j] == '#') continue;

            //　爆弾カウント(8方向)
            int cnt = 0;
            for(int d = 0; d < 8; d++){
                const int ni = i + dy[d];
                const int nj = j + dx[d];

                if(ni < 0 or h <= ni) continue;
                if(nj < 0 or w <= nj) continue;
                if(board[ni][nj] == '#') cnt++;
            }
            board[i][j] = char(cnt + '0');
        }
    }
    // 出力
    for(int i = 0; i < h; i++) cout << board[i] << endl;
}
