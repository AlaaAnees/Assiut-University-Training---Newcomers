/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define infinity 2'000'000'000
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
int t; cin>>t;
while(t--){
    ll n,s; cin>>n>>s;
      vector<ll>v;
      while(n){
          if(s>=n) // n s: 7 10
          {
              v.push_back(n); //7
              s-=n; //10-7= 3
          }
          n--; // 6
      }
      if(s==0){
          cout<<v.size();
          for(int i=0;i<v.size();i++)
              cout<<" "<<v[i];
      }
      else cout<<-1;
      cout<<endl;

}

}*/
