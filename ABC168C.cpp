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
#define P pair<int, int>
#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))
#define rep(i, a, b) for (int i = a; i < b; i++)
void chmin(int &a, int b)
{
  if (a > b)
    a = b;
}
void chmax(int &a, int b)
{
  if (a < b)
    a = b;
}
#define all(x) (x).begin(), (x).end()

using namespace std;

// 上下左右の移動用配列
// セットで上、右、下、左の順番
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

bool is_prime(const unsigned n)
{
  switch (n)
  {
  case 0: // fall-through
  case 1:
    return false;
  } // n > 1 が保証された

  // n より小さい数で n を割って余りを調べる
  // 素数ならば自分より小さい数(1以外)では割り切れない
  for (unsigned i = 2; i < n; ++i)
  {
    if (n % i == 0)
      return false;
  }

  return true;
}
// cos((30 * H + 0.5 * M)* 3.14159265358979 / 180.0);
// ２点間の距離を求める関数
double getDistance(double x, double y, double x2, double y2)
{
  double distance = sqrt((x2 - x) * (x2 - x) + (y2 - y) * (y2 - y));

  return (double)distance;
}

int main(int, char **)
{
  double A, B, H, M;
  cin >> A >> B >> H >> M;
  double x1 = A * cos((30.0 * H + 0.5 * M) * 3.14159265358979 / 180.0);
  double y1 = A * sin((30.0 * H + 0.5 * M) * 3.14159265358979 / 180.0);
  double x2 = B * cos((6.0 * M) * 3.14159265358979 / 180.0);
  double y2 = B * sin(((6.0 * M)) * 3.14159265358979 / 180.0);
  double ans = getDistance(x1, y1, x2, y2);
  cout << fixed << setprecision(10) << ans << endl;
}