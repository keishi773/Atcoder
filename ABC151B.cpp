#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(N);
    int Mokuhyou = M * N;
    int Sum = 0;
    for(int i = 0; i < N-1; i++){
        cin >> A[i];
        Sum += A[i];
    }
    int ans = Mokuhyou - Sum;
    if(ans > K){
        cout << -1 << endl;
    }else if(ans <= 0){
        cout << 0 << endl;
    }else{
        cout << ans << endl;
    }
}