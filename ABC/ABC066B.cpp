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

using namespace std;

int main(int, char**) {
    // 入力
    string S;
    cin >> S;

    int size = S.length();

    for(int i = size; i > 0; i--){
        S.erase(S.length()-1);
        if(S.length() % 2 == 0){
            string a = S.substr(0, S.length()/2);
            string b = S.substr(S.length()/2, S.length());
            if(a == b){
                cout << S.length() << endl;
                return 0;
            }
        }
    }
}
