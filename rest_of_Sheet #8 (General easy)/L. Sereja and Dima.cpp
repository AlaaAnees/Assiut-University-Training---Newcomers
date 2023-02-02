/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define fixed(n) cout << fixed << setprecision(n)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) int(x.size())
int crds[1001];
int main() {
    IAMTRYINGandCRYING;
*/
/*int n,seraj=0,dima=0,left=0,right=n-1;cin>>n;
for(int i=0;i<n ;i++) cin>>cards[i];
for(int i=0;i<n;i++) {
    if (i % 2 == 0) {
        if (cards[left] >= cards[right]) {
            seraj += cards[left];
            left++;
        }
        else {
            seraj += cards[right];
            right--;
        }
    } else {
        if (cards[left] >= cards[right]) {
            dima += cards[left];
            left++;
        }
        else {
            dima += cards[right];
            right--;
        }
    }
}
cout<<seraj<<" "<<dima;*//*




    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>crds[i];
    int left=0,right=n-1,serj=0,dim=0;
    for(int i=0;i<n;i++) {
        if (i%2==0) {
            if(crds[left]>=crds[right]) {serj+=crds[left];left++;}
            else {serj+=crds[right];right--;}
        }
        else{
            if(crds[left]>=crds[right]) {dim+=crds[left];left++;}
            else {dim+=crds[right];right--;}
        }
    }
    cout<<serj<<" "<<dim;
}*/
