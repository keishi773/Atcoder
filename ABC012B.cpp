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
    // 秒数
    int N;
    cin >> N;
    string time;
    string minute;
    string second;
    int t,m,s;
    t = N / 3600;
    m = N / 60 % 60;
    s = N % 60;
    if(t <= 9){
        time = '0' + to_string(t); 
    }else{
        time = to_string(t);
    }
    if(m <= 9){
        minute = '0' + to_string(m); 
    }else{
        minute = to_string(m);
    }
    if(s <= 9){
        second = '0' + to_string(s); 
    }else{
        second = to_string(s);
    }
    // cout  << time << minute << second << endl;
    cout  << time << ':' << minute << ':' << second << endl;
}