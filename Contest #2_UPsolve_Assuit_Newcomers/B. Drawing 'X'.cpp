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


int main() {
    IAMTRYINGandCRYING;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && j==n/2 && n&1)
                cout<<"X";
            else if(i==j) cout<<"\\";
            else if(i+j==n-1)
                cout<<"/";
            else cout<<"*";
        }
        cout<<endl;
    }
}*/
