#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < N - 3; i++)
    {
        if (S[i] == 'A' && S[i + 1] == 'B' && S[i + 2] == 'C')
        {
            count++;
        }
    }
    cout << count << endl;
}