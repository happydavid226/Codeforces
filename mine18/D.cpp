/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 100'001

int n, a[MAXN], cnt[MAXN];
ll cur[MAXN];
bool processed[MAXN];
priority_queue<pair<ll,int>, vector<pair<ll,int>>> pq;

pair<ll,int> calc(int x){
    ll ans = 0;
    if(x > 1){
        ans += 1LL*cnt[x-1]*(x-1);
    }
    if(x < MAXN) ans += 1LL*cnt[x+1]*(x+1);
    cur[x] = cnt[x]*x -ans;
    return {cur[x], x};
}

void update(int x){
    cnt[x] = 0;
    if(x < MAXN)cnt[x+1] = 0;
    if(x > 1) cnt[x-1] = 0;
    if(x > 2 && cnt[x-2] > 0) pq.push(calc(x-2));
    if(x < MAXN-2 && cnt[x+2] > 0) pq.push(calc(x+2));
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 0; i < n; i++){
        pq.push(calc(a[i]));
    }
    ll points = 0;
    while(!pq.empty()){
        auto fr = pq.top();
        pq.pop();
        if(cnt[fr.second] <= 0 || fr.first != cur[fr.second]){
            continue;
        }
        points += 1LL*(fr.second)*cnt[fr.second];
        update(fr.second);
    }
    cout << points << '\n';
    return 0;
}