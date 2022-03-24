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

int main() {
    
    int N;
    cin >> N;
    vector<double> X(N), Y(N);
    for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];

    //マンハッタン距離を求める
    auto calc = [&](int i, int j) -> double {
        // return sqrt(X[j] - X[i]) * (X[j] - X[i]) + (Y[j] - Y[i]) * (Y[j] - Y[i]);
        return hypot(X[j] - X[i], Y[j] - Y[i]);
    };


    //答え
    double res = 0.0;

    //used[v] すでに訪れたかどうかをカウントする
    vector<bool> used(N, false);
    used[0] = true;

    //前回の頂点
    int prev = 0;

    //毎回貪欲に頂点を選んでいく
    for (int i = 0; i < N - 1; i++) {
        // 残っている頂点で最も近い所を探す
        int nex = -1;
        double min_dis = 1000000;
        for (int j = 0; j < N; j++) {
            // 既に訪れた頂点はスキップ
            if (used[j]) continue;
            double dis = calc(prev, j);
            if (min_dis > dis) {
                min_dis = dis;
                //一番距離が短い次の点をセットする
                nex = j;
            }
        }
        
        //次の頂点を訪れる
        used[nex] = true;
        // 最小距離を足す
        res += min_dis;

        //前回の頂点を見つかった点で更新
        prev = nex;
    }
    // 最後に頂点0へ戻る
    // 最後の点から0までの距離を足す。
    res += calc(prev, 0);
    // 誤差10-4までで出す。
    cout << fixed << setprecision(10) << res << endl;
  }
