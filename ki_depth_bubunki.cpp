#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

// 木上の探索
vector<int> depth;
vector<int> subtree_size;
// 深さを調べる時は引数に深さの引数を足す。
// pは親、dはdepthで深さ
void dfs(const Graph &G, int v, int p, int d)
{
  depth[v] = d;
  for (auto nv : G[v])
  {
    // 親だったらだめ。
    if (nv == p)
      continue;
    dfs(G, nv, v, d + 1);
  }

  //帰りがけ時に、部分木のサイズを求める。
  subtree_size[v] = 1; //自分自身
  for (auto c : G[v])
  {
    if (c == p)
      continue;
    // Vを根とする部分木のサイズはVのそれぞれ子ノード部分木のサイズ総和+1
    subtree_size[v] += subtree_size[c];
  }
}

int main()
{
  // 木の辺の数はN-1(頂点数-1)
  int N;
  cin >> N;

  //グラフ入力受け取り、
  Graph G;
  for (int i = 0; i < N - 1; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  //探索
  int root = 0; //仮に頂点0を根とする
  depth.assign(N, 0);
  subtree_size.assign(N, 0);
  dfs(G, root, -1, 0);
  // 結果
  for (int v = 0; v < N; v++)
  {
    cout << v << "depth = " << depth[v] << ", subtree_size =" << subtree_size[v] << endl;
  }
}