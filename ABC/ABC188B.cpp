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

// 回文判定
bool isPalindrome(string s){
    string rs = s;
    reverse(rs.begin(), rs.end());
    bool isp = false;
    if(rs == s){
        isp = true;
    }
    return isp;
}

int main(int, char**) {
    
    int N;
    cin >> N;
    queue<int> a;
    queue<int> winner;
    rep(i,0,N*N){
        int b;
        cin >> b;
        a.push(b);
    } 
    int ans = 0;
    // N回戦わせる
    for(int i = 0; i < a.size()/2; i++){
        // 対戦者
        int a1,a2;
        a1 = a.front();
        a.pop();
        a2 = a.front();
        a.pop();
        
        // 終わりがやってくる。
        if(i == N){
            ans = min(a1,a2);
        }else{
            // 対戦
            int win = max(a1,a2);
            winner.push(win);
        }
    }
    cout << ans << endl;
}