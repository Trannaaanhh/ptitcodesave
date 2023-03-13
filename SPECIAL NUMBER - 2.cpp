#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, a, r) for (ll i = a; i <= r; i++)
ll mu(ll a, ll b)
{
    ll c = 1;
    f(i, 1, b) c *= a;
    return c;
}
ll mod = 1e9 + 7;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, key = 1;
        cin >> n >> k;
        ll x = log(k) / log(2);
        f(i, 1, x)
        {
            key *= n;
            key %= mod;
        }
        ll y = k - mu(2, x);
        x--;
        while (y > 0)
        {
            while (1)
            {
                if (y < mu(2, x))
                    x--;
                else
                    break;
            }
            y -= mu(2, x);
            ll bu = 1;
            f(i, 1, x)
            {
                bu *= n;
                bu %= mod;
            }
            key += bu;
            key %= mod;
        }
        cout << key << endl;
    }
}