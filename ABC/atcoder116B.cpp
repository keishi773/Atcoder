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
// atcoder 116 B 
int main() {
	int N;
	cin >> N;
	int x = N;
	set<int> ans;
	// 無限ループ
	while (ans.count(x) == 0) {
		ans.insert(x);
		if (x % 2 == 0) {
			x /= 2;
		}
		else{
			x = x * 3 + 1;
		}
	}
	cout << ans.size()+1 << endl;
}