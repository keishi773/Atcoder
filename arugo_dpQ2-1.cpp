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
	// 4*4の配列を用意する。配列全体を0に初期化しておく
	vector<vector<int>> A(4, vector<int>(4, 0));
	// 最上段の入力を受け取る
	for (int i = 0; i < 4; i++) {
		cin >> A[0][i];
	}
	// 2行目3行目4牛目を順番に計算する
	for (int i = 1; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			//真上
			A[i][j] += A[i - 1][j];

			//左上
			if (j - 1 >= 0) A[i][j] += A[i - 1][j - 1];

			//右上
			if (j + 1 < 4) A[i][j] += A[i - 1][j + 1];
		}
	}
	cout << A[3][3] << endl;
}

