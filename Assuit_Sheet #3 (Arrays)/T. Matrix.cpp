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
    int n; cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    //print Main
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) sum+=arr[i][j]; //cout<<arr[i][j]<<" "<<endl;
        }
    }

    //print Secondary
    int add=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( (i+j)==(n-1))  add+=arr[i][j]; //cout<<arr[i][j]<<" ";
        }
    }
    int result= abs(sum-add);
    cout<<result;

}*/
