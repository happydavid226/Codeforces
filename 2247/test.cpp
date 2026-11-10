#include <bits/stdc++.h>
using namespace std;

bool is_possible(vector<int>& a){
    int n = a.size();
    vector<int> p = a;
    for(int i = 1; i < n; i++){
        p[i] += p[i-1];
    }
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int sum = (start == 0 ? p[end] : p[end] - p[start-1]);
            if(sum%n == 0){
                return false;
            }
        }
    }
    return true;
}
int n;
vector<int> a;

void generate(int i){
    if(a.size() == n){
        if(is_possible(a)){
            cout << "yes\n";
            for(int j= 0; j < n; j++){
                cout << a[j] << " ";
            }
            exit(0);
        }
        return;
    }
    for(int j = 1; j < n; j++){
        a.push_back(j);
        generate(i+1);
        a.pop_back();
    }
}

int main(){
    cin >> n;    
    generate(0);
    return 0;
}