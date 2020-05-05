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
    string s, s2;
    cin  >> s;
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        //sの逆を作る
        s2[i] = s[i];
    }
    //sの並びを戻す。
    reverse(s.begin(),s.end());
    //差異のカウント(つまりハグ)
    int diff = 0;
    for(int i = 0; i < s.size(); i++){
            if(s[i] != s2[i]){
                diff++;
            }
      }
      int ans = diff / 2;
      cout << ans << endl;
}