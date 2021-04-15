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
    vector<string> B(N);
    for(int i = 0; i < N; i++) cin >> B[i];
    int max = 0;
    int cnt = 0;
    string ans;
    for(int i = 0; i < N; i++){
        cnt = 0;
        for(int j = 0; j < N; j++){
            if(B[i] == B[j]){
                cnt++;
            }
        }
        if(cnt > max){
            max = cnt;
            ans = B[i];
        }
    }
    cout << ans << endl;
}