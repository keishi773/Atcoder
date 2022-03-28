#include <bits/stdc++.h>
using namespace std;

const int iINF = 10000001;
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
    vector<vector<int>> dp(n, vector<int>(n,iINF));
    dp[0][n-1] = A[0][n-1];
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            // 上からくる
            if(i-1 >= 0){
                dp[i][j] = min(dp[i][j], dp[i-1][j] + A[i][j]);
            }
            // 右からくる
            if(j+1<=n-1) {
                dp[i][j] = min(dp[i][j], dp[i][j+1] + A[i][j]);
            }
        }
    }
    cout << dp[n-1][0] << endl;
}