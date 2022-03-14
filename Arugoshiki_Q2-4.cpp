#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long long nmin = 1LL << 60;
    if(K == 2){
        cout << A[1] - A[0] << endl;
        return 0;
    }
    for(int i = 0; i+K-1 < N; i++){
        long long diff = A[i+K-1] - A[i];
        nmin = min(nmin,diff);
    }
    cout << nmin << endl;
	return 0;
}