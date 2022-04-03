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
    // 入力
    int N;
    cin >> N;
    // 問題解く時間
    vector<int> T(N);
    for(int i = 0; i < N; i++) cin >> T[i];
    // ドリンクの種類
    int  M;
    cin >> M;
    // 1本だけ飲む
    vector<P> d(M);
    for(int i = 0; i < M; i++){
        int a,b;
        cin >> a >> b; 
        a--;
        d.at(i) = {a, b};
    }
    // 時間の総和
    // int sum = accumulate(T.begin(), T.end(), 0);
    // int ans = 0;
    for(const auto& [a, b] : d){
        auto tmp = T;
        tmp.at(a) = b;
        cout << accumulate(tmp.begin(), tmp.end(), 0L) << endl;
    }
}
