#include<iostream>
#include<vector>
 
using namespace std;
 
bool can(vector<int>& arr, int target) {
    vector<bool> dp(target + 1, false);
    dp[0] = true;
 
    for (int i = 1; i <= target; i++) {
        for (int num : arr) {
            if (i - num >= 0 && dp[i - num]) {
                dp[i] = true;
                break;
            }
        }
    }
 
    return dp[target];
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p=0;
        vector<int>v(n), s(n);
        for(int a:v) {
            cin>>a;
            s.push_back(100/a);
        }
        for(int i=0;i<n*100;i++){
            if(!can(s,i)) {
                p=1;
                break;
            }
        }
        if(p==1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}