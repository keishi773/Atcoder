#include <iostream>
#include <vector>
using namespace std;

//グラフ構造
using Graph = vector<vector<int>>;

//深さ優先探索
vector<bool> seen;
void dfs(const Graph &G, int v)
{
  seen[v] = true;
  for (auto next_v : G[v])
  {
    if (seen[next_v])
      continue;
    dfs(G, next_v);
  }
}

int main()
{
  int N, M;
  cin >> N >> M;

  //グラフの入力受け取り
  Graph G;
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  //全頂点が訪問済みになるまで探索
  int count = 0;
  seen.assign(N, false);
  for (int v = 0; v < N; v++)
  {
    if (seen[v])
      continue;
    dfs(G, v);
    count++;
  }
  cout << count << endl;
}