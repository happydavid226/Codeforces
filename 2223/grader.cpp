#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<string> output1, output2;
    freopen("c.out", "r", stdin);
    for(int i = 0; i < n; i++){
        string answer;
        cin >> answer;
        output1.push_back(answer);
    }
    freopen("Cbrute.out", "r", stdin);
    for(int i = 0; i < n; i++){
        string answer;
        cin >> answer;
        output2.push_back(answer);
    }
    assert(output1.size() == output2.size());
    for(int i = 0; i < n; i++){
        if(output1[i] != output2[i]){
            cout << i+1 << '\n';
            cout << output1[i] << " " << output2[i] << endl;
            break;
        }
    }
    return 0;
}