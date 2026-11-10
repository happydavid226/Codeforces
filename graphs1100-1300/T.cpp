/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

void sw(vector<int>& p){
    int n = p.size()/2;
    for(int i = 1; i <= n; i++){
        swap(p[i], p[i+n]);
    }
}

void adj(vector<int>& p){
    int n = p.size()/2;
    for(int i = 1; i <= 2*n-1; i+=2){
        swap(p[i], p[i+1]);
    }
}

int start_on_sw(vector<int>& p){
    //cerr << "the vector passed is : ";
    for(int x : p){
        //cerr << x << " ";
    }
    //cerr << endl;
    int n = p.size()/2;
    for(int i = 1; i <= 2*n; i++){
        if(i&1){
            sw(p);
        } else {
            adj(p);
        }
        if(is_sorted(p.begin(), p.end())){
            return i; 
        }
    }
    return inf;
}

int start_on_adj(vector<int>& p){
    int n = p.size()/2;
    for(int i = 1; i <= 2*n; i++){
        if(i&1){
            adj(p);
        } else {
            sw(p);
        }
        if(is_sorted(p.begin(), p.end())){
            return i; 
        }
        //cerr << "i is " << i << '\n';
        //cerr << "the vector after operation : ";
        for(int x : p) {
            //cerr << x << " ";
        }
        //cerr << endl;
    }
    return inf;
}

int main(){
    int n; cin >> n;
    vector<int> p(2*n+1), x(2*n+1);
    for(int i = 1; i <= 2*n; i++){
        cin >> p[i];
        x[i] = p[i];
    } 
    if(is_sorted(p.begin(), p.end())){
        cout << 0 << '\n';
        return 0;
    }
    int mn1 = start_on_sw(p);
    //cerr << "starting on adj\n";
    int mn2 = start_on_adj(x);
    if(min(mn1,mn2) == inf){
        cout << -1 << '\n';
    } else {
        cout << min(mn1, mn2) << endl;
    }
    return 0;
}