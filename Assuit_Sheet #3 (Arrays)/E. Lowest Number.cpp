/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n,iammini=INT_MAX,pos; cin>>n;
    int arr[10005];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        if(iammini>arr[i]) iammini=arr[i],pos=i;
    }
    cout<<iammini<<" "<<pos;
}*/


/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n,iammini=INT_MAX,pos; cin>>n;
    int arr[10005];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        iammini=min(iammini,arr[i]);
    }
    for(int i=1;i<n;i++){
        if(iammini==arr[i]) cout<<iammini<<" "<<i<<endl;
    }

}*/



/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n,iammini=INT_MAX,pos; cin>>n;
    int arr[10005];
    for(int i=1;i<n;i++){
        cin>>arr[i];
        iammini=min(iammini,arr[i]);
    }
    for(int i=1;i<n;i++){
        if(iammini==arr[i]) {
            cout<<iammini<<" "<<i<<endl;
            return 0;
        }
    }

}*/

