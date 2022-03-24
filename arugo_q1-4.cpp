#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i = 0; i < N; i++) cin >> A[i];
    vector<int> B(M);
    for(int i = 0; i < M; i++) cin >> B[i];
    int cnt = 0;
    // ボールを使ったかどうか
    vector<bool> used(N, false);
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(used[i])continue;
            if(B[i] >= A[j]){
                cnt++;
                used[i] = true;
                break;
            }
        }
    }
    cout << cnt << endl;
}