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
/*****************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int find_lcm(long long x, long long y, long long z) {
    return abs(x*y*z) / __gcd(x, __gcd(y, z));
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long x, y, z, n;
        cin >> x >> y >> z >> n;

        long long lcm = find_lcm(x, y, z);
        if (n < to_string(lcm).size()) {
            cout << "-1\n";
        } else {
            string result = to_string(lcm) + string(n - to_string(lcm).size(), '0');
            cout << result << "\n";
        }
    }
}
/*****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int ucln(int a, int b)
{
	if(b==0) return a;
	else return ucln(b,a%b);
}
long long gcd(long long a,int b)
{
	return 1ll*a/ucln(a,b) *b;
}
int dem(long long k)
{
	int dem = 0;
	while(k != 0)
	{
		dem++;
		k/=10;
	}
	return dem;
}
int main()
{
	int t; cin >> t;
	while(t--)
	{
		int x ,y ,z,n;
		cin >> x >> y >> z >> n;
		long long k = gcd(x,gcd(y,z));
		if(dem(k) > n) cout << "-1" << endl;
		else
		{
			long long m = pow(10,n-1);
			if(m % k == 0) cout << m << endl;
			else cout << (m/k+1)*k << endl;
		}
	}
}