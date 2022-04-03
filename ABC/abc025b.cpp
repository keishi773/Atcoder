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
  int N, A, B;
  cin >> N >> A >> B;
  vector<string> we(N);
  vector<int> d(N);
  for (int i = 0; i < N; i++)
  {
    cin >> we[i] >> d[i];
  }
  int distanceW = 0;
  int distanceE = 0;
  for (int i = 0; i < N; i++)
  {
    if (we[i] == "West")
    {
      if (d[i] < A)
      {
        distanceW += A;
      }
      else if (d[i] >= A && d[i] <= B)
      {
        distanceW += d[i];
      }
      else if (d[i] > B)
      {
        distanceW += B;
      }
    }
    if (we[i] == "East")
    {
      if (d[i] < A)
      {
        distanceE += A;
      }
      else if (d[i] >= A && d[i] <= B)
      {
        distanceE += d[i];
      }
      else if (d[i] > B)
      {
        distanceE += B;
      }
    }
  }
  int ans = abs(distanceW - distanceE);
  if (ans == 0)
  {
    cout << 0 << endl;
    return 0;
  }
  if (distanceW > distanceE)
  {
    cout << "West"
         << " " << abs(distanceW - distanceE) << endl;
  }
  else
  {
    cout << "East"
         << " " << abs(distanceE - distanceW) << endl;
  }
}