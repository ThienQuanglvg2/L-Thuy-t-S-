#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll lat(ll n){
    ll res = 0;
while(n){
    res = res*10 + n % 10;
    n /= 10;
}
return res;
}
void solve(ll n){
    int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
    ll m = lat(n);
    while(n){
        int r = n % 10;
        if(r == 2) ++c2;
        else if(r == 3) ++c3;
        else if(r == 5) ++c5;
        else if(r == 7) ++c7;
        n /= 10;
    }
    if(c2) cout << 2 <<" "<<c2<<endl;
    if(c3) cout << 3 <<" "<<c3<<endl;
    if(c5) cout << 5 <<" "<<c5<<endl;
    if(c7) cout << 7 <<" "<<c7<<endl;
    cout << endl;
while(m){
    int r = m % 10;
    if(r == 2 && c2 != 0){
        cout << 2 <<" "<< c2 << endl;
        c2 = 0;
    }
    if(r == 3 && c3 != 0){
        cout << 3 <<" "<< c3 << endl;
        c3 = 0;
    }
    if(r == 5 && c5 != 0){
        cout << 5 <<" "<< c5 << endl;
        c5 = 0;
    }
    if(r == 7 && c7 != 0){
        cout << 7 <<" "<< c7 << endl;
        c7 = 0;
    }
    m /= 10;
}
}
main(){
ll n; cin >> n;
solve(n);
}
