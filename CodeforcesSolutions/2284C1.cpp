#include <bits/stdc++.h>
#include <cassert>
using namespace std;
#define MAXN (int)1e5+200
#define ll long long

vector<int> p;

vector<int> make_sieve(){
    vector<bool> is_prime(MAXN, true);
    is_prime[0] = is_prime[1] = false;
    for(ll i = 2; i < MAXN; i++){
        if(is_prime[i] == false){
            continue;
        }
        for(ll j = (ll) i * i; j < MAXN; j += i){
            assert(j < is_prime.size());
            is_prime[j] = false;
        }
        
    }
    vector<int> primes;
    for(int i = 0; i < MAXN; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
    return primes;
}

int main(){
    p = make_sieve();
    //cerr << "reaches here " << endl;
    int tt;
    cin >> tt;
    for(int tcase = 0; tcase < tt; tcase++){
        int n; 
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            b[i] = *upper_bound(p.begin(), p.end(), a[i]);
        }
        for(int i = 0; i < n; i++){
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}