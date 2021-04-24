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
  string s;
  cin >> s;
  int A = s[0] - '0';
  int B = s[1] - '0';
  int C = s[2] - '0';
  int D = s[3] - '0';
  int N = s.length();
  // 数字配列を作る
  vector<int> a(N);
  rep(i, 0, N)
  {
    // 数字にしたものを配列に入れる。
    a[i] = s[i] - '0';
  }

  for (int x = 0; x < 8; x++)
  {
    // int sum = 0;
    int sum = a[0];
    string ans;
    ans += (char)('0' + a[0]);
    for (int i = 0; i < 3; i++)
    {
      if (x & (1 << i))
      {
        sum += a[i + 1];
        ans += '+';
        ans += (char)('0' + a[i + 1]);
      }
      else
      {
        sum -= a[i + 1];
        ans += '-';
        ans += (char)('0' + a[i + 1]);
      }
    }
    if (sum == 7)
    {
      cout << ans << "=7" << endl;
      return 0;
    }
  }
}