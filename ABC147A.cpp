#include <iostream>      // cout, endl, cin
#include <string>        // string, to_string, stoi
#include <vector>        // vector
#include <algorithm>     // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility>       // pair, make_pair
#include <tuple>         // tuple, make_tuple
#include <cstdint>       // int64_t, int*_t
#include <cstdio>        // printf
#include <map>           // map
#include <queue>         // queue, priority_queue
#include <set>           // set
#include <stack>         // stack
#include <deque>         // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset>        // bitset
#include <cmath>
#include <limits>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
#define mod 1000000007
#define fst first
#define pb push_back
// ABC146B first AC
int main()
{
    int A1, A2, A3;
    cin >> A1 >> A2 >> A3;
    int sum = A1+A2+A3;
    if(sum <= 22){
        cout << "bust" << endl;
    }else if(sum >= 21){
        cout << "win" << endl;
    }
}