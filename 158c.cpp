#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  double a,b;
  cin >> a >> b;
  // 1 ~ 100円まで 8%なので税抜き価格は大体100001 以下
  //   double ans = 0;
  for(double i = 1; i <= 100001; i++) {
    if(floor(i * 0.08) == a && floor(i * 0.1) == b) {
        cout << i << endl;
        return 0;
    }
  }
  cout << -1 << endl;
}
