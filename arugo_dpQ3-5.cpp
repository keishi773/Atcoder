#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
    cin >> N >> M;
    vector<int> W(N);
    for(int i = 0; i < N; i++){
        cin >> W[i];
    }
    const int iINF = 1000000;
    //dp
    vector<vector<int>> dp(N+1, vector<int>(M+1,iINF));
    dp[0][0] = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= M; j++){
            if(dp[i][j] == iINF) continue;
            dp[i+1][j] = min(dp[i][j],dp[i+1][j]);
            if(j+W[i] <= M){
                dp[i+1][j+W[i]] = min(dp[i][j]+1,dp[i+1][j+W[i]]);
            }
        }
    }
    if(dp[N][M] != iINF) cout << dp[N][M] << endl;
    else cout << -1 << endl;
}