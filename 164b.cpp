#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  while(true) {
     // 高橋君攻撃
     c -= b;
     if(c <= 0) {
        cout << "Yes" << endl;
        break;
     }
    //  青木君
     a -= d;
     if(a <= 0) {
        cout << "No" << endl;
        break;
     }
  }
}