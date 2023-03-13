#include <iostream>
using namespace std;

long long ucln(long long a, long long b) {
    if (b == 0) return a;
    return ucln(b, a % b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, x, y;
        cin >> a >> x >> y;
        long long p = 0, q = 0;
        while (x--) p = p * 10 + a;
        while (y--) q = q * 10 + a;
        cout << ucln(p, q) << endl;
    }
}
/*****************************************************/
#include<bits/stdc++.h>  
using namespace std;
 #define ll long long 
 #define f(i,a,b) for(ll i=a;i<=b;i++)
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
    ll n, a, x, y;
    cin >> n;
    while (n--)
    {
        cin >> a >> x >> y;
        ll c = ucln(x, y);
        f(i, 0, c - 1) cout << a;
        cout << endl;
    }
}