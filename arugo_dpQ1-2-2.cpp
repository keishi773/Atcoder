#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    //dp
    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = A[1];
    for(int i = 2; i < n; i++){
        dp[i] = min(dp[i-1] + A[i], dp[i-2]+ A[i]*2);
    } 
    cout << dp[n-1] << endl;
}