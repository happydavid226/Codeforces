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
        Tree.resize(4*n,0);
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
    int update_and_answer(int node, int l, int r, int i,const int& val){
        int up = 0;
        if(l==r){
            Tree[node] = val;
            if(node&1){
                //cerr << "the node is "<< node <<" the node is right and its value is " << Tree[node] << " where as the left is " << Tree[node-1] << "so up becomes : ";
                if(Tree[node-1] >= Tree[node]) up++;
            } else {
                if(Tree[node] < Tree[node+1]) up++;
                //cerr << "the node is "<< node <<" the node is left and its value is " << Tree[node] << " where as the right is " << Tree[node+1] << "so up becomes : ";
            }
            //cerr << up << '\n';
        }  else {
            int mid = l + (r-l)/2;
            if(i <= mid){
                up += update_and_answer(node*2, l, mid, i, val);
            } else {
                up += update_and_answer(node*2+1, mid+1, r, i, val);
            }
            Tree[node] = Tree[node*2]^Tree[node*2+1];
            if(node&1){
                if(Tree[node-1] >= Tree[node]) up += (node == 1 ? 0 : r-l+1);
                //cerr << "the node is "<< node <<" the node is right and its value is " << Tree[node] << " where as the left is " << Tree[node-1] << "so up becomes : " << up << '\n';
            } else {
                if(Tree[node] < Tree[node+1]) up += r-l+1;
                //cerr << "the node is "<< node <<" the node is left and its value is " << Tree[node] << " where as the right is " << Tree[node+1] << "so up becomes : " << up << '\n';
            }
        }
        return up;
    }
    void update(int node, int l, int r, int i, int val){
        if(l==r) {
            Tree[node] = val;
            return;
        }
        int mid = l + (r-l)/2;
        if(i <= mid){
            update(node*2, l, mid, i, val);
        } else {
            update(node*2+1, mid+1, r, i, val);
        }
        Tree[node] = Tree[node*2]^Tree[node*2+1];
    }
    void answer_query(int i, int val){
        //cerr << " we need to update i : " << i << " to " << val << '\n';
        //cerr << "the current and seg is : "; print_array();
        cout << update_and_answer(1,0,n-1,i,val) << '\n';
        //cerr << "the current and seg is : "; print_tree();

        update(1,0,n-1,i,a[i]);
    }
    void print_tree(){
        for(int i = 0; i < 4*n; i++){
            cerr << Tree[i] << " \n"[i==4*n-1];
        }
    }
    void print_array(){
        for(int i = n; i <= 2*n-1; i++) cerr << Tree[i] << " \n"[i==2*n-1];
    }
};

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n, qq; cin >> n >> qq; n = (1<<n);
        vector<int> a(n); for(int i = 0; i< n; i++) cin >> a[i];
        Seg seg(n,a);
        //cerr << "the array is "; for(int i = 0; i < n; i++) cerr << a[i] << " \n"[i==n-1];
        for(int q = 1; q <= qq; q++){
            int bi, val; cin >> bi >> val; bi--;
            seg.answer_query(bi,val);
        }
    }
    return 0;
}