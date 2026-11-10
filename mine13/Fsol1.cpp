/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
using ll = long long;
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0;
    int j = 0;
    for(int i = 0; i < n; i++){
        if(j >= m) break;
        //cerr << "i is " << i << '\n';
        if(a[i] > b[j]+1){
            i--;
            j++;
        } else if(a[i] < b[j]-1){
        } else {
            ans++;
            j++;
        }
    }
    /* //cerr << "the sorted array is : ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " \n"[i==n-1];
    }
    //cerr << "the sorted array is : ";
    for(int i = 0; i < m; i++){
        cerr << b[i] << " \n"[i==m-1];
    } */
    cout << ans << '\n';
    return 0;
}