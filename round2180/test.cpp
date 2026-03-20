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
        if(a[i] <= b[m-1]) return true;
        else if(a[i] > b[m-1]) return false;
        i++;
    }
    while(j < m){
        if(a[n-1] <= b[j]) return false;
        else if(a[n-1] > b[j]) return true;
        j++;
    }
    return true;
}
 
int main(){
    cerr << (comp("a", "ab")) << '\n';
    int tt;
    cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n;
        cin >> n;
        string s = "";
        for(int i = 0; i < n; i++){
            string data; cin >> data;
            if(comp(data, s)){
                s = data + s;
            } else {
                s = s + data;
            }
        }
        cout << s << '\n';
    }
    return 0;
}