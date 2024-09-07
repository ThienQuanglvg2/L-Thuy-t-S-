#include<bits/stdc++.h>
using namespace std;
main(){
int n; cin >> n;
for(int i = 2; i <= n; i++){
    if(n % i == 0){
            int cnt = 0;
        while(n % i == 0){
            ++cnt;
    n /= i;
        }
        cout << i <<"^"<<cnt;
        if(n != 1) cout <<" * ";
    }
}
if(n != 1){
    cout << n <<"^"<<1;
}
}
