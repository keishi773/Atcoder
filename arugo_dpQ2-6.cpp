#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<vector<int>> A(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> A[i][j];
        }
    }
    //dp
    vector<vector<int>> dp(n, vector<int>(n,0));
    dp[0][0] = A[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // 上から
            if(i-1>=0){
                dp[i][j] = max(dp[i][j], dp[i-1][j] + A[i][j]);
            }
            // 左から
            if(j-1>=0){
                dp[i][j] = max(dp[i][j], dp[i][j-1] + A[i][j]);
            }
        }
    }
    cout << dp[n-1][n-1] << endl;
}