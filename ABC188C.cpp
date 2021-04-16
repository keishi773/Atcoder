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
#define rep(i,a,b) for(int i=a;i<b;i++)
void chmin(int& a, int b){ if(a > b) a = b; }
void chmax(int& a, int b){ if(a < b) a = b; }
#define all(x) (x).begin(),(x).end()
 
using namespace std;

// 上下左右の移動用配列
// セットで上、右、下、左の順番
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int main(int, char**) {
    int n;
    cin >> n;
    // 2のべき乗
    int n2 = 1<<n;
    vector<int> a(n2);
    rep(i,0,n2) cin >> a[i];
    map<int,int> mp;
    rep(i,0,n2) mp[a[i]] = i+1;
    // 配列のサイズが2になるまで戦う。
    while(a.size() > 2){
        vector<int> na;
        // 2個ずつ見ていく。
        for(int i = 0; i < a.size(); i+= 2){
           na.push_back(max(a[i],a[i+1])); 
        }
        swap(a,na);
    }
    int ans = min(a[0],a[1]);
    cout << mp[ans] << endl;
}