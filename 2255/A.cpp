/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int tcase = 1; tcase <= tt; tcase++){
        int n, k; 
        cin >> n >> k;
        string s; cin >> s;
        int o, e, of , ef; 
        o = e = of = ef = 0;
        for(int i = 0; i < 2*n; i++){
            if(i % 2 == 0){
                o += (s[i] == '1' && s[(i+1)%(2*n)] == '0');
                of += (s[i] == '1');
            } else {
                e += (s[i] == '1' && s[(i+1)%(2*n)] == '0');
                ef += (s[i] == '1');
            }
        }
        cout << (ef - e + o) << " " << (of - o + e) << endl;
    }
    return 0;
}