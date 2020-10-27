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
// 区間スケジューリング問題に対する貪欲法
using Interval = pair<int, int>;

// 区間を終端時刻で大小比較する関数
bool cmp(const Interval &a, const Interval& b) {
	return a.second < b.second;
}

int main() {
	int N;
	cin >> N;
	vector<Interval> inter(N);
	for (int i = 0; i < N; i++) {
		cin >> inter[i].first >> inter[i].second;
	}

	// 終端時刻が早い順にソートする
	sort(inter.begin(), inter.end(), cmp);

	// 貪欲に選ぶ
	int res = 0;
	int current_end_time = 0;
	for (int i = 0; i < N; i++) {
		//最後に選んだ区間と被るのは除く
		if (inter[i].first < current_end_time) continue;

		++res;
		current_end_time = inter[i].second;
	}
	cout << res << endl;
}