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
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	vector<int> T(n, iINF);
	T[0] = 0;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i - j >= 0) {
				T[i] = min(T[i], T[i - j] + A[i] * j);
			}
		}
	}
	cout << T[n - 1] << endl;
}

