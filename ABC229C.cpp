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


int main() {
	ll N, W;
	cin >> N >> W;
	vector <Pll> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i].first >> a[i].second;
	}
	// pair型はsort出来る
	sort(a.rbegin(), a.rend());
	ll ans = 0;
	for (int i = 0; i < N; i++) {
		// チーズを取っていい数が分かる。
		ll x = min(W, a[i].second);
		ans += x * a[i].first;
		W -= x;
		if (W == 0) {
			cout << ans << endl;
			return 0;
		}
	}
	cout << ans << endl;
	return 0;
}
