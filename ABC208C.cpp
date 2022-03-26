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

int main() {
	ll N, K;
	cin >> N >> K;
	vector<ll> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	//国民番号を昇順に
	vector<ll> ids(N);
	iota(ids.begin(), ids.end(), 0);
	sort(ids.begin(), ids.end(), [&](int i, int j){
		return A[i] < A[j];
	});
	vector<ll> ans(N, K / N);
	for (int i = 0; i < K % N; i++) {
		ans[ids[i]]++;
	}
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << endl;
	}
}