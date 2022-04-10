#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a(3);
    int z,b,c;
    cin >> z >> b >> c;
    a[0] = z;
    a[1] = b;
    a[2] = c;
    sort(a.begin(), a.end());
    cout << a[1] << endl;
}