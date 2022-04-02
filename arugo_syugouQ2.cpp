#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> A(n),B(m);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < m; i++) cin >> B[i];
	set<int> st;
    for(int i = 0; i < n; i++) st.insert(A[i]);
    for(int i = 0; i < m; i++) st.insert(B[i]);
    // sort(st.begin(), st.end());
    for(auto i : st){
        cout << i << endl;
    }
	return 0;
}