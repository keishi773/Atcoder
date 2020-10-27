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

const vector<int> value = {500,100,50,10,5,1};
// 貪欲法でコイン問題を解く
int main() {
	int x;
	cin >> x;
	vector<int> a(6);
	for (int i = 0; i < 6; i++) cin >> a[i];

	//貪欲法
	int result = 0;
	for (int i = 0; i < 6; i++) {
		//枚数制限がない場合の枚数
		int add = x / value[i];

		//枚数制限を考慮
		// 用意された枚数より多ければあるだけ使うからadd = a[i]枚になる
		if (add > a[i]) add = a[i];

		x -= value[i] * add;
		result += add;

	}
	cout << result << endl;
}