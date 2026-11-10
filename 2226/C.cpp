/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 1'000'001
int cnt[MAXN],generated[MAXN];

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n); multiset<int> ms;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ms.insert(a[i]);
        }
        int l = 0, r = n+2;
        int cur = 0;
        //cerr << "t is " << t << '\n';
        while(l <= r){
            bool is = true;
            vector<int> removed;
            int mid = (l+r)/2;
            //cerr << "mid is " << mid << '\n';
            for(int j = mid-1; j >= 0; j--){
                bool ok = false;
                auto it = ms.find(j);
                if(it != ms.end()){
                    ms.erase(it);
                    removed.push_back(j);
                    //cerr << j << "  got by value\n";
                    ok = true;
                } else {
                    it = ms.lower_bound(2*j+1);
                    if(it != ms.end()){
                        removed.push_back(*it);
                        ok = true;
                        //cerr << j << " got by lower bound which is " << *it << '\n';
                        ms.erase(it);
                    }
                }
                //cerr << "ok is " << ok << '\n';
                is = is && ok;
                //cerr << "is becomes " << is << '\n';
            }
            if(is){
                l = mid+1;
                //cerr << "this is possible, l becomes " << l << '\n';
            } else {
                r = mid-1;
                //cerr << "this is impossible , r becomes " << r << '\n';
            }
            for(int x : removed){
                ms.insert(x);
            }
            //cerr << "now at the end " << l << " " << r << '\n';
            //if(cur++ == 8) break;
        }
        cout << l-1 << '\n';
    }
    return 0;
}