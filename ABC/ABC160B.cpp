#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long X;
    cin >> X;
    long long happy;
    happy = 0;
    int sen = 0;
    int amari = 0;
    sen = X/500;
    amari = X%500;
    int go = 0;
    go = amari/5;
    cout << (sen*1000+go*5) << endl;
}