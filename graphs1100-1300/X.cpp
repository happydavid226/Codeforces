/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        //cerr << "t is " << t << '\n';
        int n; cin >> n;
        vector<bool> taken(n, false), got(n, false);
        for(int i = 0; i < n; i++){
            int k; cin >> k;
            //cerr << "k is " << k << '\n';
            if(k == 0) continue;
            int j = 0;
            do {
                int x; cin >> x; x--;
                //cerr << "x is " << x << " and n is " << n << '\n';
                if(!taken[x] && !got[i]){
                    got[i] = true;
                    taken[x] = true;
                }
                j++;
                //cerr << "j increments " << j << " and k is " << k << '\n';
            } while(j < k);
        }
        bool found  = false;
        for(int i = 0; i < n; i++){
            if(!got[i]){
                for(int j = 0; j < n; j++){
                    if(!taken[j]){
                        cout << "IMPROVE\n";
                        cout << i+1 << " " << j+1 << "\n";
                        found = true;
                        break;
                    }
                }
            }
            if(found) break;
        }
        if(!found){
            cout << "OPTIMAL\n";
        }
    }
    return 0;
}