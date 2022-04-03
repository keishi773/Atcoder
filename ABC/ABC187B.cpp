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
#include <numeric>
#define P pair<int,int>
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
 
using namespace std;

int main(int, char**) {
    int N;
    cin >> N;
    vector<P> T(N);
    for(int i = 0; i < N; i++){
        cin >> T[i].first >> T[i].second;
    }
    // 順番にy座標が-1のものが何個あるか調べる。
    int ans = 0;
    for(int i = 0; i <= N; i++){
        for(int j = i+1; j < N; j++){
            int x1 = T[i].first;
            int y1 = T[i].second;
            int x2 = T[j].first;
            int y2 = T[j].second;
            // 絶対値の変形
            if(abs(y2-y1) <= abs(x2-x1)){
                ans++;
            }
        }
    }
    cout << ans << endl;
}