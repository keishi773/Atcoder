#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> A(n),B(m);
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < m; i++) cin >> B[i];
    vector<int> C(1010, 0);
    for(int i = 0; i < n; i++) C[A[i]]++;
    for(int i = 0; i < m; i++) C[B[i]]++;
    for(int i = 0; i < 1010; i++){
        if(C[i] == 2) {
            cout << i << endl;
        }
    }
	return 0;
}