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
int n;
int freq[n+1]={0};
int main() {
    IAMTRYINGandCRYING;
    int n; cin>>n;
    int maxi=n;

    for(int i=0;i<n;i++){
        int num; cin>>num;
        freq[num]=1;
        while(freq[maxi]){
            cout<<maxi<<" ";
            maxi--;
        }
        cout<<endl;
    }



}*/







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
bool arr[100'000 +1];
int main() {
    IAMTRYINGandCRYING;
    int n,maxi,x; cin>>n;
    maxi=n; // start of the tower would be the max input number, max input number indicates the size of the array input.
    while(n--){
        cin>>x;
        arr[x]=true;
        while(arr[maxi]) cout<<maxi--<<" ";
        cout<<endl;
    }
}




*/




