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
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
//十分に大きな値
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
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

int main() {
	ll N, K;
	cin >> N >> K;
	// モンスターの体力リスト
	vector<ll> H(N);
	for (ll i = 0; i < N; i++) cin >> H[i];
	//降順にソートするときはgreaterを使う
	sort(H.begin(), H.end(), greater<ll>());
	ll attack = 0;
	//必殺技をうたれたモンスターの体力を0に初期化する
	if (K < N) {
		for (ll i = 0; i < K; i++) {
			H[i] = 0;
			if (i == N) {
				break;
			}
		}
		for (ll i = 0; i < N; i++) {
			attack += H[i];
		}
	}
	
	cout << attack << endl;
}