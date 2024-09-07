#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
main(){
ll n; cin >> n;
ll cnt = 0;
for(int i = 5; i <= n; i*= 5){
    cnt += n / i;
    cnt = cnt % mod;
}
cout << cnt;
}
