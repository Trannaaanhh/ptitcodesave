#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int sphenic(ll n)
{
    ll fac = 0;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        ll count = 0;
        while (n % i == 0)
        {
            count++;
            n = n / i;
        }
        if (count >= 2)
            return 0;
        if (count == 1)
            fac++;
    }

    if (n != 1)
        fac++;
    return fac == 3;
}
int main()
{
    ll T;
    cin >> T;
    for (ll i = 0; i < T; i++)
    {
        ll n;
        cin >> n;
        cout << sphenic(n) << endl;
    }
}
/**************************************************************/
#include<bits/stdc++.h>
using namespace std;
int primeDivisorCount(int n)
{
    int fac=0;
for (int s = sqrt(n), i = 2; i <= s; ++i)
    while (n % i == 0) n /= i, fac++;
if (n != 1) fac++;
return fac == 3;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
     int n;
     cin >> n;
     cout<<primeDivisorCount(n)<<endl;
    }
}