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
// atcoder 133 B


int main() {
	int N, D;
	cin >> N >> D;
	vector<vector<int>> z(N, vector<int>(D));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < D; j++) {
			cin >> z[i][j];
		}
	}
	int count = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i+1; j < N; j++) {
			int ans = 0;
			for (int k = 0; k < D; k++) {
				int diff = abs(z[i][k] - z[j][k]);
				ans += diff * diff;
			}
			bool flg = false;
			for (int k = 0; k <= ans; k++) {
				if (k * k == ans) {
					flg = true;
				}
			}
			if (flg) {
				count++;
			}
		}
		
	}
	
	cout << count << endl;
}