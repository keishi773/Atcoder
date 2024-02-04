#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  ll n,k;
  cin >> n >> k;
  for(int i = 1; i <= k; i++) {
        if(n % 200 == 0) {
            n /= 200;
        } else {
            string a = to_string(n);
            a += "200";
            n = stoll(a);
        }
    }
    cout << n << endl;
}