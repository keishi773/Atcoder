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
  // 順列を列挙して何個めに出てきた配列かを調べればいい。
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; i++)
  {
    cin >> P[i];
  }
  vector<int> Q(N);
  for (int i = 0; i < N; i++)
  {
    cin >> Q[i];
  }
  //順列用の配列を作る
  vector<int> one_permutation_case;
  for (int i = 1; i <= N; i++)
  {
    one_permutation_case.emplace_back(i);
  }
  // 何通りか。
  int case_number = 1;
  int a = 0;
  int b = 0;
  vector<int> e(N);
  do
  {
    e = one_permutation_case;
    if (equal(P.begin(), P.end(), e.begin()))
    {
      a = case_number;
    }
    if (equal(Q.begin(), Q.end(), e.begin()))
    {
      b = case_number;
    }
    case_number++;
  } while (next_permutation(one_permutation_case.begin(), one_permutation_case.end()));
  cout << abs(a - b) << endl;
}