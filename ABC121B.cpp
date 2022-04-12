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
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int sum = 0;
		sum += c;
		for (int j = 0; j < m; j++) {
			int a;
			cin >> a;
			sum += a * b[j];
		}
		if (sum > 0) {
			cnt++;
		}
	}
	cout << cnt << endl;
}
