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

const long long MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理、先にやっておく
void nCr_init()
{
  long long MOD = 1000000007;
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++)
  {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

// nCrを計算する (前処理は忘れないように)
long long nCr(int n, int r)
{
  long long MOD = 1000000007;
  if (n < r)
    return 0;
  if (n < 0 || r < 0)
    return 0;
  return fac[n] * (finv[r] * finv[n - r] % MOD) % MOD;
}

int main(int, char **)
{
  long long W, H;
  cin >> W >> H;
  nCr_init();
  cout << nCr(H + W - 2, H - 1) << endl;
}