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
  for(int i = 1; i <= n; i++) {
    if(i % 15  == 0) {
        // cout << "FizzBuzz" << endl;
    } else if(i % 3 == 0) {
        // cout << "Fizz" << endl;
    } else if(i % 5 == 0) {
        // cout << "Buzz" << endl;
    } else {
        sum += i;
    }
  }
  cout << sum << endl;
}