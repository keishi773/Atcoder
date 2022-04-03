#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
using namespace std;
// atcoder051B
int main() {
	string S;
	cin >> S;
	int N = S.size();

	// N-1箇所の隙間に「+｣を入れるかどうかをすべて試す
	long long res = 0;
	// 何通りあるかのカウント
	int count = 0;
	for (int bit = 0; bit < (1 << (N - 1)); ++bit) {
		// tmp : [+]と「+」との間の値を表す変数
		long long tmp = 0;
		for (int i = 0; i < N - 1; ++i) {
			tmp *= 10;
			tmp += S[i] - '0';
			
			// +を挿入するとき、答えにtmpを加算して、tmpを0に初期化
			if (bit & (1 << i)) {
				res += tmp;
				tmp = 0;
				count++;
			}
		}
		
		// 最後の+から残りの部分を答えに加算
		tmp *= 10;
		tmp += S.back() - '0';
		res += tmp;
	}
	cout << res << endl;
}