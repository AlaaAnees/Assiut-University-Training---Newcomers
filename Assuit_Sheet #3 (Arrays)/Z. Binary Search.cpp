/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int arr[100009];
int main() {
    IOS;
    int n,q; cin>>n>>q;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    //1 2 3 4 5
    for(int i=0;i<n;i++) {
        for (int j= 0; j<q; i++) {
            int x; cin >> x;
            if (arr[i] != x) cout << "not found" << endl;
            else cout<<"found"<<endl;

        }
    }

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
int arr[100009];
int main() {
    IOS;
    int n,q; cin>>n>>q;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n); //1 2 3 4 5
    while(q--){
        int x; cin>>x;
        int low=0,high=n-1,mid;
        while(low<=high){
            mid=(low+high)/2;
            if(arr[mid]==x) {
                cout<<"found\n";
                break;
            }
            else if(arr[mid]>x) high=mid-1;
            else if(arr[mid]<x) low=mid+1;
            if(low>high) cout<<"not found\n";
        }
    }
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
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
int arr[100009];
int main() {
    IOS;
    int n,q; cin>>n>>q;
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    while(q--){
        int item; cin>>item;
        if(binary_search(arr,arr+n,item)) cout<<"found\n";
        else cout<<"not found\n";
    }
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
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
int main() {
    IOS;
    int n,q; cin>>n>>q;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
        sort(all(v));
        while(q--){
            int item; cin>>item;
            if(binary_search(all(v),item)) cout<<"found\n";
            else cout<<"not found\n";
    }
}
*/









