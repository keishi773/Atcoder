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
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    vector<int> B(N);
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    // 内積をして足すシミュレーション
    // A1 * B1 + A2 * B2.... + AN * BN = 0かどうか判定する
    bool flg = false;
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += A[i] * B[i];
    }
    if(sum == 0){
        flg = true;
    }
    if(flg){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}