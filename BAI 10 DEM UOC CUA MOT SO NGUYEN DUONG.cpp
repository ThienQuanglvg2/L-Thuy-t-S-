#include<bits/stdc++.h>
using namespace std;
int const mod = 1e9 + 7;
main(){
int t; cin >> t;
long long res = 1;
while(t--){
    int p, e; cin >> p >> e;
    res *=(e+1);
}
cout << res;
}
