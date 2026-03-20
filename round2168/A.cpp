#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s == "first"){
        int n;
        cin >> n;
        string t = "";
        for(int i = 0; i < n; i++){
            int data;
            cin >> data;
            t.push_back(data+96);
        }
        cout << t << endl;
    } else {
        string t;
        cin >> t;
        cout << t.size() << endl;
        for(const char& x : t){
            int val = (int) x;
            cout << val-96 << ' ';
        } cout << endl;
    }
    return 0;
}