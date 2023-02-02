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
#define PIE 3.141592653589793238

int main() {
   IAMTRYINGandCRYING;
int n,k,mn=INT_MAX; cin>>n>>k;
for(int i=1;i<=n;i++){
    int nums; cin>>nums;
    mn=min(nums,mn);
    // i%k
    if(i%k==0 || i==n) {
        cout<<mn<<" ";
        mn=INT_MAX;
    }

}


}
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
#define PIE 3.141592653589793238

int main() {
    IAMTRYINGandCRYING;
int n,k,num; cin>>n>>k;
int cnt=0, mn=INT_MAX;
for(int i=0;i<n;i++){
    cin>>num;
    mn=min(mn,num);
    cnt++;
    if(cnt==k || i==n-1)
    {
        cout<<mn<<" ";
        cnt=0;
        mn=INT_MAX;
    }

}

}
*/


