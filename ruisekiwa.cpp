#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  //累積和
  vector<int> s(N + 1, 0);
  for (int i = 0; i < N; i++){
    s[i+1] = s[i] + A[i];
  }


  //区間[left,right)の総和を求める。
  int left,right;
  cin >> left >> right;
  cout << s[right] - s[left] << endl;
}