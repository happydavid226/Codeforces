/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(ll j = 0; j <= 60; j++){
            set<int> un;
            for(int i = 0; i < n; i++){
                //bitset<64> b(a[i]);
                //cerr << b << " : " << '\n'; 
                un.insert((a[i]&(1LL<<j)) != 0);
            }
            //cerr << "j is " << j << '\n';
            //cerr << "un : "; for(auto x : un) cerr << x << " "; cerr << endl;
            auto check = [&](){
                set<ll> c;
                for(int i = 0; i < n; i++){
                    c.insert(a[i] %(1LL<<(j+1)));
                }
                //cerr << "the size of c is " << c.size() << '\n';
                //cerr << "the elements of c are "; for(int x : c ) cerr << x << " "; cerr << endl;
                return c.size() == 2;
            };
            if(un.size() == 2){
                assert(check());
                cout << 1LL*(1LL<<(j+1)) << '\n';
                break;
            }
        }
    }
    return 0;
}