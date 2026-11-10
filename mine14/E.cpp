/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if(a[0] == 1 && k == 0){
        cout << -1 << '\n';
        return 0;
    } 
    if(k == 0){
        cout << 1 << '\n';
        return 0;
    }
    queue<int> q;
    for(int i = 0; i < n; i++){
        q.push(a[i]);
    }
    bool found = false;
    while(!q.empty()){
        int t = q.front();
        while(!q.empty() && q.front() == t){
            q.pop();
        }
        if(n - q.size() == k){
            found = true;
            cout << t << '\n';
            break;
        }
        if(n-q.size() > k){
            break;
        }
    }
    if(!found){
        cout << -1 << '\n';
    }
    return 0;
}