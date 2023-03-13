#include <bits/stdc++.h>
using namespace std;

int coins[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int ar[1000] = {0};
int minCoins(int N, int M)
{
    for (int i = 0; i <= N; i++)
        ar[i] = INT_MAX;

    ar[0] = 0;

    for (int i = 1; i <= N; i++)
    {

        for (int j = 0; j < M; j++)
        {

            if (coins[j] <= i)
            {
                ar[i] = min(ar[i], 1 + ar[i - coins[j]]);
            }
        }
    }
    return ar[N];
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int sum;
        cin >> sum;
        int total_coins = 10;
        cout << minCoins(sum, total_coins)<< endl;
    }
}

/*#include<bits/stdc++.h>
using namespace std;
int a[] = {1000,500,200,100,50,20,10,5,2,1};
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ans = 0;
		int i = 0;
		while(n != 0)
		{
			ans+= n/a[i];
			n%=a[i]; i++;
		}
		cout << ans << endl;
	}
}*/