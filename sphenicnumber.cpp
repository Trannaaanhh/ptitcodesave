#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool arr[1001];
void simpleSieve()
{

    memset(arr, true, sizeof(arr));

    for (ll i = 2; i * i < 1001; i++)
    {

        if (arr[i])
        {
            for (ll j = i * 2; j < 1001; j = j + i)
                arr[j] = false;
        }
    }
}
int find_sphene(ll N)
{
    ll arr1[8] = {0};
    ll count = 0;
    ll j = 0;
    for (ll i = 1; i <= N; i++)
    {
        if (N % i == 0 && count < 9)
        {
            count++;
            arr1[j++] = i;
        }
    }
    if (count == 8 && (arr[arr1[1]] && arr[arr1[2]] && arr[arr1[3]]))
        return 1;
    return 0;
}

int main()
{
    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        simpleSieve();
        ll ans = find_sphene(n);
        if (ans)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}