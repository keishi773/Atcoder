#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(i%3!=0 && i%5!=0){
            cnt++;
        }
    }
	cout << cnt << endl;
	return 0;
}