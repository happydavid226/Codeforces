#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 0) return 1; 
    return fact(n-1)*n;
}

int main(){
    int n; cin >> n;
    cout << fact(n) << '\n';
    vector<int> a(fact(n)+1);
    a.erase(a.begin());
    for(int i = 1; i < fact(n); i++){
        a[i] = (i%4) + 1;
    }
    sort(a.begin(), a.end());
    do {
        for(int x : a){
            cout << x;
        } cout << endl;
    } while(next_permutation(a.begin(), a.end()));
    return 0;
}