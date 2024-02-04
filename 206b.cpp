#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n;
  cin >> n;
  ll sum = 0;
  for(ll i = 1; i <= 1000000001; i++) {
        sum += i;
        if(sum >= n) {
            cout << i << endl;
            break;
        }
  }
}