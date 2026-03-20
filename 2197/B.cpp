/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, data; cin >> n;
        queue<int> a, b;
        for(int i = 0; i < n; i++) cin >>data, a.push(data);
        for(int i = 0; i < n; i++) cin >>data, b.push(data);
        while(!a.empty() && !b.empty()){
            int frontb = b.front();
            while(!a.empty()&&a.front()!=frontb){
                a.pop();
            }
            if(a.empty()) break;
            a.pop();
            while(!b.empty() && b.front() == frontb)b.pop();
        }
        if(!b.empty()){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}