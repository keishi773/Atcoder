#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int>>;

//　木上の探索
//　v: 現在探索中の頂点
void dfs(const Graph &G, int v, int p)
{
  for (auto nv : G[v])
  {
    // nvが親だったらだめ。
    if (nv == p)
      continue;
    // vがたら谷nvの親になる。
    dfs(G, nv, v);
  }
}

int main()
{
  //　頂点数,辺は木だとN-1で確定
  int N;
  cin >> N;

  Graph G(N);
  for (int i = 0; i < N - 1; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // 探索
  int root = 0;
  dfs(G, root, -1);
}