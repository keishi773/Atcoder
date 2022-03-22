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


ll N, K, L;
ll A[1 << 18];

bool solve(ll M) {
	ll cnt = 0;
	ll pre = 0;
	for (int i = 1; i <= N; i++) {
		// 長さM以上のK+1個に分割可能か？
		if (A[i] - pre >= M && L - A[i] >= M) {
			cnt += 1;
			pre = A[i];
		}
	}
	if (cnt >= K) return true;
	return false;
}

int main() {
	cin >> N >> L;
	cin >> K;
	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	//　答えで二分探索
	ll left = -1;
	ll right = L + 1;
	while (right - left > 1) {
		ll mid = left + (right - left) / 2;
		if (solve(mid) == false) right = mid;
		else left = mid;
	}
	cout << left << endl;
	return 0;
}
