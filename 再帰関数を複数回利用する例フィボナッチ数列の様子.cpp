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
//再帰関数を複数回利用する様子
//フィボナッチ数列
int fibo(int N) {
    cout << "func(" << N << ") を呼び出しました" << endl;

    // ベースケース
    if (N == 0) return 0;
    else if (N == 1) return 1;

    // 再帰的に答えを求めて出力する
    int result = fibo(N - 1) + fibo(N - 2);
    cout << N << " 項目 = " << result << endl;

    return result;
}

int main() {
    fibo(6);
}