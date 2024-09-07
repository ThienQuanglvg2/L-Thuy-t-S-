#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll n)
{
    int can = sqrt(n);
    if(can * can == n)
    {
        return 1;
    }
    else return 0;
}
main()
{
    ll a, b;
    cin >> a >> b;
    for(ll i = a; i <= b; i++)
    {
        if(check(i))
        {
            cout << i <<" ";
        }
    }
}
