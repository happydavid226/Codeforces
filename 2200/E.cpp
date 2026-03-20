/*God will make me win */
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#define inf 1000000000
#define maxn 1000000LL
using ll = long long;
using namespace std;

bool isprime[1000001];
int minx[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> primes;
    for(int i = 0; i <= maxn; i++) minx[i] = i;
    for(ll i = 2; i <= maxn; i++) isprime[i] = true;
    for(ll i = 2; i <= maxn; i++){
        if(!isprime[i]) continue;
        primes.insert(i);
        for(ll j = i*i; j <= maxn; j += i){
            isprime[j] = false;
            minx[j] = i;
        }
    }
    //cerr << "the set size is " << primes.size() << '\n';
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        if(is_sorted(a.begin(), a.end())){
            cout << "Bob\n";
            continue;
        }
        vector<int> mina(n,-1);
        for(int i = 0; i < n; i++) mina[i] = minx[a[i]];
        if(!is_sorted(mina.begin(), mina.end())){
            cout << "Alice\n";
            continue;
        }
        int prev = -1;
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(isprime[a[i]] || a[i] == 1){
                if(prev == -1) prev = i;
                else {
                    if(a[i] < a[prev]){
                        flag = false;
                        break;
                    } else {
                        prev = i;
                    }
                }
            }
        }
        if(!flag){
            cout << "Alice\n";
            continue;
        }
        for(int i = 0; i < n; i++){
            if(isprime[a[i]]) continue;
            for(int x : primes){
                //if(x*x > a[i]) break;
                if(a[i]%x == 0){
                    while(a[i] % x == 0){
                        a[i] /= x;
                    }
                    if(a[i] != 1){
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << (flag ? "Bob\n" : "Alice\n");
    }
    return 0;
}