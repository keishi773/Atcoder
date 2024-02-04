#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  double n;
  cin >> n;
  double sum = 100;
//   double year = 0;
//   while(sum < n) {
//      sum += sum * 0.01;
//      year++;
//   }
  for(int i = 1; i <= 1000000009; i++) {
    double tmp  = sum * 0.01;
    sum += floor(tmp);
    if(sum >= n) {
        cout << i << endl;
        break;
    }
  }
}