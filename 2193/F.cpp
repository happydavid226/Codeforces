/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
int dist(int ax, int ay, int bx , int by){
    return abs(ay-by) + abs(ax-bx);
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, ax, ay, bx, by; cin >> n >> ax >> ay >> bx >> by;
        map<int,int> maxi, mini; 
        vector<int> xi(n), yi(n);
        for(int i = 0; i < n; i++) cin >> xi[i];
        for(int i = 0; i < n; i++) cin >> yi[i];
        for(int i = 0; i < n; i++) maxi[xi[i]] = max(yi[i], maxi[xi[i]]), mini[xi[i]] = (mini[xi[i]] == 0 ? yi[i] : min(mini[xi[i]], yi[i]));
        int m = maxi.size();
        vector<ll> dp1(m,1LL*inf*inf), dp2(m,1LL*inf*inf);
        vector<tuple<int,int,int>> v;
        int i = m-1;
        for(auto it1 = mini.begin(), it2 = maxi.begin(); it2 != maxi.end(); ++it1, ++it2){
            v.push_back({it1->first, it1->second, it2->second});
        }
        for(int i = m-1; i >= 0; i--){
            int x = get<0>(v[i]), y1 = get<1>(v[i]), y2 = get<2>(v[i]);
            if(i == m-1){
                dp1[i] = 1LL*dist(x,y1, bx,by);
                dp2[i] = 1LL*dist(x,y2,bx,by);
            } else {
                int x_ = get<0>(v[i+1]), y1_ = get<1>(v[i+1]), y2_ = get<2>(v[i+1]);
                if(y1 >= y2_){
                    dp1[i] = 1LL*min(1LL*dist(x,y1,x_,y2_) +  2LL*dist(x_,y1_,x_,y2_) + dp2[i+1], 1LL*dist(x,y1,x_,y1_) + dp1[i+1]);
                } else if(y1 <= y1_){
                    dp1[i] = 1LL*min(dist(x,y1,x_,y1_) + 2LL*dist(x_,y1_,x_,y2_) + dp1[i+1], 1LL*dist(x,y1,x_,y2_) + dp2[i+1]);
                } else {
                    dp1[i] = 1LL* dist(x_,y1_, x_,y2_) + 1LL* min(1LL*dist(x,y1,x_,y1_) + dp2[i+1], 1LL*dist(x,y1,x_,y2_) + dp1[i+1]);
                }
                if(y2 >= y2_){
                    dp2[i] = min(1LL*dist(x,y2,x_,y2_) + 2LL*dist(x_,y1_,x_,y2_) + dp2[i+1], 1LL*dist(x,y2,x_,y1_) + dp1[i+1]);
                } else if(y2 <= y1_){
                    dp2[i] = min(1LL*dist(x,y2,x_,y1_) + 2LL*dist(x_,y1_,x_,y2_) + dp1[i+1], 1LL*dist(x,y2,x_,y2_) + dp2[i+1]);
                } else {
                    dp2[i] = 1LL*dist(x_,y1_, x_,y2_) + min(dist(x,y2,x_,y1_) + dp2[i+1], dist(x,y2,x_,y2_) + dp1[i+1]);
                }
            }
        }
        ll ans = 0LL;
        int x = get<0>(v[0]),y = get<1>(v[0]),z = get<2>(v[0]);
        if(ay >= z){
            ans = min(1LL*dist(ax,ay,x,z) + 2LL*dist(x,y,x,z) + dp2[0], 1LL*dist(ax,ay,x,y) + dp1[0]);
        } else if(ay <= y){
            ans = min(1LL*dist(ax,ay,x,y) + 2LL*dist(x,y,x,z) + dp1[0], 1LL*dist(ax,ay,x,z) + dp2[0]);
        } else {
            ans = 1LL*dist(x,y,x,z) + min(1LL*dist(ax,ay,x,y) + dp2[0], 1LL*dist(ax,ay,x,z) + dp1[0]);
        }
        cout << ans << '\n';
    }
    return 0;
}