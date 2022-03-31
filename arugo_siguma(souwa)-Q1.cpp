#include <bits/stdc++.h>
using namespace std;

// for文とΣ計算
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
	return 0;
}