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
#define infinity 2'000'000'000
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
    int t; cin>>t;
    while(t--){
        string a,b,c; cin>>a>>b>>c;
        bool flag=0;
        for(int i=0;i<b.size();i++){
            if(a[i] != b[i]){
                auto it=find(all(c),b[i]);
                if(it==c.end()) {
                    flag=1;
                    break;
                }
                else{
                    a.insert(a.begin()+i,b[i]);
                    c.erase(it);
                }
            }
        }
        if (a == b)cout << "YES\n";
        else cout << "NO\n";
    }


}*/
