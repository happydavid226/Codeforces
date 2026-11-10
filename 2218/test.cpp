#include <bits/stdc++.h>
using namespace std;

bool is_prime(int x){
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
    int primes = 0;
    int i =2;
    while(primes < 10000){
        if(is_prime(i)){
            primes++;
        }
        i++;
    }
    cerr << "i is " << i << '\n';
}