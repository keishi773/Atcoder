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


vector<int> a = { 1, 14, 32, 51, 51, 51, 243, 419, 750, 910 };


// 式の左辺を計算する関数f(x)を用意する
double f(double x) {
    return x * (x * (x + 1) + 2) + 3;
}

int main() {
    double N;
    cin >> N;

    // 二分探索
    double left = 0, right = 100;
    while (right - left > 1e-4) {
        double mid = (left + right) / 2;
        if (f(mid) < N) {
            left = mid;
        }
        else {
            right = mid;
        }
    }
    double ans = left;
    cout << ans << endl;
    return 0;
}
