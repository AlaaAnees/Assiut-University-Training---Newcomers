/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define RUN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
int main() {
    RUN;
    int n,q; cin>>n>>q;
    int arr[n];
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
        arr[i]+=arr[i-1];
    }
    while(q--){
        int l,r; cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;
    }
}
*/
