#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
typedef long long ll;
using namespace std;
// abc 110 B


int main() {
	int N, M, X, Y;
	cin >> N >> M >> X >> Y;
	int amax = -100;
	int bmin = 100;
	for (int i = 0; i < N; i++){
		int a;
		cin >> a;
		if (a > amax) amax = a;
	}
	for (int i = 0; i < M; i++) {
		int b;
		cin >> b;
		if (b < bmin) bmin = b;
	}
	if (amax < bmin && amax >= X && bmin <= Y) cout << "No War" << endl;
	else cout << "War" << endl;
}