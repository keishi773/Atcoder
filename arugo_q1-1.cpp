#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
    cin >> N;
    int go = 0;
    int ichi = 0;
    int ans = 0;
    if(N % 5 == 0){
        cout << N / 5 << endl;
        return 0;
    }else{
        go = N / 5;
        N -= go * 5;
        ichi = N/1;
        cout << go + ichi << endl;
    }
     
}