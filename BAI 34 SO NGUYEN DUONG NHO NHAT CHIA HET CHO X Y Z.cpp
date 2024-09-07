#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
ll lcm(ll a, ll b)
{
    return a/gcd(a,b)*b;
}
main()
{
    int x, y, z, n;
    cin >> x >> y >> z >> n;
    ll bcnn = lcm(x, lcm(y,z));
    ll tmp =(ll)pow(10, n-1);
    ll res = (tmp + bcnn - 1)/bcnn*bcnn;
    if(res < pow(10, n)) cout << res << endl;
    else cout << -1 << endl;
}
