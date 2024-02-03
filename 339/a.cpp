#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  cin >> s;
  int len = s.size();
//   bool flg = false;
  int pos = 0;
//   string ans = "";
  for(int i = 0; i < len; i++) {
    // if(flg) {
    //     ans += s[i];
    // }
    // if(s[i] == '.') {
    //     flg = true;
    // }atcoder.jp
    if(s[i] == '.') {
        pos = i;
    }
  }
//   cout << pos << endl;
  for(int i = pos + 1; i < len; i++) {
    cout << s[i];
  }
  cout << endl;
}