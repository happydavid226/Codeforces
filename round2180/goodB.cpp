#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        stack<string> st;
        queue<string> q;
        string data;
        cin >> data;
        st.push(data);
        for(int i = 1; i < n; i++){
            cin >> data;
            if(data <= st.top()) st.push(data);
            else q.push(data);
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        while(!q.empty()){
            cout << q.front();
            q.pop();
        }
        cout << '\n';
    }
    return 0;
}