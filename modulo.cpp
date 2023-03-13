#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(i, a, b) for (ll i = a; i <= b; i++)
#define F(i, a, b) for (ll i = a; i >= b; i--)
ll tongcs(ll a)
{
    ll tong = 0;
    while (a > 0)
    {
        tong += a % 10;
        a /= 10;
    }
    return tong;
}
ll ucln(ll a, ll b)
{
    ll c;
    if (a < b)
    {
        c = a;
        a = b;
        b = c;
    }
    while (1)
    {
        c = a % b;
        if (c == 0)
            return b;
        a = b;
        b = c;
    }
}
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll m, n, p;
    m = abs(a - b);
    n = abs(b - c);
    p = abs(c - d);
    ll h = ucln(m, n);
    ll k = ucln(h, p);
    cout << k;
}