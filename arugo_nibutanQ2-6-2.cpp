#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
    cin >> N;
    vector<int> W(N);
    for(int i = 0; i < N; i++){
        cin >> W[i];
    }
    vector<int> A = W;
    int ans = 0;
    sort(W.begin(),W.end());
    for(int i = 0; i < N; i++){
        int left = 0, right = N;
        while(left!=right){
            int mid  = (right+left)/2;
            if(W[mid] >= A[i]){
                right = mid;
            }else{
                left = mid+1;
            }
        }
        ans = left;
        cout << ans << endl;
    } 
}