/*I will win in the name of Jesus*/
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

struct Seg {
    vector<int> a, Tree;
    int n;
    Seg(int ni, const vector<int>& m){
        n = ni;
        a.resize(n);
        Tree.resize(4*n);
        a = m;
        build(1,0,n-1);
    }
    void build(int node, int l, int r){
        if(l > r) return;
        if(l == r){
            Tree[node] = a[l];
            return;
        }
        int mid = l + (r-l)/2;
        build(2*node, l, mid);
        build(2*node+1, mid+1, r);
        Tree[node] = Tree[2*node]^Tree[2*node+1];
    }
    void update(int node, int l, int r, int i,const int& val){
        if(l == r){
            Tree[node] = val;
            return;
        }
        int mid = l + (r-l)/2;
        if(i <= mid){
            update(node*2, l, mid, i, val);
        } else {
            update(node*2+1, mid+1, r,i , val);
        }
        Tree[node] = Tree[node*2]^Tree[node*2+1];
    }
    void print_tree(){
        for(int i = 0; i < 4*n; i++){
            cout << Tree[i] << " \n"[i==4*n-1];
        }
    }
};

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, qq; cin >> n >> qq; n = (1<<n);
        vector<int> a(n); for(int i = 0; i< n; i++) cin >> a[i];
        Seg seg(n, a); seg.print_tree();
        seg.update(1,0,n-1,1,5);
        seg.print_tree();
        return 0;
    }
    return 0;
}