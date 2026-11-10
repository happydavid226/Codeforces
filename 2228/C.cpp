/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

ll a, n, good_dig;
vector<string> nums;
vector<char> d, ad;

void generate(int i, string cur, int state){
    if(i == 19){
        nums.push_back(cur);
        return;
    }
    if(state == -1){
        generate(i+1, cur + d[0], -1);
        return;
    }
    if(state == 1){
        generate(i+1, cur + d[n-1], 1);
        return;
    }
    if(i < good_dig){
        if(d[0] == '0'){
            if(!(i == 0 && d[1] > 3))generate(i+1, cur+d[1], -1);
        } else {
            if(!(i == 0 && d[0] > 3))generate(i+1, cur+d[0], -1);
        }
        return;
    }
    if(i > good_dig && cur == ""){
        if(!(i == 0 && d[n-1] > 3))generate(i+1, cur + d[n-1], 1);
        return;
    }
    for(char j : d){
        /* if(i >=17){
            cerr << "j : " << j << " ad[i] : " << ad[i] << '\n';
        } */
        if(i == 0 && j > 3) continue;
        if(j == ad[i]){
            generate(i+1, cur + j, 0);
        } else if(j > ad[i]){
            generate(i+1, cur + j, -1);
        } else {
            generate(i+1, cur + j , 1);
        }
    }

}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        d.clear();
        nums.clear();
        ad.clear();
        cin >> a >> n;
        assert(d.size() == 0);
        assert(ad.size() == 0);
        assert(nums.size() == 0);
        for(int i = 0; i < n; i++){
            char dig; cin >> dig;
            d.push_back(dig);
        }
        if(a == 0){
            cout << d[0] << '\n';
            continue;
        }
        if(n == 1 && d[0] == 0){
            cout << a << '\n';
            continue;
        }
        ad.assign(19, '0');
        ll cur = 0, k = a;
        while(k > 0){
            int m = k%10;
            ad[cur] = m + '0';
            k /= 10;
            cur++;
        }     
        reverse(ad.begin(), ad.end());
        /* cerr << "the digits : "; 
        for(char c : ad){
            cerr << c << " ";
        }    
        cerr << endl; */
        good_dig = -1;
        for(int i = 0; i < 19; i++){
            if(ad[i] != '0'){
                good_dig = i;
                break;
            }
        }
        assert(good_dig != -1);
        //cerr << "good_digit is " << good_dig << '\n';
        for(int i = 0; i < 19; i++){
            generate(i,"",0);
        }
        ll mn_ans = infL;
        ll good = -1;
        for(string s : nums){
            //cerr << stoll(s) << " ";
            if(llabs(a-stoll(s)) < mn_ans){
                mn_ans = llabs(a-stoll(s));
                good = stoll(s);
            }
        }
        //cerr << "\nthe good  is " << good << '\n';
        cout << mn_ans << '\n';
    }
    return 0;
}