/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int arr[100];
int main() {
    IOS;
    int t,min; cin>>t;
    while(t--){
        int n; cin>>n;
        // 1<=i<j<=n
        int sum=0;
        min=INT_MAX;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){ // i<j
                sum=(arr[i]+arr[j] +j-i);
                if(sum<min) min=sum;
            }
        }
        cout<<min<<endl;
    }
}
*/
