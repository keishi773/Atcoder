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


vector<int> a = { 1, 14, 32, 51, 51, 51, 243, 419, 750, 910 };

// 二分探索
int binary_search(int key) {
	// 配列aの左端と右端
	int left = 0, right = (int)a.size() - 1;
	while (right >= left) {
		// 区間の真ん中
		int mid = left + (right - left) / 2;
		if (a[mid] == key) return mid;
		else if (a[mid] > key) right = mid - 1;
		else if (a[mid] < key) left = mid + 1;
	}
	return -1;
}

int main() {
	cout << binary_search(419) << endl;
}
