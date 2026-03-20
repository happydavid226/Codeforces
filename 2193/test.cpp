#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main(){
    cout << 1 << '\n';
    cout << 300000 << '\n';
    for(int i = 0; i < 300000; i++){
        cout << i+1 << " \n"[i==300000-1];
    }
    return 0;
}