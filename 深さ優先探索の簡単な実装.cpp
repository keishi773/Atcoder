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
// const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

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
//回文かどうか調べる
bool palindrome(string s) {
	string rs(s.rbegin(), s.rend());
	return s == rs;
}
// スケジューリング問題で使う
using Interval = pair<ll, ll>;
// 区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval &b) {
	return a.second < b.second;
}
// 再帰関数を用いる深さ優先探索実装の基本形
vector<bool> seen;
void dfs(const Graph& G, int v) {
	seen[v] = true; // vを訪問済みにする

	// vから行ける各頂点next_vについて
	for (auto next_v : G[v]) {
		if (seen[next_v]) continue; // next_vが探索済ならば探索しない
		dfs(G, next_v); //再帰的に探索
	}
}

int main() {
	// 頂点数と辺数
	int N, M;
	cin >> N >> M;

	// グラフ入力受取(おこでは有向グラフを想定)
	Graph G(N);
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		G[a].push_back(b);
	}

	// 探索
	seen.assign(N, false);
	for (int v = 0; v < N; v++) {
		if (seen[v]) continue;
		dfs(G, v);
	}
}