/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

string f(string name, int n){
    string s = name;
    stack<int> digits;
    while(n > 0){
        digits.push(n%10);
        n/=10;
    }
    while(!digits.empty()){
        s += digits.top() + '0';
        digits.pop();
    }
    return s;
}

int main(){
    int n;
    cin >> n;
    map<string,int> cnt;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        cnt[name]++;
        if(cnt[name] == 1){
            cout << "OK" << '\n';
        } else {
            string new_name = f(name, cnt[name]-1);
            cout << new_name << '\n';
            cnt[new_name]++;
        }
    }
    return 0;
}