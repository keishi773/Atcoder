#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if((a+b)%2 == 0 && a-b >= 0){
        cout << (a+b)/2 << endl;
    }else{
        cout << -1 << endl;
    }
	return 0;
}