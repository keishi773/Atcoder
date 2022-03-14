#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    // copyする
    vector<int> B = A;
    // 大きい順にsortする
    sort(B.begin(), B.end(), greater<int>());
    // 重複を排除する
    B.erase(unique(B.begin(), B.end()), B.end());
    // Bの要素が何番目か決める
    map<int, int> mp;
    for(int i = 0; i < B.size(); i++){
        mp[B[i]] = i;
    }
    for(int i = 0; i < N; i++){
        cout << mp[A[i]] << endl;
    }
	return 0;
}