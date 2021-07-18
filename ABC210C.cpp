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

int main() {
	ll N, K;
	cin >> N >> K;
	vector<ll> C(N);
	for (ll i = 0; i < N; i++) cin >> C[i];
	int ans = 0;
	int now = 0;
	map<int, int> mp;
	for (int i = 0; i < N; i++) {
		// 0だったら新しい種類だから+1する
		if (mp[C[i]] == 0) now++;
		// 種類を1+する。
		mp[C[i]]++;
		if (i >= K) {
			// 一番左端を消す。
			mp[C[i - K]]--;
			// C[i-K]の分布が0になるから種類を減らす。
			if (mp[C[i - K]] == 0) {
				now--;
			}
		}
		ans = max(ans, now);
	}
	cout << ans << endl;
}