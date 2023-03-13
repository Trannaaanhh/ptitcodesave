#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sumofsquares = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (sqrt(i) == floor(sqrt(i)))
        { 
            sumofsquares += i;
        }
    }
    cout << sumofsquares << endl;
}
