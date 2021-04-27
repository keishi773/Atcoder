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

// 深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v)
{
  // vを訪問済みにする。
  seen[v] = true;

  // vからいける各頂点　next_v
  for (auto next_v : G[v])
  {
    // next_vが訪問済み(true)なら
    if (seen[next_v])
      continue;
    dfs(G, next_v);
  }
}

int main(int, char **)
{
  //　頂点sからtにたどり着けるか。
  int N, M, s, t;
  cin >> N >> M >> s >> t;
  // グラフ入力受け取り(無向グラフ)
  Graph G;
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    // たどり着けるかどうかは有向フラグだから
    // G[b].push_back(a);
  }
  // 全頂点を「未訪問に初期化」
  seen.assign(N, false);
  //　頂点0をスタートとした探索
  dfs(G, s);

  // tにたどり着けるかどうか
  if (seen[t])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}