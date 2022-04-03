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
  int N;
  cin >> N;
  string S;
  cin >> S;
  string ans = "b";
  int cnt = 0;
  for (int i = 1; i <= 100010; i++)
  {
    if (ans.length() >= S.length())
    {
      if (ans != S)
      {
        cout << -1 << endl;
        return 0;
      }
      else
      {
        cout << cnt << endl;
        return 0;
      }
    }
    // 手順を作る
    // 手順❶
    cnt++;
    ans = "a" + ans + "c";
    if (ans == S)
    {
      cout << cnt << endl;
      return 0;
    }

    // 手順2
    cnt++;
    ans = "c" + ans + "a";
    if (ans == S)
    {
      cout << cnt << endl;
      return 0;
    }
    // 手順3
    cnt++;
    ans = "b" + ans + "b";
    if (ans == S)
    {
      cout << cnt << endl;
      return 0;
    }
  }
}