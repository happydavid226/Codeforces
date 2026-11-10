/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        string s;
        cin >> s;
        int n = s.size();
        queue<char> q;
        for(int i = 0; i < n; i++){
            q.push(s[i]);
        }
        vector<int> components;
        while(!q.empty()){
            char cur = q.front();
            int cnt = 0;
            while(!q.empty() && q.front() == cur){
                cnt++;
                q.pop();
            }
            if(cnt > 1) components.push_back(cnt);
        }
        sort(components.begin(), components.end());
        if(n <= 3){
            cout << "YES\n";
            continue;
        }
        if(components.size() >= 3){
            cout << "NO\n";
            continue;
        }
        if(components.size() == 1){
            if(components[0] <= 3){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            continue;
        }
        if(components.size() == 2){
            if(components[0] + components[1] < 5){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            continue;
        }
        cout << "YES\n";
    }
    return 0;
}