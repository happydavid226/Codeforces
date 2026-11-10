/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int n;
vector<int> a;

int go_down(int i){
    while(i+1 < n && a[i+1]  <= a[i]){
        i++;
    }
    return i;
}

int go_up(int i){
    while(i+1 < n && a[i+1] >= a[i]){
        i++;
    }
    return i;
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        a.clear();
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(i == 0){
                a.push_back(x);
            } else if(x != a.back()){
                a.push_back(x);
            }
        }
        n = a.size();
        int i = 0;
        int ans = 1;
        //cerr << "the new n is " << n << endl;
        while(i < n){
            //cerr << "i is " << i << '\n';
            int cur = go_up(i);
            if(cur == i){
                cur = go_down(i);
            }
            //cerr << "cur is " << cur << '\n';
            if(cur == i){
                break;
            }
            ans++;
            i = cur;
        }
        cout << ans << '\n';
    }
    return 0;
}