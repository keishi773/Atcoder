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

vector<int> A;

bool func(int i, int j) {
	if (i == 0) return j == 0;
	//それ以外のとき、問題文の通りに判定する
	bool flag = false;
	if (j >= A[i - 1] && func(i - 1, j - A[i - 1])) flag = true;
	if (func(i - 1, j)) flag = true;

	return flag;
}

int main() {
	int n, x;
	cin >> n >> x;
	A.resize(n);
	for (int i = 0; i < n; i++) cin >> A[i];
	string ans = func(n, x) ? "Yes" : "No";
	cout << ans << endl;
}
