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
const int iINF = 10000000;
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using Pint = pair<int, int>;
using Pll = pair<ll, ll>;
using Graph = vector<vector<int>>;

// knight配列
vector<int> dx = {1, 2, 2, 1, -1, -2, -2, -1};
vector<int> dy = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int x = 0;
	int y = 0;
		if (x1 == x2) {
			x = x3;
		}
		else if (x2 == x3) {
			x = x1;
		}
		else if (x1 == x3) {
			x = x2;
		}
		if (y1 == y2) {
			y = y3;
		}
		else if (y2 == y3) {
			y = y1;
		}
		else if (y1 == y3) {
			y = y2;
		}
		cout << x << " " << y << endl;
}

