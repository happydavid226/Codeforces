/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

int n, m;
vector<int> deg;

bool bus(){
    int cnt2 = 0 , cnt1 = 0;
    //cerr << "enters bus and n is " << n << "\n";
    for(int i = 0; i < n; i++){
        //cerr << "i is " << i+1 << " and its degree is " << deg[i] << " \n";
        if(deg[i] != 2 && deg[i] != 1){
            return false;
        }
        if(deg[i] == 2){
            cnt2++;
        } else {
            cnt1++;
        }
    }
    //cerr << "the counts are not the same\n";
    //cerr << "cnt2 : " << cnt2 << " cnt1 : " << cnt1 << '\n';
    return cnt1 == 2 && cnt2 == n-2;
}
bool ring(){
    for(int i = 0; i < n; i++){
        if(deg[i] != 2){
            return false;
        }
    }
    return true;
}

bool star(){
    int cnt1 = 0, cntn = 0;
    for(int i = 0; i < n; i++){
        if(deg[i] != 1 && deg[i] != n-1){
            return false;
        }
        if(deg[i] == 1){
            cnt1++;
        } else {
            cntn++;
        }
    }
    return cnt1 == n-1 && cntn == 1; 
}

int main(){
    cin >> n >> m;
    deg.assign(n, 0);
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        u--; v--;
        deg[u]++; deg[v]++;
    }
    //cerr << "the degree of 2 is " << deg[1] << '\n';
    if(bus()){
        cout << "bus ";
    } else if(ring()){
        cout << "ring ";
    } else if(star()){
        cout << "star ";
    } else {
        cout << "unknown ";
    }
    cout << "topology\n";
    return 0;
}