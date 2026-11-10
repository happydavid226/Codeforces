/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 200'000
bool isprime[MAXN];

bool is_prime(int x){
    if(x == 0 || x == 1) return false;
    for(int i = 2; i*i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

vector<int> find_primes(){
    vector<int> ans;
    for(int i = 2; i < MAXN; i++){
        isprime[i] = true;
    }
    for(ll j = 2; j < MAXN; j++){
        for(ll i = j*j; i <= MAXN; i+=j){
            isprime[i] = false;
        }
    }
    for(int i = 0; i < MAXN; i++){
        if(isprime[i]){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    int tt; cin >> tt;
    vector<int> primes = find_primes();
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<ll> a;
        int i = 0;
        while(a.size() != n){
            a.push_back(1LL*primes[i]*primes[i+1]);
            i++;
        }
        for(ll x : a){
            cout << x << " ";
        }
        cout <<'\n';
    }
    return 0;
}