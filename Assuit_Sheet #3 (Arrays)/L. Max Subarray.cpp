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
    //sub-array as is a contiguous subsection of the original array.
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
       for(int i=0;i<n;i++) cin>>arr[i];
       for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
           int maxi=arr[i];
           for(int j=i+1;j<n;j++) {
               if (arr[j] > maxi) maxi = arr[j];
               cout << maxi << " ";
           }
       }
        cout<<endl;
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
int arr[100];
int main() {
    IOS;
    //sub-array as is a contiguous subsection of the original array.
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int start=0;start<n;start++){ //starting  element
            for(int end=start;end<n;end++){ //ending element
                int maxi=INT_MIN;
                for(int k=start;k<=end;k++){ //print the sub-arr
                    if(arr[k]>maxi) maxi=arr[k];
                }
                cout<<maxi<<" ";
            }
        }
        cout<<endl;
    }
}*/

