/*God will make me win */
#include <bits/stdc++.h>
#define inf 1000000000
#define infL 1'000'000'000'000'000'000LL
using ll = long long;
using namespace std;

ll a, n;
vector<string> nums;
vector<char> d, ad;

void generate(int i, string cur){
    if(i == 19){
        nums.push_back(cur);
        return;
    }
    generate(i+1, cur+d[0]);
    generate(i+1, cur+d[1]);
}

int main(){
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++){
        cin >> a >> n;
        for(int i = 0; i < n; i++){
            char dig; cin >> dig;
            d.push_back(dig);
        }
        ad.assign(19, '0');
        ll cur = 0, k = a;
        while(k > 0){
            ad[cur] = (k%10) - '0';
            k /= 10;
            cur++;
        }     
        reverse(ad.begin(), ad.end());   
        for(int i = 0; i <= 18; i++){
            generate(i,"");
        }
        ll mn_ans = infL;
        ll good = -1;
        //cerr << "nums.size is " << nums.size() << '\n';
        for(string s : nums){
            if(llabs(a-stoll(s)) < mn_ans){
                mn_ans = llabs(a-stoll(s));
                good = stoll(s);
            }
        }

        /* cerr << "the numbers are \n";
        for(string s : nums){
            cerr << stoll(s) << '\n';
        }
        cerr << endl; */
        cout << mn_ans << '\n';
        d.clear();
        nums.clear();
        ad.clear();
    }
    return 0;
}