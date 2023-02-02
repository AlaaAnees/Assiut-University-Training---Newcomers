/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define infinity 2'000'000'000
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
    int n,flag=0; cin>>n;
    int arr[n];
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0 || arr[i]==100){
            v.push_back(arr[i]);
        }
        else if(arr[i]>=1 && arr[i]<=9 && !flag){
            v.push_back(arr[i]);
            flag=1;
        }
    }
    if(flag){
        for(int i=0;i<n;i++){
            if(arr[i]>=10 && arr[i]<100 && arr[i]%10==0){
                v.push_back(arr[i]);
                break;
            }
        }

    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]>=10 && arr[i]<100){
                v.push_back(arr[i]);
                break;
            }
        }

    }
    cout<<v.size()<<endl;
    for (int i = 0; i <v.size(); ++i) {
        cout<<v[i]<<" ";

    }
}
*/
