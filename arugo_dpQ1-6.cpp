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

// knight配列
vector<int> dx = {1, 2, 2, 1, -1, -2, -2, -1};
vector<int> dy = {2, 1, -1, -2, -2, -1, 1, 2};

vector<vector<int>> func(int n, int l, int r) {
	if (l > r) return{};
	if (n == 0) return { {} };
	vector<vector<int>> ans;
	// n-1の要素としてlを選んだ場合
	for (auto x : func(n - 1, l, r)) {
		vector<int> to = { l };
		to.insert(to.end(), x.begin(), x.end());
		ans.push_back(to);
	}
	// lを選ばない場合
	for (auto x : func(n, l + 1, r)) {
		ans.push_back(x);
	}
	return ans;
}

const int iINF = 10000000;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> D(m);
	for (int i = 0; i < m; i++) {
		cin >> D[i];
	}
	// 動的計画法の舞台となる配列
	vector<bool> dp(n + 1, false);
	// マス0にはじめから到達している
	dp[0] = true;

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			if (i - D[j] >= 0 && dp[i - D[j]]) {
				dp[i] = true;
			}
		}
	}
	if (dp[n]) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}

