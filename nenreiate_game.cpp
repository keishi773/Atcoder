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

// 年齢当てゲーム
int main() {
	cout << "Start Game!" << endl;
	// Aさんの年齢の候補を表す区間を[left,right)と表す
	// Aさんはleft歳以上right歳未満、right歳自体は候補に含まれない
	int left = 20, right = 36;
	// Aさんの年齢を1つに絞るまで繰り返す
	while (right - left > 1) {
		int mid = left + (right - left) / 2;
		// mid歳以上かを聞いて、回答をyes/noで受け取る
		cout << "Is the age same or more than " << mid << "? (yes / no) " << endl;
		string ans;
		cin >> ans;

		// 回答に応じて年齢を絞る
		if (ans == "yes") left = mid;
		else right = mid;
	}
	cout << "The age is " << left << "!" << endl;
}
