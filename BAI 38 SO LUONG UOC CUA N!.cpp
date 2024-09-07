#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
int prime[100001];
void sang()
{
    for(int i = 1; i <= 100000; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(100000); i++)
    {
        if(prime[i])
        {
            for(int j = i*i; j <= 100000; j+=i)
            {
                prime[j] = 0;
            }
        }
    }
}
ll legendre(ll n, ll p)
{
    ll res = 0;
    for(int i = p; i <= n; i*= p)
    {
        res += n / i;
    }
    return res;
}
main()
{
    int n;
    cin >> n;
    sang();
    ll ans = 1;
    for(int i = 1; i <= n; i++)
    {
        if(prime[i])
        {
            int mu = legendre(n, i);
            ans = ans * (mu + 1);
            ans %= (int)mod;
        }
    }
    cout << ans;
}
