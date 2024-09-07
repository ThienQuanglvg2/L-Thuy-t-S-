#include<bits/stdc++.h>
using namespace std;
bool binhphuong(int n){
for(int i = 2; i <= sqrt(n); i++){
    if(n % i == 0){
            int cnt = 0;
        while(n % i == 0){
            ++cnt;
    n /= i;
        }
        if(cnt >= 2) return true;
    }
}
if(n != 1) return false;
}
main(){
int a, b; cin >> a >> b;
for(int i = a; i <= b; i++){
    if(binhphuong(i)){
        cout << i <<" ";
    }
}
}
