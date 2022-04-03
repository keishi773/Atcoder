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
	int K, S;
	cin >> K >> S;
	//何通りか数える
	int count = 0;
	for(int x = 0; x <= K; x++) {
		for(int y = 0; y <= K; y++) {
			int z = S - x - y;
			if (0 <= z && sum <= z) {
				count++;
			}
		}
	}
	cout << count << endl;
}