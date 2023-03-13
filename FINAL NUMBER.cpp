#include <iostream>
#include <math.h>
#define ll long long
using namespace std;
void digsum(ll n)
{
    int sum = 0;
    int sum1 = 0;
    int sum2 = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    if (sum <= 9 && sum >= 1)
        cout << sum;
    else if (sum > 9)
    {
        while (sum > 0)
        {
            sum1 += sum % 10;
            sum /= 10;
        }
        if (sum1 >= 1 && sum1 <= 9)
            cout << sum1;
        else if (sum1 > 9)
        {
            while (sum1 > 0)
            {
                sum2 += sum1 % 10;
                sum1 /= 10;
            }
            cout << sum2;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    if (t > pow(10, 6))
        return 0;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n > pow(10, 18))
            continue;
        digsum(n);
        cout << "\n";
    }
}

#include <bits/stdc++.h>
using namespace std;
void check(long long n)
{
    long long tong1 = 0;
    long long tong2 = 0;
    long long tong3 = 0;
    while (n > 0)
    {
        tong1 += 1ll * n % 10;
        n = 1ll * n / 10;
    }
    if (tong1 >= 10)
    {
        while (tong1 > 0)
        {
            tong2 += 1ll * tong1 % 10;
            tong1 = 1ll * tong1 / 10;
        }
        if (tong2 >= 10)
        {
            while (tong2 > 0)
            {
                tong3 += 1ll * tong2 % 10;
                tong2 = 1ll * tong2 / 10;
            }
            cout << tong3;
        }
        else
        {
            cout << tong2;
        }
    }
    else
    {
        cout << tong1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        check(n);
        cout << endl;
    }
    return 0;
}