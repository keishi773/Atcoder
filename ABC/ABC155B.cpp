#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    int count = 0;
    int ap = 0;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        if(A[i]%2 == 0){
            count++;
            if(A[i]%3==0 || A[i]%5==0){
                ap++;
            }
        }
    }
    if(ap == count){
        cout << "APPROVED" << endl;
    }else{
        cout << "DENIED" << endl;
    }
}