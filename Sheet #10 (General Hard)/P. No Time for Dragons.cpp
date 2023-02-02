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
    ll n; cin>>n;
    vector<pair<ll,pair<ll,ll>>>v(n);
    for(ll i=0;i<n;i++){
        ll a,b; cin>>a>>b;
        v[i]={b-a,{b,a}};
    }
    sort(v.begin(),v.end());
    ll last=0;
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(last<v[i].second.second){
            sum+=(v[i].second.second-last);
            last=v[i].second.second;
        }
        last-=v[i].second.first;
    }
    cout<<sum;
}
*/
