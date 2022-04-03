#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
using namespace std;
// atcoder 114 C
// N 入力
// cur: 現在値
// use: 7,5,3のうちどれを使ったか
// counter: 答え
void func(long long N, long long cur, int use, long long &counter) {
	if (cur > N) return;// ベースケース
	if (use == 0b111) ++counter;

	//7を付け加える
	func(N, cur * 10 + 7, use | 0b001, counter);

	//5を付け加える
	func(N, cur * 10 + 5, use | 0b010, counter);

	//3を付け加える
	func(N, cur * 10 + 3, use | 0b100, counter);
}

int main() {
	long long N;
	cin >> N;
	long long counter = 0;
	func(N, 0, 0, counter);
	cout << counter << endl;
}