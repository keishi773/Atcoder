#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,X,d;
    cin >> N >> X >> d;
    long long ans = (2*X+d*(N-1))*N/2;
	cout << ans << endl;
	return 0;
}