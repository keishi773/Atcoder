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
#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))
#define rep(i, a, b) for (int i = a; i < b; i++)
const long long INF = 1LL << 60;
typedef long long ll;
template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
#define all(x) (x).begin(), (x).end()

using namespace std;

// 上下左右の移動用配列
// セットで上、右、下、左の順番
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(int, char **)
{
  ll K, N;
  cin >> K >> N;
  vector<ll> A(N);
  rep(i, 0, N) cin >> A[i];
  sort(A.begin(), A.end());
  vector<ll> e(N);
  for (ll i = 0; i < N - 1; i++)
  {
    e[i] = abs(A[i] - A[i + 1]);
  }
  e[N - 1] = K - A[N - 1] + A[0];
  ll distance = e[0];
  for (ll i : e)
  {
    distance = max(i, distance);
  }
  cout << K - distance << endl;
}