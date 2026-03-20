/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(k == n){
            cout << m/a[p-1] << '\n';
            continue;
        }
        int ans = 0;
        //int x = 0;
        while(m > 0){
            //cerr << "in outer m is " << m << '\n';
            while(m > 0 && p > k){
                //cerr << "loop starts with " << m << '\n';
                int idx = min_element(a.begin(), a.begin()+k) - a.begin();
                //cerr << "idx is " << idx << '\n';
                if(m >= a[idx]) m-=a[idx];
                else {
                    m =0;
                    break;
                }
                p--;
                //cerr << "p is " << p << '\n';
                a.push_back(a[idx]);
                a.erase(a.begin()+idx);
            }
            //cerr << "loop ends with m " << m << '\n';
            if(m >= a[p-1]){
                m-=a[p-1];
                ans++;
                a.push_back(*(a.begin()+(p-1)));
                a.erase(a.begin()+(p-1));
                p = n;
            } else {
                break;
            }
            //x++;
            //if(x == 5) break;
        }
        cout << ans << '\n';
    }
    return 0;
}