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
using pll = pair<long long, long long>;
using Graph = vector<vector<int>>;


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

// nの約数を求める
vector<long long> divisor(long long n) {
	vector<long long> ret;
	for (long long i = 1; i <= n; i++) {
		if (n % i == 0) {
			ret.push_back(n / i);
		}
	}
	return ret;
}

// 上下左右への移動配列
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };

// 国の数
bool seen[2000];
Graph G;

// xの桁数を求める。

unsigned GetDigit(unsigned num) {
	return to_string(num).length();
}


void dfs(int x) {
	if (seen[x]) return;
	seen[x] = true;
	for (auto xx : G[x]) {
		dfs(xx);
	}
}

int main() {
	int N;
	cin >> N;
	vector<ll> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for (int i = 0; i < N; i++) {
		while (a[i] % 2 == 0) {
			a[i] /= 2;
			ans++;
		}
	}
	cout << ans << endl;
}