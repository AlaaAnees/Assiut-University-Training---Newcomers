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
    int n,cnt=0; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    // sort to compare with the smallest number without using min func
    // 5 8 8 9 9
    for(int i=0;i<n;i++){
        if(v[i]==v[0]) cnt++;
        else break;
    }
    cout<<(cnt%2!=0 ? "Lucky\n":"Unlucky\n");
}*/

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
    int n,cnt=0; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int iammini=v[0];
    for(int i=0;i<n;i++){
        if(v[i]==iammini) cnt++;
        else if(v[i]<iammini) iammini=v[i],cnt=1;
    }
    cout<<(cnt%2!=0 ? "Lucky":"Unlucky");
}*/
