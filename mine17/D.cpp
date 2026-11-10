/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
#define MAXN 1'000'001

int n;
queue<vector<int>> q;
vector<int> mn, Q;
bool visited[MAXN], vis[MAXN];

void init(){
    Q.clear();
    /* for(int i = 0; i < MAXN; i++){
        visited[i] = false;
        vis[i] = false;
    } */
}

bool check(const vector<int>& a, const vector<int>& b){
    int n = a.size(), m = b.size();
    int i = n-1, j = m-1;
    while(i >= 0 && j >= 0){
        //cerr << "mn : " << a[i] << " mx : " << b[j] << '\n';
        if(b[j] < a[i]){
            return true;
        } else if(a[i] < b[j]){
            return false;
        } else {
            i--;
            j--;
        }
    }
    if(i == -1){
        return false;
    } else {
        return true;
    }
}

void find_min(){
    queue<vector<int>> nq;
    nq.push(q.front());
    mn = q.front();
    q.pop();
    while(!q.empty()){
        if(check(mn, q.front())){
            mn = q.front();
        }
        nq.push(q.front());
        q.pop();
    }
    q = nq;
}

void check_with_Q(){
    queue<vector<int>> nq;
    while(!q.empty()){
        vector<int> cur = q.front();
        q.pop();
        if(cur == mn){
            continue;
        }
        vector<int> mnc;
        for(int x: cur){
            if(!visited[x]){
                mnc.push_back(x);
            }
        }
        if(!mnc.empty()) nq.push(mnc);
    }
    q = nq;
}

void answer(){
    while(!mn.empty()){
        if(!visited[mn.back()]){
            Q.push_back(mn.back());
            visited[mn.back()] = true;
        }
        mn.pop_back();
    }
}

int main(){
    /* vector<int> y = {1,2,4,3,1}, x = {3, 3, 1};
    cout << check(x, y) << '\n';
    return 0; */
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> n;
        init();
        for(int i = 0; i < n; i++){
            int li;
            cin >> li;
            vector<int> a(li);
            for(int j = 0; j < li; j++){
                cin >> a[j];
            }
            vector<int> b;
            for(int j = li-1; j >= 0; j--){
                if(!vis[a[j]]){
                    b.push_back(a[j]);
                    vis[a[j]] = true;
                }
            }
            for(int x : b){
                vis[x] = false;
            }
            reverse(b.begin(), b.end());
            q.push(b);
        }
        while(!q.empty()){
            find_min();
            /* cerr << "the min vector is : ";
            for(int x : mn){
                cerr << x << " ";
            } 
            cerr << '\n'; */
            answer();
            /* cerr << "Q : "; 
            for(int x : Q){
                cerr << x << " ";
            }  
            cerr << endl; */
            check_with_Q();
        }
        int m = Q.size();
        for(int i = 0; i < m; i++){
            cout << Q[i] << " \n"[i==m-1];
            visited[Q[i]] = false;
        }
    }
    return 0;
}