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
    int N;
    cin >> N;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(i * j == N){
                cout << "Yes" << endl;
                return 0;         
            }
        }
    }
    cout << "No" << endl;
}
