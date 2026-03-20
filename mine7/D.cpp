#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    int tt; 
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        long long k, x, temp;
        cin >> k >> x;
        long long c = x, v = (1LL << (k+1)) - x;
        stack<int> st;
        while(c != v){
            if(c > v) st.push(2), c -= v, v *= 2;
            else if(v > c) st.push(1), v -= c, c *= 2;
        }
        cout << st.size() << '\n';
        while(!st.empty()) cout << st.top() << ' ', st.pop();
        cout << '\n';
    }
    return 0;
}