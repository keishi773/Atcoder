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

// tenkei 2days
int main() {
	int N;
    cin >> N;
    char kleft = '(';
    char kright = ')';
    // 2^N通り調べて正しければ出力する
    for(int bit = 0; bit < (1<<N); bit++){
        string kakko = "";
        int leftk = 0;
        int rightk = 0;
        bool isOk = false;
        for(int i = 0; i < N; i++){
            if(bit & (1<<i)){
                kakko.push_back(kleft);
                leftk++;
            }else{
                kakko.push_back(kright);
                rightk++;
            }
        }
        if(leftk >= rightk && leftk == rightk){
            isOk = true;
        }
        cout << kakko << endl;
    }
}
