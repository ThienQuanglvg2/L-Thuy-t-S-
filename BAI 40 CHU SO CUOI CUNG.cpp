#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll powMod(ll a, ll b, ll c)
{
    ll res = 1;
    while(b)
    {
        if(b % 2 == 1)
        {
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}
main()
{
    ll n;
    cin >> n;
    cout <<powMod(1378, n, 10);
}
