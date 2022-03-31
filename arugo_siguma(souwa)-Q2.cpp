#include <bits/stdc++.h>
using namespace std;

int main() {
    int L,R;
    cin >> L >> R;
    int sum = 0;
    for(int i = L; i <= R; i++){
        sum += (2*i-1)*(2*i-1);
    }
	cout << sum << endl;
	return 0;
}