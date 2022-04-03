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
    int N;
    cin >> N;
    string S;
    cin >> S;
    int ans = 0;
    int x = 0;
    for(int i = 0; i < N; i++){
        if(S.at(i) == 'I'){
            x++;
        }else if(S.at(i) == 'D'){
            x--;
        }
        if(x >= ans){
            ans = x;
        }
    }
    cout << ans << endl;
}
