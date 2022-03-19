#include <iostream>
#include <vector>
using namespace std;

// ユークリッドの互除法(大きい方を小さいほうで割るを繰り返す)
int uqlid(int n, int m) {
  while(n >= 1 && m >= 1){
    if(n < m) m = m % n;
    else n = n % m;
  }
  if(n >= 1) return n;
  return m;
}


int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i = 0; i < N; i++){

  }
}