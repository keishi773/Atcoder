#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) cin >> A[i];
    int sum = 1;
    for(int i = 0; i < n; i++){
        sum =  sum * A[i] % 10;
    }
	cout << sum << endl;
	return 0;
}