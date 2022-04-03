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
  string a, b, c;
  cin >> a >> b >> c;
  // 最初の文字
  char now = a[0];
  // 一文字目削除
  a.erase(0, 1);
  // ゲームのシミュレーション
  while (1)
  {
    if (now == 'a')
    {
      if (a.length() != 0)
      {
        now = a[0];
        a.erase(0, 1);
      }
      else
      {
        cout << "A" << endl;
        return 0;
      }
    }
    if (now == 'b')
    {
      if (b.length() != 0)
      {
        now = b[0];
        b.erase(0, 1);
      }
      else
      {
        cout << "B" << endl;
        return 0;
      }
    }
    if (now == 'c')
    {
      if (c.length() != 0)
      {
        now = c[0];
        c.erase(0, 1);
      }
      else
      {
        cout << "C" << endl;
        return 0;
      }
    }
  }
}