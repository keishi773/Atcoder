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
	int N, M;
	cin >> N >> M;
	vector<int> A(N - 1);
	for (int i = 0; i < N - 1; i++) {
		cin >> A[i];
	}
	// N * Mをdp
	vector <vector<bool>> dp(N, vector<bool>(M, false));
	dp[0][0] = true;
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < M; j++) {
			if (!dp[i][j]) continue;
			//1つ下
			dp[i + 1][j] = true;
			//右下マス(あるなら)
			if (j + A[i] < M) {
				dp[i + 1][j + A[i]] = true;
			}
		}
	}
	// 最下段のマスだけ数える
	int cnt = 0;
	for (int j = 0; j < M; j++) {
		if (dp[N - 1][j]) cnt++;
	}
	cout << cnt << endl;
}

