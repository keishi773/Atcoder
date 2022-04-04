#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int oneDay = (y-x)/(b-a);
    int ans = x - oneDay*a;
	cout << ans << endl;
	return 0;
}