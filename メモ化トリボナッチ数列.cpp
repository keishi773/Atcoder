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
//同じ引数に対する答えをメモ化
//memo[v] <- fibo(v)の答えを格納する
//キャッシュと呼ばれる考え方、計算量がforループO(n)と同じになる。
//このメモ化は動的計画法というフレームワークを再帰関数を用いて実現したもの。
//トリボナッチ数列

//tribo(N)の答えをメモ化する配列
vector<long long> memo;

long long tribo(int N) {
    //ベースケース
    if (N == 0) return 0;
    else if (N == 1) return 0;
    else if (N == 2) return 1;

    //メモをチェック（すでに計算済みなら答えをリターンする
    if (memo[N] != -1) return memo[N];

    //答えをメモ化しながら、再帰呼び出し
    return memo[N] = tribo(N - 1) + tribo(N - 2) + tribo(N - 3);
}

int main() {
    //メモ化配列を-1で初期化する
    memo.assign(50, -1);

    //fibo(49)を呼び出す
    tribo(10);

    //memo[0], ..., memo[49]に答えが格納されてる
    for (int N = 2; N < 50; N++) {
        cout << N << "項目:" << memo[N] << endl;
    }
}