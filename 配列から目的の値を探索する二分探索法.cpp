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
#define rep(i, c) for(int i = 0; i < (int)c; i++)
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

//回文かどうか調べる
bool palindrome(string s) {
	string rs(s.rbegin(), s.rend());
	return s == rs;


}

const int N = 8;
const vector<int> a = {3,5,8,10,14,17,21,39};

// 配列から目的の値を探索する二分探索法
int binary_search(int key) {
	//　配列aの左端と右端
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
	cout << binary_search(10) << endl;
	cout << binary_search(3) << endl;
}