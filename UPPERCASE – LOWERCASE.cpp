#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        char n,temp;
        cin >> n;
        if (n ==toupper(n))
        {
            temp=tolower(n);
            cout << temp  << endl;
        }
        else
        {
            temp=toupper(n);
            cout << temp << endl;
        }
    }
}