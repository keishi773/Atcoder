#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
    cin >> n >> x >> y;
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(i%x == 0 && i%y == 0){
            ans++;
        }
    }
    cout << ans << endl;
}