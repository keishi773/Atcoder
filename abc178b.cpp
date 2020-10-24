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
//ABC 178 B
int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(max(a*c, a*d), max(b*c, b*d)) << endl;
}