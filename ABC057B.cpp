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
#include <stdio.h>
#include <string.h>
#define P pair<int,int>

using namespace std;

int main(int, char**) {
    // 入力の作成
    //　学生とチェックポイントの数
    int N, M;
    cin >> N >> M;
    // 学生の座標
    vector<P> g(N+1);
    for(int i = 1; i <= N; i++){
        cin >> g[i].first >> g[i].second;
    }
    // チェックポイントの座標
    vector<P> c(M+1);
    for(int i = 1; i <= M; i++){
        cin >> c[i].first >> c[i].second;
    }
    // 学生とチェックポイントの絶対値を求める
    for(int i = 1; i <= N; i++){
        int sum = 1e+9;
        int ans;
        for(int j = 1; j <= M; j++){
            int MK = abs(g[i].first - c[j].first) + abs(g[i].second - c[j].second);
            // 
            if(MK < sum){
                sum = MK;
                ans = j;
            }
        }
        cout << ans << endl;
    }

}
