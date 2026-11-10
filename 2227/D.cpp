/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int calc_mex(vector<int>& el){
    sort(el.begin(),el.end());
    for(int i = 0; i < n; i++){
        if(el[i] != i){
            return i;
        }
    }
    return n;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(2*n);
        vector<vector<int>> pos(n+1, vector<int>(2,-1));
        for(int i = 0; i < 2*n; i++){
            cin >> a[i];
            if(pos[a[i]][0] == -1){
                pos[a[i]][0] = i;
            } else {
                pos[a[i]][1] = i;
            }
        }
        int x1 = pos[0][0], x2 = pos[0][1];
        int l = x1, r = x2;
        int ans = 0;
        vector<int> elements;
        bool flag = true;
        while(l <= r){
            if(a[l] != a[r]){
                flag = false;
                break;
            }
            elements.push_back(a[l]);
            l++;
            r--;
        }   
        if(!flag){
            elements.clear();
        } else {
            l = x1-1, r = x2+1;
            while(l >= 0 && r < 2*n){
                if(a[l] != a[r]){
                    break;
                } else {
                    elements.push_back(a[l]);
                    l--;
                    r++;
                }
            }
            ans = max(ans, calc_mex(elements));
        }
        l = r = x1;
        elements.clear();
        while(l >= 0 && r < 2*n){
            if(a[l] != a[r]){
                break;
            } else {
                elements.push_back(a[l]);
                l--;
                r++;
            }
        }
        ans = max(ans, calc_mex(elements));
        elements.clear();
        l = r = x2;
        elements.clear();
        while(l >= 0 && r < 2*n){
            if(a[l] != a[r]){
                break;
            } else {
                elements.push_back(a[l]);
                l--;
                r++;
            }
        }
        ans = max(ans, calc_mex(elements));
        cout << ans << '\n';
    }
    return 0;
}