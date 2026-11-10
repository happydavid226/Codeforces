/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;

int main(){
    int n;
    ll k,x; 
    cin >> n >> k >> x;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << 1 << '\n';
        return 0;
    }
    sort(a.begin(), a.end());
    //cerr << "the sorted array : "; for(int i = 0; i < n; i++) cerr << a[i] << " \n"[i==n-1];
    int groups = 0;
    vector<ll> diff;
    for(int i = 0; i < n; i++){
        if(i == 0 || a[i] - a[i-1] > x){
            if(i > 0) diff.push_back((a[i] - a[i-1] + (x-1))/x - 1);
            if(!diff.empty() && diff.back() == 0) diff.pop_back();
            groups++;
        }
    }
    //cerr << "groups before are : " << groups << '\n';
    sort(diff.begin(), diff.end());
    //cerr << "diff : "; for(auto num : diff) cerr << num << " ";
    //cerr << endl;
    for(auto num : diff){
        if(k >= num){
            k -= num;
            groups--;
        }
    }
    cout << groups << '\n';
    return 0;
}