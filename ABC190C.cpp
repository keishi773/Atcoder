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


//最大公約数を求める
ll gcd(ll a, ll b) {
	if (a % b == 0) {
		return (b);
	}
	else {
		return(gcd(b, a % b));
	}
}

//最小公倍数を求める
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

// nの約数を求める
vector<long long> divisor(long long n) {
	vector<long long> ret;
	for (long long i = 1; i <= n; i++) {
		if (n % i == 0) {
			ret.push_back(n / i);
		}
	}
	return ret;
}

// 上下左右への移動配列
const int dx[4] = { 1,0,-1,0 };
const int dy[4] = { 0,1,0,-1 };

// xの桁数を求める。
unsigned GetDigit(unsigned num) {
	return to_string(num).length();
}

ll mod = 1e9 + 7;

// int型を「どのアイテムを選ぶのか」を表すvector<int>型に変換
// bit:集合を表す整数
// N:何個のものについて考えているか
vector<int> integerToVector(int bit, int N) {
	vector<int> S;
	for (int i = 0; i < N; i++) {
		if (bit & (1 << i)) {
			S.push_back(i);
		}
	}
	return S;
}


int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(m), b(m);
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
	int k;
	cin >> k;
	vector<int> c(k), d(k);
	for (int i = 0; i < k; i++) cin >> c[i] >> d[i];
    
    int ans = 0;

    // bit全探索
    for(int bit = 0; bit < (1<<k); bit++){
        //皿
        vector<int> dish(n+1);
        //それぞれの選択を作る
        for(int i = 0; i < k; i++){
            if(bit & (1<<i)){
                dish[d[i]]++;
            }else{
                dish[c[i]]++;
            }
        }
        int now = 0;
        for(int i = 0; i < m; i++){
            if(dish[a[i]] == 0) continue;
            if(dish[b[i]] == 0) continue;
            now++;
        }
        ans = max(ans, now);
    }
    cout << ans << endl;
}
