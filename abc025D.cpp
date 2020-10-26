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
//十分に大きな値
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
//C
//最大公約数を求める
ll gcd(ll a, ll b) {
	if (a % b == 0) {
		return (b);
	}
	else {
		return(gcd(b, a % b));
	}
}

//最小公倍数を求める
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

//回文かどうか調べる
bool palindrome(string s) {
	string rs(s.rbegin(), s.rend());
	return s == rs;
}

// atcoder abc 023 D 射撃王
// 最適化問題を判定問題にする
// N個の値の最大値を最小にしたい = N個すべての値をx以下にできるかどうかを判定して下さいになる。
int main() {
	int N;
	cin >> N;
	vector<ll> h(N), s(N);
	for (int i = 0; i < N; i++) cin >> h[i] >> s[i];

	//二分探索
	ll left = 0, right = INF;
	while (right - left > 1) {
		ll mid = (left + right) / 2;

		//判定
		bool ok = true;
		//各風船を割るまでの制限時間
		vector<ll> t(N, 0);
		for (int i = 0; i < N; i++) {
			//　そもそもmidが初期高度より低かったらfalse
			if (mid < h[i]) ok = false;
			else t[i] = (mid - h[i]) / s[i];
		}
		// 時間制限が差し迫っている間にソート
		sort(t.begin(), t.end());
		for (int i = 0; i < N; i++) {
			// 時間切れ発生
			if (t[i] < i) ok = false;
		}

		if (ok) right = mid;
		else left = mid;
	}
	cout << right << endl;
}