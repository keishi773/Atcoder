#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,W;
    cin >> N >> W;
    vector<int> w(N);
    for(int i = 0; i < N; i++){
        cin >> w[i];
    }
    //dp
    vector<vector<bool>> dp(N+1, vector<bool>(W+1));
    dp[0][0] = true;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= W; j++){
            if(!dp[i][j]) continue;
            dp[i+1][j] = true;
            if(j+w[i] <= W) dp[i+1][j+w[i]] = true;
        }
    }
    if(dp[N][W]) cout << "Yes" << endl;
    else cout << "No" << endl;
}