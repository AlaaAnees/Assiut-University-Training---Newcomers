/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int arr[100];
int main() {
    IOS;
    int t,sum=0; cin>>t;
    while(t--){
        int n; cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++) cin>>arr[i];

        for(int i=0;i<n;i++){
            cnt++;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]>=arr[j-1]) cnt++;
                else break;
            }
        }
        cout<<cnt<<endl;

    }
}

*/
