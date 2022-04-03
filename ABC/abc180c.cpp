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

int main() {
	//10^12だからintだとオーバーフローする
	long N;
	cin >> N;
	set<long> ans;
	for (long i = 1; i*i <= N; i++) {
		if (N % i == 0) {
			ans.insert(i);
			ans.insert(N / i);

		}
	}
	// sort(ret.end(), ret.end());
	for (auto x : ans) cout << x << endl;
}