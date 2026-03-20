#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]){
            return true;
        } else if(a[i] > b[j]){
            return false;
        }
        i++;
        j++;
    }
    if(i == n && j == m) return true;
    while(i < n){
        if(a[i] < b[m-1]) return true;
        else if(a[i] > b[m-1]) return false;
        i++;
    }
    while(j < m){
        if(a[n-1] < b[j]) return true;
        else if(a[n-1] > b[j]) return false;
        j++;
    }
    return true;
}

int main(){
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        deque<string> ans;
        ans.push_back(a[0]);
        for(int i = 1; i < n; i++){
            if(comp(a[i], ans.front())) ans.push_front(a[i]);
            else ans.push_back(a[i]);
        }
        for(const string& x : ans) cout << x;
        cout << '\n';
    }
    return 0;
}