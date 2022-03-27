#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    vector<string> f(n);
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    //dp
    vector<vector<int>> dp(n, vector<int>(n,0));
    dp[0][0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(f[i][j] == '#') {
                continue;
            }
            // 上から
            if(i-1>=0) dp[i][j] += dp[i-1][j];
            // 左から
            if(j-1>=0) dp[i][j] += dp[i][j-1]; 
        }
    }
    cout << dp[n-1][n-1] << endl;
}
