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

// func(i,j)を記録する
vector<vector<int>> memo;
vector<int> A;

// 再帰関数(Aの前からi個の中からいくつか選んでjを作れるか
int func(int i, int j) {
	// 過去に計算済みの場合メモに記録された値を返す
	if (memo[i][j] != 1) return memo[i][j];
	// i = 0のとき、j = 0ならtrue
	if (i == 0) return memo[i][j] = j == 0;

	int flag = 0;
	memo[i][j] = 0;
	if (j >= A[i - 1] && func(i - 1, j - A[i - 1] == 1)) flag = 1;
	if (func(i - 1, j) == 1) flag = 1;
	return flag;
}

int main() {
	int N, X;
	cin >> N >> X;
	A.resize(N);
	for (int i = 0; i < N; i++) cin >> A[i];
	memo.resize(N + 1, vector<int>(X + 1, -1));
	string ans = func(N, X) == 1 ? "Yes" : "No";
	cout << ans << endl;
}
