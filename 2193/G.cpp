/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
set<int> nodes;
vector<vector<int>> adj;
vector<int> previ;
int target;
void dfs(int pre, int node){
    previ[node] = pre;
    if(node == target){
        return;
    }
    for(int nei : adj[node]){
        if(nei != pre)
            dfs(node, nei);
    }
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; cin >> n;
        adj.assign(n, {});
        nodes.clear();
        previ.clear();
        for(int i = 0; i+1 < n; i++){
            int u, v; cin >> u >> v;
            u--; v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }
        bool stop = false;
        while(nodes.size() > 2){
            auto it = nodes.begin();
            int a = *it, b = *(next(it));
            cout << "? " << a+1 << " " << b+1 << endl;
            int found; cin >> found;
            if(found){
                target = b;
                dfs(-1,a);
                vector<int> path;
                while(previ[target] != -1){
                    if(nodes.count(target))
                        path.push_back(target);
                    target = previ[target];
                }
                while(path.size() > 1){
                    int v = path.back();
                    path.pop_back();
                    int u = path.back();
                    path.pop_back();
                    cout << "? " << u+1 << " " << v+1 << endl;
                    int val; cin >> val;
                    if(val){
                        cout << "? " << u+1 << " " << u+1 << endl;
                        int val; cin >> val;
                        if(val) cout << "! " << u+1 << endl;
                        else cout << "! " << v+1 << endl;
                        stop = true;
                        break;
                    }
                }
                if(stop) break;
                cout << "! " << path.back()+1 << endl;
                stop = true;
                break;
            } else {
                nodes.erase(a); nodes.erase(b);
            }
        } 
        if(stop) continue;
        assert(nodes.size() > 0);  
        if(nodes.size()==0) continue;
        if(nodes.size() == 2){
            cout << "? " << (*nodes.begin())+1 << " " << (*nodes.begin())+1 << endl;
            int val; cin >> val;
            if(val){
                cout << "! " << (*nodes.begin())+1 << endl;
            } else {
                nodes.erase(*nodes.begin());
                cout << "! " << (*nodes.begin())+1 << endl;
            }
        } else{
            cout << "! "  << (*nodes.begin())+1 << endl;
        }
    }
    return 0;
}