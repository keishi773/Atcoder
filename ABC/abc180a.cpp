#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
//十分に大きな値
const long long INF = 1LL << 60;
typedef long long ll;
using namespace std;
//180 A 
int main() {
	int N, A, B;
	cin >> N >> A >> B;
	int ans = N - A + B;
	cout << ans << endl;
}