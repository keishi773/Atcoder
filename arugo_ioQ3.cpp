#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    set<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                ans.insert(a[i]);
            }
        }
    }
    // sort(ans.begin(), ans.end());
	for(auto& a : ans){
        cout << a << endl;
    }
}