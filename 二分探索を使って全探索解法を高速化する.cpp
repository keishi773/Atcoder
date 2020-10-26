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

//　二分探索法を用いて「ペア和を最適化する問題」に対する全探索解法を高速化する
int main() {
	ll N, K;
	cin >> N >> K;
	vector<ll> a(N), b(N);
	for (ll i = 0; i < N; i++) cin >> a[i];
	for (ll i = 0; i < N; i++) cin >> b[i];

	//　暫定最小値を格納する変数
	ll min_value = INF;

	// bをソート
	sort(b.begin(), b.end());

	// aを固定して解く
	for (int i = 0; i < N; i++) {
		// bの中でK - a[i]以上の範囲で最小値を示すイテレータ
		auto iter = lower_bound(b.begin(), b.end(), K - a[i]);

		//イテレーターの示す値を取り出す
		int val = *iter;

		// min_valueと比較する
		if (a[i] + val < min_value) {
			min_value = a[i] + val;
		}
	}
	cout << min_value << endl;
}