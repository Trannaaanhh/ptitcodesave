#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
int ktsonguyento(lli n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    lli T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        lli r, sum = 0, t = n;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        if (ktsonguyento(sum) == 1)
            cout << t << endl;
        else
            cout << -1 << endl;
    }
}
/************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int isPrime(long long int n)
{
    int temp = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            n = temp + 1;
        }
    }
    if (n == 0)
    {
        return 1;
    }
    return 0;
}

int sum(long long int n)
{
    int temp = 0;
    while (n)
    {
        temp = temp + n % 10;
        n /= 10;
    }
    return temp;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (isPrime(sum(n)) == 1)
        {
            cout << n << endl;
        }
        else
            cout << "-1" << endl;
    }
}