#include<bits/stdc++.h>
using namespace std;
int uocso(int n){
    int res = n;
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        while(n % i == 0){
            res = i;
            n /= i;
        }
    }
}
if(n != 1) return res = n;
return res;
}
main(){
int t; cin >> t;
while(t--){
    int n; cin >> n;
cout <<uocso(n)<<endl;
}
}
