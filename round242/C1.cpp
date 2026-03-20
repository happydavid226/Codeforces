// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

void solve() {
    int t; cin>>t;
    vector<int>p(t),prefix(t+1,0),ans(t);
    
    for( int i=0 ; i<t ; i++) cin>>p[i];
    
    for( int i=1 ; i<=t ; i++) {
        ans[i-1]=p[i-1];
        prefix[i]=prefix[i-1]^i;
       // cerr<<prefix[i]<<" ";
    }
    //cerr<<"_______"<<endl;
    for( int i=1 ; i<=t ; i++) {
        if( (t%(i*2)) >= i) {
            ans[i-1]^=prefix[i-1]^prefix[t%i];
        }
       else ans[i-1]^=prefix[t%i];
    }
    int res=0;
    for( int i=0 ; i<t ; i++) {
        res^=ans[i];
    }
    cout<<res<<endl;
}
int main() {
    
    solve();

    return 0;
}