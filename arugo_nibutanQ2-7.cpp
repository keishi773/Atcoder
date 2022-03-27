#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll f(ll x){
    // 総和　1+2+3+4+5+...
    return x*(x+1)/2;
}

int main() {
	ll n;
    cin >> n;
    vector<ll> x(n);
    for(ll i = 0; i < n; i++){
        cin >> x[i];
    }
    for(ll i = 0; i < n; i++){
        ll left = 0, right = 2e9;
        while(left!=right){
            ll mid = (right+left)/2;
            if(f(mid)>=x[i]){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        cout << left << endl;
    }
    return 0;
}