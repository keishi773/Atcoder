#include <iostream>
#include <vector>
using namespace std;

// 高速約数判定方法
int main()
{
  int N;
  cin >> N;
  for(int i = 1; i*i <= N; i++){
      if(N%i != 0) continue;
      cout << i << endl;
      if(i != N/i){
          cout << N/i << endl;
      }
  }
  return 0;
}