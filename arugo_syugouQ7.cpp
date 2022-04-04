#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
	cin >> n >> a >> b;
	set<int> st;
	for(int i = 1; i <= n; i++){
		st.insert(i);
	}
	for(int i = 0; i < a; i++){
		int ai;
		cin >> ai;
		st.erase(ai);
	}
	for(int i = 0; i < b; i++){
		int bi;
		cin >> bi;
		st.erase(bi);
	}
	cout << st.size() << endl;
	return 0;
}