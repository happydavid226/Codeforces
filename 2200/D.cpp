/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
void printvec(const vector<int>& a){
    for(int x : a)cout << x << ' ';
    cout << '\n';
}
int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        int n,x , y; cin >> n >> x >> y;
        vector<int> a(n),fi,se,thi;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(i < x) fi.push_back(a[i]);
            else if(i >= y) thi.push_back(a[i]);
            else se.push_back(a[i]);
        }
        //cerr << "fi : " << fi.size() << "\nse : " << se.size() << "\nthi : " << thi.size() << '\n';
        if(fi.empty()){
            if(se.empty()){
                printvec(a);
                continue;
            }
            int good_ind = min_element(se.begin(), se.end()) - se.begin();
            int l = 0, r = 0;
            while(l < thi.size() && thi[l] < se[good_ind]){
                cout << thi[l] << " ";
                l++;
            }
            for(int i = good_ind; i < se.size(); i++) cout << se[i] << " ";
            for(int i = 0; i < good_ind; i++) cout << se[i] << " ";
            while(l < thi.size()){
                cout << thi[l] << " ";
                l++;
            }
            cout << '\n';
            continue;
        } else if (se.empty()){
            printvec(a);
            continue;    
        } else if(thi.empty()){
            if(se.empty() || fi.empty()){
                printvec(a);
                continue;
            }
            int good_ind = min_element(se.begin(), se.end()) - se.begin();
            int l = 0, r = 0;
            while(l < fi.size() && fi[l] < se[good_ind]){
                cout << fi[l] << " ";
                l++;
            }
            for(int i = good_ind; i < se.size(); i++) cout << se[i] << " ";
            for(int i = 0; i < good_ind; i++) cout << se[i] << " ";
            while(l < fi.size()){
                cout << fi[l] << " ";
                l++;
            }
            cout << '\n';
            continue;
        } else {
            int good_ind = min_element(se.begin(), se.end()) - se.begin(); //1 3 5 2 4
            vector<int> four = fi;
            for(int x : thi) four.push_back(x);
            //cerr << "the size of four is " << four.size() << '\n';
            int l = 0;
            while(l < four.size() && four[l] < se[good_ind]){
                cout << four[l] << " ";
                l++;
            }
            for(int i = good_ind; i < se.size(); i++) cout << se[i] << " ";
            for(int i = 0; i < good_ind; i++) cout << se[i] << " ";
            while(l < four.size()){
                cout << four[l] << " ";
                l++;
            }
            cout << '\n';
            continue;
        }
    }
    return 0;
}