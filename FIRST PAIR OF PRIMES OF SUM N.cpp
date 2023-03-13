#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)return false;
    }
    return true;
}
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {   
        int N;
        cin >> N;
        bool f = false;
        for (int j = 2; j <= N / 2; j++)
        {
            if (isPrime(j) && isPrime(N - j))
            {
                cout << j << " " << N - j << endl;
                f = true;
                break;
            }
        }
        if (!f)
        {
            cout << "-1" << endl;
        }
    }
}