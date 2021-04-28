#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;

int main()
{
  // 頂点数と辺数
  int N, M;
  cin >> N >> M;

  // グラフ
  Graph G(N);
  for (int i = 0; i < M; i++)
  {
    int a, b;
    cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  // BFSのデータ構造準備
  vector<int> dist(N, -1);
  queue<int> que;

  // 初期条件
  dist[0] = 0;
  que.push(0);

  // BFS開始(キューが空になるまで)
  while (!que.empty())
  {
    int v = que.front();
    que.pop();

    // vから辿れる頂点を全て調べる
    for (int nv : G[v])
    {
      // すでに発見済みの頂点は探索しない
      if (dist[nv] != -1)
      {
        continue;
      }

      //新たな白色頂点 nvについて距離情報を更新してキューに追加する
      dist[nv] = dist[v] + 1;
      que.push(nv);
    }
  }
  for (int v = 0; v < N; v++)
  {
    cout << v << ": " << dist[v] << endl;
  }
}
