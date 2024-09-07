#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool chinhphuong(ll n)
{
    int can = sqrt(n);
    if(can*can == n)
    {
        return true;
    }
    else return false;
}
main()
{
    ll n;
    cin >> n;
    if(chinhphuong(n))
    {
        cout <<"YES";
    }
    else cout<<"NO";
}
