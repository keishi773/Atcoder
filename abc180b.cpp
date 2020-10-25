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
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
//180 B
int main() {
	int N;
	cin >> N;
	vector<int> k(N);
	for (int i = 0; i < N; i++) cin >> k[i];
	ll manhattan = 0;
	//　マンハッタン距離
	for (int i = 0; i < N; i++) {
		manhattan += abs(k[i]);
	}
	cout << manhattan << endl;
	ll u = 0;;
	// ユークリッド距離
	for (int i = 0; i < N; i++) {
		u += abs(k[i]) * (ll)abs(k[i]);
	}
	cout << fixed << setprecision(20) << sqrt(u)  << endl;
	// チェベシェフ距離
	int m = 0;
	for (int i = 0; i < N; i++) {
		m = max(m, abs(k[i]));
	}
	cout << m << endl;
}