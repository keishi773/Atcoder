#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
#include <cmath>
#include <limits>
#include<iomanip>
#include<typeinfo>
#include<queue>
#include<map>
//十分に大きな値
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using Pint = pair<int, int>;
using Pll = pair<ll, ll>;
using Graph = vector<vector<int>>;


vector<int> a = { 1, 14, 32, 51, 51, 51, 243, 419, 750, 910 };

// めぐる式二分探索

// indexが条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

// 二分探索
int binary_search(int key) {
    // index0が条件を満たすことがあるので初期値は-1
    int ng = -1;
    // index = a.size()-1が条件を満たさないことがある
    int ok = (int)a.size();
    // okとngのどちらが大きいか分からないことを考慮
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}

bool hantei(string S) {
    int cnt = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '(') cnt += 1;
        if (S[i] == ')') cnt -= 1;
        if (cnt < 0) return false;
    }
    if (cnt == 0) return true;
    return false;
}

// 区間スケジュール問題
int main() {
    int N;
    cin >> N;
    vector<int> S(N), T(N);
    for (int i = 0; i < N; i++) cin >> S[i] >> T[i];
    //終了時刻Tが小さい順にidを並び替える
    vector<int> ids(N);
    for (int i = 0; i < N; i++) ids[i] = i;
    sort(ids.begin(), ids.end(), [&](int i, int j) {
        return T[i] < T[j];
     });

    int ans = 0;
    // 終了時刻
    int last_time = 0;
    for (auto i : ids) {
        if (S[i] < last_time) continue;
        ans++;
        last_time = T[i];
    }
    cout << ans << endl;
}
