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

//bit全探索の問題 

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	set<int> ans;
	// Sを0から2^N-1までインクリメントして部分集合を列挙
	for (int bit = 0; bit < (1 << N); bit++) {
		int sum = 0;
		//i回右シフトして、そのたび1番目のbitが1かどうか調べる
		for (int i = 0; i < N; i++) {
			//右シフトした後のbit整数の最下位ビットが1かどうか、AND積をとって確認する
			if ((bit >> i) & 1) sum += a[i]; //AND積の結果が1(i番目のbitが1ならば、i番目の整数を和に加える。)
		}
		//setにつっこんで重複を削除する
		ans.insert(sum);
	}

	cout << ans.size() << endl;

}