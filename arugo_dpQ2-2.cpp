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
	// N*Nの配列を用意する
	vector<vector<int>> B(N, vector<int>(N, 0));
	// 1段目の入力を受け取る
	for (int i = 0; i < N; i++) {
		cin >> B[0][i];
	}
	// N行目まで順番に計算する
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N; j++) {
			//真上
			B[i][j] += B[i - 1][j];
			//左上
			if (j - 1 >= 0) {
				B[i][j] += B[i - 1][j - 1];
			}
			//右上
			if (j + 1 < N) {
				B[i][j] += B[i - 1][j + 1];
			}
			B[i][j] %= 100;
		}
	}
	cout << B[N - 1][N - 1] << endl;
}

