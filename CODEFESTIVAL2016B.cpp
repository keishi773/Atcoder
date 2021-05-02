// #include <bits/stdc++.h>
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
#include <stdio.h>
#include <string.h>
#include <numeric>
#include <iomanip>
#define SIZE_OF_ARRAY(array) (sizeof(array) / sizeof(array[0]))
#define rep(i, a, b) for (int i = a; i < b; i++)
const long long INF = 1LL << 60;
typedef long long ll;
template <class T>
inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }
template <class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }
#define all(x) (x).begin(), (x).end()

using namespace std;

// 上下左右の移動用配列
// セットで上、右、下、左の順番
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main(int, char **){
  int N,A,B;
  cin >> N >> A >> B;
  string s;
  cin >> s;
  map<char,int> mp;
  // Sの長さはN
  int ok = A+B;
  int suma = 0;
  int sumb = 0;
  int sumok = 0;
  for(int i = 0; i < N; i++){
    if(s[i] == 'a'){
      suma++;
      if(suma + sumb <= ok || sumok < ok){
        cout << "Yes" << endl;
        sumok++;
      }else{
        cout << "No" << endl;
      }
    }
    if(s[i] == 'b'){
      sumb++;
      if(suma+sumb <= ok && sumb <= B){
        cout << "Yes" << endl;
        sumok++;
      }else{
        cout << "No" << endl;
      }
    }
    if(s[i] == 'c'){
        cout << "No" << endl;
      }
  }
}