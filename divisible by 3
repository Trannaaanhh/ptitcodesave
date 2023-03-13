#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z, N;
        cin >> X >> Y >> Z >> N;
        int num = pow(10, N - 1); 
        while (num < pow(10, N))
        {
            if (num % X == 0 && num % Y == 0 && num % Z == 0)
            {
                cout << num << endl;
                break;
            }
            num++;
        }
        if (num == pow(10, N))
        {
            cout << -1 << endl;
        }
    }
}
