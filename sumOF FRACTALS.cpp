#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    int S = 0, P = 1;
    do
    {
        cin >> n;
    } while (n < 1);
    for (int i = 1; i <= n; i++)
    {
        P = P * i;
        S = S + P;
    }
    // 1 cách code khác cho do while:
    // while(i <= n)
    // {
    //    P = P * i;
    //    S = S + P;
    //    i++;
    // }
    cout << S;
}