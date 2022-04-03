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
//070 B
int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	A = max(A, C);
	B = min(B, D);
	cout << max(0, B-A) << endl;
}