#include<bits/stdc++.h>
using namespace std;
int snt(int n){
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
        return false;
    }
}
return n > 1;
}
main(){
int n; cin >> n;
for(int i = 2; i <= sqrt(n); i++){
        if(snt(i)){
    cout << i * i <<" ";
}
}
}
