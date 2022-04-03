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
// スケジューリング問題で使う
using Interval = pair<int, int>;
// 区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval &b) {
	return a.second < b.second;
}
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
// AGC 009 A
int main() {
	int N;
	cin >> N;
	vector<ll> A(N), B(N);
	for (int i = 0; i < N; i++) cin >> A[i] >> B[i];

	//答え
	ll sum = 0;
	for (int i = N - 1; i >= 0; i--) {
		// 前回までの操作回数を足す
		A[i] += sum;
		ll amari = A[i] % B[i];
		ll D = 0;
		if (amari != 0) D = B[i] - amari;
		sum += D;
	}
	cout << sum << endl;
}