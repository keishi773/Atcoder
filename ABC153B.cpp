#include <bits/stdc++.h>
using namespace std;
int main()
{
    int H,N;
    cin >> H >> N;
    vector<int> A(N);
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        sum += A[i];
    }
    if(sum >= H){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl; 
    }

}