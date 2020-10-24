#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<functional>
#include<cassert>
#include <list>
#include <numeric>
#include <set>
typedef long long ll;
using namespace std;
//AGC A
int main() {
    string S;
    cin >> S;
    ll cur = 0, sum = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'B')
            cur++;
        else
            sum += cur;
    }
    cout << sum << endl;
    return 0;
}