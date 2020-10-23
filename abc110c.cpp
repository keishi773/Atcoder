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
	int N;
	cin >> N;
	set<ll> st;
	vector<ll> b(N);
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		if (st.find(a) != st.end()) {
			st.erase(a);
		}
		else {
			st.insert(a);
		}
	}
	cout << st.size() << endl;
}