#include<bits/stdc++.h>
using namespace std;
bool snt(long long n){
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        return false;
    }
}
return n > 1;
}
main(){
long long n; cin >> n;
int ans = 0;
for(int i = 2; i <= sqrt(n); i++){
    if(snt(i)){
        ++ans;
    }
}
cout << ans;
}
