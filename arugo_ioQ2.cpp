#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        if(s[i] == 'J'){
            a[i] = 1;
        }
        if(s[i] == 'O'){
            a[i] = 2;
        }
        if(s[i] == 'I'){
            a[i] = 3;
        }
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            cout << 'J';
        }
        if(a[i] == 2){
            cout << 'O';
        }
        if(a[i] == 3){
            cout << 'I';
        }
    }
    cout << endl;
}