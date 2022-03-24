#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    while(N > 0){
        if(N%2==0){
            N /= 2;
            cnt++;
        }else{
            N--;
            cnt++;
        }
    }
	cout << cnt << endl;
	return 0;
}