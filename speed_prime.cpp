#include <iostream>
#include <vector>
using namespace std;

// 2からN-1まで割り切る必要はない
bool is_prime(int n) {
    bool is_prime = true;
    if(n == 1) is_prime = false;
    for(int i = 2; i*i <= n-1; i++){
        if(n % i == 0) {
            is_prime = false;
        }
    }
    cout << true << endl;
}
int main()
{
  // 高速な素数判定(N以下の数)
  int N;
  cin >> N;
  bool is_p = false;
  for(int i = 0; i <= N; i++){
      is_p = is_prime(i);
      if(is_p){
          cout << i << endl;
      }
  } 
}