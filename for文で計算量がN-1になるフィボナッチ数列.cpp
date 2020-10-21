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
//for文 計算量N-1になる
//フィボナッチ数列
int main() {
    vector<long long> F(50);
    F[0] = 0, F[1] = 1;
    for (int N = 2; N < 50; N++) {
        F[N] = F[N - 1] + F[N - 2];
        cout << N << "項目:" << F[N] << endl;
    }
}