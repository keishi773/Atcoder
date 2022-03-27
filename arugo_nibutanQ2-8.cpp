#include <bits/stdc++.h>
using namespace std;

int f(double x, vector<double> L){
    double ans = 0;
    for(double l : L){
        // 切った数
        ans += (int)(l/x);
    }
    return ans;
}

int main() {
	double N, K;
    cin >> N >> K;
    vector<double> L(N);
    for(int i = 0; i < N; i++){
            cin >> L[i];
    }
    double left = 0, right = 2e5;
        while(right-left>1e-8){
            double mid = (right+left)/2;
            if(f(mid,L)>= K){
                left = mid;
            }else{
                right = mid;
            }
        }    
    double ans = left;
    cout << fixed << setprecision(10) << ans << endl;
}