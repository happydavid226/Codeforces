#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        map<int, vector<int>> mp;
        for(int i = pow(2,n)-1; i >= 0; i--){
            int bit = 0;
            for(bit = 0; bit <= 16; bit++){
                if((i&(1<<bit)) == 0){ mp[bit].push_back(i); break; }
            }
        }
        for(auto& x : mp) sort(x.second.begin(), x.second.end());
        stack<vector<int>> st;
        for(auto x : mp) st.push(x.second);
        while(!st.empty()){
            vector<int> cur = st.top();
            st.pop();
            for(int& x : cur) cout << x << ' ';
        }
        cout << '\n';
        /* for(auto x : mp){
            cout << x.first << ':';
            for(int y : x.second) cout << y << ' ';
            cout << endl;
        } */
    }
    return 0;
}