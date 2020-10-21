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
//再帰関数を複数回利用する例
//フィボナッチ数列
int fibo(int N) {
	//ベースケース
	if (N == 0) return 0;
	else if (N == 1) return 1;

	//再帰呼び出し
	return fibo(N - 1) + fibo(N - 2);
}


int main() {
	cout << fibo(10) << endl;
}