#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll a, ll b) {
    return a*b/__gcd(a,b);
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        ll x, y, z, n;
        cin >> x >> y >> z >> n;

        ll lcmxy = lcm(x,y);
        ll lcmxz = lcm(x,z);
        ll lcmyz = lcm(y,z);
        ll lcmxyz = lcm(lcmxy, z);

        ll cnt = pow(10,n-1);
        ll ans = -1;

        while(cnt < pow(10,n)) {
            if(cnt % x == 0 && cnt % y == 0 && cnt % z == 0) {
                ans = cnt;
                break;
            }
            cnt += lcmxyz;
        }

        cout << ans << endl;
    }
}
