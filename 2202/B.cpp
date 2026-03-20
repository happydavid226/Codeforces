/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n; string s; cin >> n >> s;
        deque<char> a;
        queue<char> b;
        for(int i = 0; i < n; i++) b.push(s[i]);
        for(int i = 0; i < n;i++) a.push_back((i%2==1 ? 'b' : 'a'));
        bool flag = true;
        /* 
        
        cerr << "the dequeue is : ";
        for(int i = 0; i < n; i++){
            cerr << a[i];
        }
        cerr << endl;

        queue<char> temp = b;
        cerr << "the queue is : ";
        while(!temp.empty()) cerr << temp.front(), temp.pop();
        cerr << endl;
        
        */

        while(!a.empty()){
            n = a.size();
            int cnt = 0;
            while(!b.empty() && b.front()=='?'){
                b.pop();
                cnt++;
            }
            if(b.empty()) {break;}
            if(cnt == 0){
                if(b.front()==a.front()){
                    b.pop();
                    a.pop_front();
                } else if(b.front() == a.back()){
                    b.pop();
                    a.pop_back();
                } else {
                    flag = false; break;
                }
                continue;
            }
            if(a[cnt]==b.front()){
                for(int i = 0; i < cnt; i++)a.pop_front();
            } else if(a[n-1-cnt] == b.front()){
                for(int i = 0; i < cnt; i++) a.pop_back();
            } else {
                cnt--;
                a.pop_front();
                for(int i = 0; i < cnt; i++) a.pop_back();
            }
        }
        cout << (flag ? "Yes\n":"No\n");
    }
    return 0;
}