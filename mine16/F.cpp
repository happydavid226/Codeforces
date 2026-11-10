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
        vector<int> w(n), cnt(n+1,0);
        for(int i = 0; i < n; i++){
            cin >> w[i];
            cnt[w[i]]++;
        }
        int k = 0;
        for(int s = 1; s <= 2500; s++){
            vector<int> new_cnt = cnt;
            int candk = 0;
            for(int i = 0; i < n; i++){
                if(s-w[i] >= 0 && s-w[i] <= n){  
                    if(new_cnt[w[i]] > 0 && new_cnt[s-w[i]] > 0){
                        if(w[i] == s-w[i]){
                            if(new_cnt[w[i]] >= 2){
                                new_cnt[w[i]] -= 2;
                                candk++;
                                //cerr << w[i] << " " << s-w[i] << " : " << s << '\n';
                            }
                        } else {
                            new_cnt[w[i]]--;
                            new_cnt[s-w[i]]--;
                            candk++;
                            //cerr << w[i] << " " << s-w[i] << " : " << s << '\n';
                        }
                        
                    }
                }
            }
            k = max(k, candk);
        }
        cout << k << '\n';
    }
    return 0;
}