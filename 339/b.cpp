#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

enum Direction {
  UP,
  RIGHT,
  DOWN,
  LEFT
};

void turnRight(Direction &dir) {
  dir = static_cast<Direction>((dir + 1) % 4);
}

void turnLeft(Direction &dir) {
  dir = static_cast<Direction>((dir + 3) % 4);
}

int main() {
  int H, W, N;
  cin >> H >> W >> N;

  vector<vector<bool>> grid(H, vector<bool>(W, false));
  // 高橋君の位置
  int x = 0, y = 0;
  Direction dir = UP;

  for (int move = 0; move < N; ++move) {
    // 現在のマスを塗り替える
    grid[x][y] = !grid[x][y];

    // 方向転換
    if (grid[x][y]) { // 黒の場合
      turnRight(dir);
    } else { // 白の場合
      turnLeft(dir);
    }

    // 移動
    switch (dir) {
      case UP:
        x = (x - 1 + H) % H;
        break;
      case RIGHT:
        y = (y + 1) % W;
        break;
      case DOWN:
        x = (x + 1) % H;
        break;
      case LEFT:
        y = (y - 1 + W) % W;
        break;
    }
  }

  // グリッドの状態を出力
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      cout << (grid[i][j] ? '#' : '.');
    }
    cout << '\n';
  }

  return 0;
}