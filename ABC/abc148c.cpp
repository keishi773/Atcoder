#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <cassert>
#include <list>
#include <numeric>
#include <set>
#include <cmath>
#include <limits>
#include <iomanip>
#include <typeinfo>
#include <queue>
#include <map>
//十分に大きな値
const long long INF = 1LL << 60;
const int iINF = 10000000;
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

// 最大公約数
ll gcd(ll a, ll b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}
int main() {
	ll a, b;
	cin >> a >> b;
	cout << lcm(a, b) << endl;
}
