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
// const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

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
// スケジューリング問題で使う
using Interval = pair<ll, ll>;
// 区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval &b) {
	return a.second < b.second;
}
// ABC 002 B
int main() {
	string S;
	cin >> S;
	for (char c : S) {
		if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
			continue;
		}
		cout << c;
	}
	cout << endl;
}