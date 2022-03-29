#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
    cin >> N >> M;
    vector<int> W(N),V(N);
    for(int i = 0; i < N; i++){
        cin >> W[i];
    }
    for(int i = 0; i < N; i++){
        cin >> V[i];
    }
    //dp
    vector<vector<int>> dp(N+1, vector<int>(M+1, -1));
    dp[0][0] = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= M; j++){
            // 最初のi個の品物のみを用いて重さをjにすることができなかったら
            if(dp[i][j] < 0) continue;
            
            // i番目の品物を追加しない場合
            dp[i+1][j] = max(dp[i+1][j], dp[i][j]);

            // i個目の品物を追加する
            if(j+W[i] <= M){
                dp[i+1][j+W[i]] = max(dp[i+1][j+W[i]], dp[i][j] + V[i]);
            }
        }
    }
    int res = -1;
    for(int j = 0; j <= M; j++){
        res = max(res, dp[N][j]);
    }
    cout << res << endl;
}