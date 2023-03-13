#include<bits/stdc++.h> 
using namespace std; 
#define ll long long
 #define f(i,a,r) for(ll i=a;i<=r;i++)
ll nt(ll a)
{
    if (a < 2)
        return 0;
    else if (a == 2)
        return 1;
    else
    {
        ll b = sqrt(a);
        f(i, 2, b)
        {
            if (a % i == 0)
                return 0;
        }
    }
    return 1;
}
ll check(ll b)
{
    ll c = sqrt(sqrt(b));
    if (nt(b) == 1)
        return 0;
    if (c * c * c * c == b)
    {
        if (nt(c) == 1)
            return 1;
        else
            return 0;
    }
    else
    {
        ll d = sqrt(b);
        if (d * d == b)
            return 0;
        else
        {
            f(i, 2, d)
            {
                if (b % i == 0)
                {
                    if (nt(i) == 0)
                        return 0;
                    else
                    {
                        if (nt(b / i) == 1)
                            return 1;
                        else
                            return 0;
                    }
                }
            }
        }
    }
}
int main()
{
    ll a;
    cin >> a;
    ll dem = 0;
    if (a < 36)
        cout << '0';
    else
    {
        ll c = sqrt(a);
        f(i, 6, c)
        {
            if (check(i) == 1)
            {
                dem++;
            }
        }
        cout << dem;
    }
}