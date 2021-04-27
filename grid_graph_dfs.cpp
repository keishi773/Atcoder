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

using Graph = vector<vector<int>>;

int H, W;
vector<string> field;

// 探索
bool seen[510][510]; //seen[h][w]が検知済み
void dfs(int h, int w)
{
  //　対象グリッドを探索済みとする。
  seen[h][w] = true;

  //　四方向を探索
  for (int dir = 0; dir < 4; dir++)
  {
    int nh = h + dx[dir];
    int nw = w + dy[dir];

    //場外アウトと移動先が壁の場合はスルー
    if (nh < 0 || nh >= H || nw < 0 || nw >= H)
    {
      continue;
    }
    if (field[nh][nw] == '#')
    {
      continue;
    }

    //異動先が探索済みの場合
    if (seen[nh][nw])
    {
      continue;
    }
    // 再帰的に探索
    dfs(nh, nw);
  }
}

int main(int, char **)
{
  //入力受け取り
  cin >> H >> W;
  field.resize(H);
  for (int h = 0; h < H; h++)
  {
    cin >> field[h];
  }

  // sとgのマスを特定する
  int sh, sw, gh, gw;
  for (int h = 0; h < H; h++)
  {
    for (int w = 0; w < W; w++)
    {
      if (field[h][w] == 's')
      {
        sh = h;
        sw = w;
      }
      if (field[h][w] == 'g')
      {
        gh = h;
        gw = w;
      }
    }
    // 探索開始
    memset(seen, 0, sizeof(seen)); // seen全体をfalseに初期化
    dfs(sh, sw);

    //結果
    if (seen[gh][gw])
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}