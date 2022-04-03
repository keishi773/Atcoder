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
//十分に大きな値
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
//C
//最大公約数を求める
ll gcd(ll a, ll b) {
	if (a % b == 0) {
		return (b);
	}
	else {
		return(gcd(b, a % b));
	}
}

//最小公倍数を求める
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	bool ans = true;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	set<int> set;
	for (int i = 0; i < N; i++) {
		set.insert(a[i]);
	}
	if (a.size() != set.size()) {
		ans = false;
	}
	if (ans) cout << "YES" << endl;
	else cout << "NO" << endl;
}