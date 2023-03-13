#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int reverse(ll n)
{
	ll temp = 0;
	while (n > 0)
	{
		temp = temp*10 + n % 10;
		n = n / 10;
	}
	return temp;
}
int main()
{
	ll n;
	cin >> n;
	cout << reverse(n);
}