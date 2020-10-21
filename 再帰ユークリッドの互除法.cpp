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
//再帰関数
//ユークリッドの互除法
// 最大公約数を求める
// GCD(m,n) = GCD(n,r)
// mをnで割ったときのあまりをrとする
// r=0だったらこの時点でのnが最大公約数となる。
// r!=0なら、m <- n, n <- rとして、1に戻る。
int GCD(int m, int n) {
	//ベースケース
	if (n == 0) return m;

	//再帰呼び出し
	return GCD(n, m % n);
}


int main() {
	// 3が求められる。
	cout << GCD(51, 15) << endl;
}