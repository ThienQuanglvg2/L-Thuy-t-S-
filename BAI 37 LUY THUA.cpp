#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;
ll binpow(ll a, ll b)
{
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res = (res % mod) * (a % mod) % mod;
        }
        a = (a % mod) * (a % mod)  % mod;
        b /= 2;
    }
    return res;
}
main()
{
    ll a, b;
    cin >> a >> b;
    cout << binpow(a, b);
    return 0;
}
