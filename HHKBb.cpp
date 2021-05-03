// #include <bits/stdc++.h>
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
#include <iomanip>
#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))
#define rep(i, a, b) for (int i = a; i < b; i++)
const long long INF = 1LL << 60;
typedef long long ll;
template <class T>
inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template <class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }
#define all(x) (x).begin(), (x).end()

using namespace std;

// 上下左右の移動用配列
// セットで上、右、下、左の順番
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int dxhalf[2] = {1,0};
int dyhalf[2] = {0,1};

int main(int, char **){
  int H,W;
  cin >> H >> W;
  vector<string> f(H);
  for(int i = 0; i < H; i++){
    cin >> f[i];
  }
  int ans = 0;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(f[i][j] == '#'){
        continue;
      }
      for(int dir = 0; dir < 2; dir++){
        // 下と右方向を探索
        int nh = i + dxhalf[dir];
        int nw = j + dyhalf[dir];
        //場外アウトと移動先が壁の場合はスルー
      if(nh < 0 || nh >= H || nw < 0 || nw >= W){
        continue;
      }
      if(f[nh][nw] == '#'){
        continue;
      }
      ans++;
      }
    }
  }
  
  cout << ans << endl;
}