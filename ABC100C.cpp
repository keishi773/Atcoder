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
using pll = pair<long long, long long>;
using Graph = vector<vector<int>>;


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

// nの約数を求める
vector<long long> divisor(long long n) {
	vector<long long> ret;
	for (long long i = 1; i <= n; i++) {
		if (n % i == 0) {
			ret.push_back(n / i);
		}
	}
	return ret;
}

// 上下左右への移動配列
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };

bool seen[2000];
Graph G;

// xの桁数を求める。

unsigned GetDigit(unsigned num) {
	return to_string(num).length();
}

int main() {
	int x;
	cin >> x;
	// 桁数を取得
	int d = GetDigit(x);
	// 2桁以下だと購入できない。
	if (d <= 2) {
		cout << 0 << endl;
		return 0;
	}
	int a = 0;
	int b = 0;
	int sum = 0;
	// 3桁の場合
	if (d == 3) {
		a = x / 100;
		b = a * 5;
		sum = a * 100 + b;
		if (x <= sum) {
			cout << 1 << endl;
			return 0;
		}
		else {
			cout << 0 << endl;
			return 0;
		}
	}
	// 4桁の場合
	if (d == 4) {
		a = x / 100;
		b = a * 5;
		sum = a * 100 + b;
		if (x <= sum) {
			cout << 1 << endl;
			return 0;
		}else{
			cout << 0 << endl;
			return 0;
		}
	}
	// 5桁の場合
	if (d == 5) {
		a = x / 100;
		b = a * 5;
		sum = a * 100 + b;
		if (x <= sum) {
			cout << 1 << endl;
			return 0;
		}
		else {
			cout << 0 << endl;
			return 0;
		}
	}
	// 6桁の場合
	if (d == 6) {
		if (x == 100000) {
			cout << 1 << endl;
			return 0;
		}
	}
}