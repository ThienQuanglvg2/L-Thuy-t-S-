#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll hh(ll n){
ll sum = 1;
for(int i = 2; i * i <= n; i++){
    if(n % i == 0){
        sum += i;
        if(i != n / i) sum += n/i;
    }
}
return sum == n;
}
main(){
ll n; cin >> n;
if(hh(n)){
    cout <<"YES";
}
else cout <<"NO";
}
