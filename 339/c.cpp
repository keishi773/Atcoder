#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
    int N;
    cin >> N;

    vector<ll> A(N);
    for(int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    ll min_passengers = 0;
    ll current_passengers = 0;

    for(int i = 0; i < N; ++i) {
        current_passengers += A[i];
        if(current_passengers < 0) {
            min_passengers += -current_passengers;
            current_passengers = 0;
        }
    }
    for(ll i = 0; i < N; i++) {
        min_passengers += A[i];
    }
    // 最小の乗客数を出力
    cout << min_passengers << endl;

    return 0;
}