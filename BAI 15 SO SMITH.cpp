#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int check(ll n)
{
    ll ans = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            ll cnt = 0;
            while(n % i == 0){
                ++cnt;
                n /= i;
            }
            if(cnt >= 2) return false;
            if(cnt == 1) ++ans;
        }
    }
    if(n != 1)++ans;
    return ans = 3;
}
main()
{
    ll n;
    cin >> n;
    if(check(n))
    {
        cout <<"1";
    }
    else cout <<"0";
}
