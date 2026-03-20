#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> mpci;
    map<int, char> mpic;
    for(int i = 0; i < 10; i++){
        mpci[i+97] = i;
        mpic[i] = i+97;
    }
    if(s == "first"){
        int n;
        cin >> n;
        string ans = "";

        for(int i = 0; i < n; i++){
            int data;
            cin >> data;
            string t = "";
            while(data > 0){
                t += mpic[data%10];
                data /= 10;
            }
            while(t.size() < 10) t+='a';
            reverse(t.begin(), t.end());
            ans += t;
        }
        cout << ans << endl;
    } else {
        string d;
        cin >> d;
        assert(d.size()%10 == 0);
        int numbers = d.size()/10;
        int a = 0;
        cout << numbers << endl;
        for(int i = 0; i < numbers; i++){
            int num = 0;
            string t = "";
            for(int i = 0; i < 10; i++){
                t += d[a];
                a++;
            }
            reverse(t.begin(), t.end());
            for(int i = 0; i < 10;i++){
                if(mpci[t[i]] == 0) continue;
                num += pow(10,i)*mpci[t[i]];
            }
            cout << num << ' ';
        } cout << endl;
    }
    return 0;
}