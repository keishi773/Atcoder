#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> A(n),B(m);
    set<int> st;
    for(int i = 0; i < n; i++) {   
        int a;
        cin >> a;
        st.insert(a);
    }
    for(int i = 0; i < m; i++){
        int b;
        cin >> b;
        st.erase(b);
    }
    for(auto i : st){
        cout << i << endl;
    }
	return 0;
}