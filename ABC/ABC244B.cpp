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

// xの桁数を求める。
unsigned GetDigit(unsigned num) {
	return to_string(num).length();
}

ll mod = 1e9 + 7;

// int型を「どのアイテムを選ぶのか」を表すvector<int>型に変換
// bit:集合を表す整数
// N:何個のものについて考えているか
vector<int> integerToVector(int bit, int N) {
	vector<int> S;
	for (int i = 0; i < N; i++) {
		if (bit & (1 << i)) {
			S.push_back(i);
		}
	}
	return S;
}

int a[12][12];


ll getsum(ll n) {
	ll sum = 0;
	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

const int iINF = 1 << 30;

char d[4] = {'E','S','W','N'};

int main() {
	int N;
	cin >> N;
	string S;
	cin >> S;
	pair<int, int> p(0,0);
	int arg = 0;
	for (int i = 0; i < N; i++) {
		if (S[i] == 'R') {
			if (arg == 3) {
				// argを0に初期化する
				arg = 0;
				d[arg];
				continue;
			}
			else {
				arg++;
			}
		}
		if (S[i] == 'S' && d[arg] == 'E') {
			p.first++;
		}
		else if (S[i] == 'S' && d[arg] == 'S') {
			p.second--;
		}
		else if (S[i] == 'S' && d[arg] == 'W') {
			p.first--;
		}
		else if (S[i] == 'S' && d[arg] == 'N') {
			p.second++;
		}
	}

	cout << p.first << ' ' << p.second << endl;
}
