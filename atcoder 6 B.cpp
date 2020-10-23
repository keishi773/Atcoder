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
// atcoder 6 B
vector<long long> memo;

int main() {
	int n; cin >> n;
	ll mod = 10007;
	vector<ll> v = {0,0,0,1};
	for (int i = 4; i <= n; i++) {
		ll r = (v[i - 1] + v[i - 2] + v[i - 3]) % mod;
		v.push_back(r);
	}
	cout << v[n] << endl;
}