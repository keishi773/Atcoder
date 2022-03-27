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

int main() {
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int>(3));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> A[i][j];
		}
	}

	vector<vector<int>> dp(N, vector<int>(3, 0));
	// 0日目
	for (int i = 0; i < 3; i++) {
		dp[0][i] = A[0][i];
	}
	for (int i = 1; i < N; i++) {
		dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + A[i][0];
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + A[i][1];
		dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + A[i][2];
	}
	cout << max({ dp[N - 1][0],dp[N - 1][1],dp[N - 1][2] }) << endl;
}

