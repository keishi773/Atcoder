#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<int> time(n);
    time[0] = 0; 
    time[1] = A[1];
    for(int i = 2; i < n; i++){
        time[i] = min(time[i-1] + A[i], time[i-2] + 2*A[i]);
    }
    cout << time[n-1] << endl;
}