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
    // 入力の作成
    int H,W;
    cin >> H >> W;
    vector<vector<int>> mine(H, vector<int>(W));
    // minesweeper入力
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> mine.at(i).at(j);
        }
    }
    
}
