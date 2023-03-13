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
        ll lcmxyz = lcm(lcmxy, lcmyz);

        ll cnt = pow(10,n-1);
        ll ans = -1;

        while(cnt < pow(10,n)) {
            if(cnt % x == 0 && cnt % y == 0 && cnt % z == 0) {
                ans = cnt;
                break;
            }
            cnt += lcmxy;
            if(cnt % y && cnt % z == 0) cnt += x;
            if(cnt % z && cnt % y == 0) cnt += x;
            if(cnt % x && cnt % z == 0) cnt += y;
            if(cnt % z && cnt % x == 0) cnt += y;
            if(cnt % x && cnt % y == 0) cnt += z;
            if(cnt % y && cnt % x == 0) cnt += z;
        }

        cout << ans << endl;
    }

    return 0;
}
