#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
using namespace std;

int main()
{
	int N;
	int M;
	cin >> N >> M;
	vector<int> P(N);
	double total = 0;
	for (int i = 0; i < N; i++) {
		cin >> P.at(i);
		total += P.at(i);
	}
	//int total = accumulate(P.begin(), P.end(), 0);
	int cnt = 0;
	//sort(P.rbegin(), P.rend());
	double a = total / (4 * M);
	for (int i = 0; i < N; i++) {
		if (P.at(i) >= a) {
			cnt++;
		}
	}
	if (cnt >= M) {
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
}