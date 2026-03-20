/*God help me*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(a[0] == 0 && a[n-1] == 0){
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
}