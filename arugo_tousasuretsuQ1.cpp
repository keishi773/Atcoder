#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    long long ans = x;
    int a = 0;
    for(int i = 1; i <= n; i++){
        if(a==0){
            cout << x << endl;
            a++;
        }
        ans += 500;
        cout << ans << endl;
    }
	return 0;
}