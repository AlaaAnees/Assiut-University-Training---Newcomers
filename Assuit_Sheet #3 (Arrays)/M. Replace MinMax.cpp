/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int mini=INT_MAX,maxi=INT_MIN,x,y;
    for(int i=0;i<n;i++){
        // 1 3 4 8 10
        if(v[i]<mini) mini=v[i],x=i;
        if(v[i]>maxi) maxi=v[i],y=i;
    }
    swap(v[x],v[y]); //change in the arr itself implictly

    //cout<<mini<<" "<<maxi;
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}
*/




/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){

    }


}
*/
