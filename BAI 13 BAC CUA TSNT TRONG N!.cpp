#include<bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
ll n, p; cin >> n >> p;
ll ans = 0;
for(ll i = p; i <= n; i *= p){
    ans += n / i;
}
cout << ans;
}
