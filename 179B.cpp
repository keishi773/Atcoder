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
	int N;
	cin >> N;
	pair<int, int> p;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		cin >> p.first >> p.second;
		if (p.first == p.second) {
			cnt++;
		}
		else {
			cnt = 0;
		}
		if (cnt == 3) {
			break;
		}
	}
	if (cnt >= 3) cout << "Yes" << endl;
	else cout << "No" << endl;
}