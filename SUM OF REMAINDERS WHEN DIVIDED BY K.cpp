#include <iostream>
using namespace std;

bool checkEquation(long long N, long long K) {
    long long sum = 0;
    for (long long i = 1; i <= N; i++) {
        sum += i % K;
    }
    return sum == K;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, K;
        cin >> N >> K;
        if (checkEquation(N, K)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define f(i, a, b) for (ll i = a; i <= b; i++) 
int main()
{
    ll T, a, b;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        ll temp = 0;
        f(i, 1, a)
        {
            temp += i;
            if (temp > b)
                break;
        }
        if (temp == b)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
