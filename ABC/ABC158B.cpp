#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N,A,B;
    cin >> N >> A >> B;
    long long ans = 0;
    ans = N / (A+B) * A;
    ans += min(N % (A+B), A);
    cout << ans << endl;
}