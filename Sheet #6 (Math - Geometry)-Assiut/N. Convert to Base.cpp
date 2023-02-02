/*
  _    _                 _ _         _____                          _
 | |  | |               | | |       / ____|                        | |
 | |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
 |  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
 | |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
 |_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

			pausing is not losing
*/

/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define allr(s) s.rbegin(),s.rend()  //sorting from the biggest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define fixed(n) cout << fixed << setprecision(n)
#define test int t;cin>>t;while(t--)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
#define sz(x) int(x.size())
string decimal_to_any_base(ll decimal, ll base){
    string all ="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result="";
    while(decimal > 0) {
            result+=all[decimal % base];
            decimal /=base;
    }
    reverse(result.begin(),result.end());
    return result;
}
ll value (char c){
    if(c>='0' && c<='9') return (int) c-'0';
    else return (int) c-'A' + 10;
}
ll any_base_to_decimal(string s,ll base){
    ll power =1, ans=0;
    for(int i=s.size()-1;i>=0;i--){
        ans+=value(s[i])*power;
        power*=base;
    }
    return ans;
}
int main() {
    IAMTRYINGandCRYING;
    ll t,base; string s;  cin>>t>>s>>base;
    if(t==1)cout<<any_base_to_decimal(s,base);
    else cout<<decimal_to_any_base(stoll(s),base);
}*/
