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
//179 B
int main() {
	string s;
	cin >> s;
	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < 3; i++) {
		if (s[i] == 'R') cnt++;
		else cnt = 0;
		max(ans, cnt);
	}
	cout << ans << endl;
}