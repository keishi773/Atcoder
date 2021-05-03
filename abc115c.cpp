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
template <class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template <class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }
#define all(x) (x).begin(), (x).end()

using namespace std;

// 上下左右の移動用配列
// セットで上、右、下、左の順番
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(int, char **){
  int N,K;
  cin >> N >> K;
  vector<int> h(N);
  for(int i = 0; i < N; i++){
    cin >> h[i];
  }
  sort(h.begin(),h.end());
  int ans = 1e9;
  for(int i = 0; i < N-K+1; i++){
    ans = min(ans,h[i+K-1] - h[i]);
  }
  cout << ans << endl;
  return 0;
}