#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
#include <cmath>
#include <limits>
#include<iomanip>
#include<typeinfo>
#include<queue>
#include<map>
//十分に大きな値
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using Pint = pair<int, int>;
using Pll = pair<ll, ll>;
using Graph = vector<vector<int>>;

// knight配列
vector<int> dx = {1, 2, 2, 1, -1, -2, -2, -1};
vector<int> dy = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    bool isOk = false;
    for (int i = 0; i < 8; i++) {
        // 8方向knightの動きをシミュレートする
        int x = x1 + dx.at(i);
        int y = y1 + dy.at(i);

        // それぞれの点からx2,y2までの距離を計算する
        int diff = (x2 - x) * (x2 - x) + (y2 - y) * (y2 - y);
        if (diff == 5) {
            isOk = true;
        }
    }
    if (isOk) cout << "Yes" << endl;
    else cout << "No" << endl;
}
