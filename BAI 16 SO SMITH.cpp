#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool snt(ll n)
{
    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}
ll tong(ll n)
{
    ll sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
bool check(ll n)
{
    ll sum = 0;
    ll tmp = n;
    for(int i = 2; i <= sqrt(n); i++)
    {
        while(n % i == 0)
        {
            sum += tong(i);
            n /= i;
        }
    }
    if(n != 1) sum += tong(n);
    return tong(tmp) == sum;
}
main()
{
    ll n;
    cin >> n;
    if(check(n) && !snt(n))
    {
        cout <<"YES";
    }
    else cout <<"NO";
}
