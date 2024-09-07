#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
main()
{
    ll n;
    cin >> n;
    int can = sqrt(n);
    if(can * can == n)
    {
        cout <<"YES";
    }
    else cout <<"NO";
}
