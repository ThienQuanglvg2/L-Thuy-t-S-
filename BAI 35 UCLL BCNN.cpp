#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b){
while(b){
    int r = a % b;
    a = b;
    b = r;
}
return a;
}
ll lcm(ll a, ll b){
return a/gcd(a,b)*b;
}
main(){
ll a, b; cin >> a >> b;
cout << gcd(a, b) <<" "<<lcm(a, b);
return 0;
}
