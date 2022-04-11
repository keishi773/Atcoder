#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	for(int i = a; i < b; i++){
		if(c==i){
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}